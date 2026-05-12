#!/usr/bin/env python3
# Copyright 2026 Provizio Ltd.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0

"""Convert ROS2 .msg/.srv/.action source files to fastddsgen-ready .idl files.

Driven by CMake. For each package directory passed on the command line, walks
its msg/, srv/, and action/ subdirectories and produces matching .idl files
in the output tree. Six post-processing passes are applied on top of what
rosidl_adapter produces:

1. strip_verbatim — remove every `@verbatim (language=..., text=...)` block.
   fastddsgen v4 has a string-escaping bug in its emitted C++ source for the
   text-field contents; the annotations are documentation-only and
   contribute nothing to wire format or type identity.

2. fix_case_collisions — rewrite field declarations where the field name
   case-insensitively collides with its type's basename (the canonical
   "Header header;" pattern), with any other type defined in the package
   set, or with an IDL reserved word. Only matches PascalCase type names;
   primitive-typed fields are handled by pass 3. OMG IDL §7.2.3 forbids
   the type-vs-field case; fastddsgen v3 was permissive, v4 enforces.
   Renaming "header" to "_header" satisfies the parser; rosidl_adapter
   strips the leading underscore from generated C++/Python identifiers
   and the on-wire field name, so CDR encoding stays identical.

3. fix_primitive_field_keyword_collisions — same idea as pass 2 but
   targeting `<primitive> <field>;` declarations (e.g. `string default;`
   -> `string _default;`). Splits out of pass 2 because the main regex
   only matches PascalCase type basenames.

4. escape_idl_keyword_struct_names — append a trailing underscore to
   struct names whose lowercase form collides with an IDL reserved word
   (Bool, Byte, Char, String, Int8/16/32/64, UInt8/16/32/64). Trailing
   rather than leading: Fast-DDS's XTypes 1.3 is_type_name_consistent FSM
   rejects identifiers starting with `_` after `::`, so
   `<pkg>::msg::dds_::_String_` would fail TypeDescriptor validation
   inside ddsrecorder.

5. uniquify_typedefs — prefix primitive-array typedefs (`double__9`) with
   the file's struct stem so transitive includes don't redefine the same
   typedef name.

6. add_include_guard — wrap each .idl in #ifndef/#define so types reached
   via multiple include paths don't become duplicate definitions.

Usage:
    idl_pipeline.py --output-dir <dir> --package <name>=<path> [<name>=<path> ...]

For each --package, <path> is the directory containing msg/, srv/, and/or
action/ subdirectories with the .msg / .srv / .action source files. The
output IDLs land in <output-dir>/<name>/{msg,srv,action}/<Type>.idl.
"""

import argparse
import re
import sys
from pathlib import Path


# --------------------------------------------------------------------------- #
# Post-processing                                                             #
# --------------------------------------------------------------------------- #


def strip_verbatim(text: str) -> str:
    """Remove every `@verbatim (...)` block, balancing parens across newlines and
    respecting string literals so commas/parens inside strings don't confuse us.
    A single trailing newline immediately after the closing `)` is consumed so
    we don't leave stranded blank lines.
    """
    out: list[str] = []
    i = 0
    while i < len(text):
        m = re.search(r'@verbatim\s*\(', text[i:])
        if not m:
            out.append(text[i:])
            break
        out.append(text[i:i + m.start()])
        # Balance parens starting at the '(' that ends the regex match.
        j = i + m.end() - 1  # position of '('
        depth = 0
        in_str = False
        esc = False
        while j < len(text):
            c = text[j]
            if in_str:
                if esc:
                    esc = False
                elif c == '\\':
                    esc = True
                elif c == '"':
                    in_str = False
            else:
                if c == '"':
                    in_str = True
                elif c == '(':
                    depth += 1
                elif c == ')':
                    depth -= 1
                    if depth == 0:
                        j += 1
                        break
            j += 1
        i = j
        # Swallow trailing same-line whitespace + newline to avoid blank gaps.
        while i < len(text) and text[i] in ' \t':
            i += 1
        if i < len(text) and text[i] == '\n':
            i += 1
    return ''.join(out)


# Matches "<scope::*><TypeBasename> <field_name>;". We rewrite the field name
# to "_<field_name>" if lowercase(field) collides case-insensitively with
# EITHER (a) the type's basename in this exact declaration (the canonical
# "Header header;" pattern) OR (b) any other type defined across the package
# set. The latter catches the indirect case like "TwistWithCovariance twist;"
# where the field name "twist" clashes with the separately-defined `Twist`
# type that fastddsgen v4 considers in-scope through transitive includes.
_FIELD_DECL_RE = re.compile(
    r'(\b(?:[A-Za-z_]\w*::)*([A-Z][A-Za-z_]\w*))\s+([a-z_]\w*)\s*;'
)


def fix_case_collisions(text: str, known_type_names_lower: set) -> str:
    def repl(m):
        type_basename = m.group(2)
        field = m.group(3)
        field_lc = field.lower()
        # Three reasons to rename:
        # - case-collision with the very type used as the field's type
        # - case-collision with any other type known in the package set
        # - case-collision with an IDL reserved word from _IDL_KEYWORDS_LC
        #   (e.g. `map`, `default`) which fastddsgen would refuse to parse
        #   as a field identifier
        if (type_basename.lower() == field_lc or
                field_lc in known_type_names_lower or
                field_lc in _IDL_KEYWORDS_LC):
            return f'{m.group(1)} _{field};'
        return m.group(0)
    return _FIELD_DECL_RE.sub(repl, text)


# Primitive IDL types that can appear as a field's type. _FIELD_DECL_RE
# requires a PascalCase type basename and so misses primitive-typed fields
# (`string`, `uint32`, `boolean`, …). For those, only the IDL-keyword
# collision check applies — there's no struct-vs-field case-collision to
# worry about when the type is a primitive.
_PRIMITIVE_TYPES = (
    'boolean', 'octet', 'char', 'wchar', 'short', 'long', 'float', 'double',
    'string', 'wstring',
    'int8', 'int16', 'int32', 'int64',
    'uint8', 'uint16', 'uint32', 'uint64',
)
_PRIMITIVE_FIELD_RE = re.compile(
    r'(\b(?:unsigned\s+)?(?:' + '|'.join(_PRIMITIVE_TYPES) + r'))'
    r'(\s+)([a-z_]\w*)(\s*(?:\[\s*\d+\s*\])?\s*;)'
)


def fix_primitive_field_keyword_collisions(text: str) -> str:
    """Rename field declarations of the form `<primitive_type> <field>;`
    where `<field>` lowercased matches an IDL reserved word — e.g.,
    `string default;` would become `string _default;`. `_FIELD_DECL_RE`
    only matches PascalCase type basenames, so primitive-typed fields
    bypass it; without this pass, fastddsgen v4 would reject the IDL on
    such field names. Skips `//` line comments so prose inside docstrings
    isn't accidentally rewritten."""
    out_lines = []
    for line in text.splitlines(keepends=True):
        if line.lstrip().startswith('//'):
            out_lines.append(line)
            continue
        out_lines.append(_PRIMITIVE_FIELD_RE.sub(
            lambda m: (f'{m.group(1)}{m.group(2)}_{m.group(3)}{m.group(4)}'
                       if m.group(3).lower() in _IDL_KEYWORDS_LC
                       else m.group(0)),
            line))
    return ''.join(out_lines)


def collect_known_type_names(package_dirs):
    """Walk every .msg/.srv/.action source under the given package directories
    and collect lowercased filename stems. Used by fix_case_collisions to detect
    cross-type field-name collisions (e.g. `TwistWithCovariance twist;` where
    `twist` clashes with the separately-defined `Twist` type)."""
    names = set()
    for pkg_dir in package_dirs.values():
        for sub in ('msg', 'srv', 'action'):
            src_dir = pkg_dir / sub
            if not src_dir.is_dir():
                continue
            for src in src_dir.iterdir():
                if src.suffix in ('.msg', '.srv', '.action'):
                    names.add(src.stem.lower())
    return names


# OMG IDL keywords. fastddsgen v4 rejects struct names that match these
# case-insensitively. A few ROS2 std_msgs types (Bool, Byte, Char, String,
# Int8/16/32/64, UInt8/16/32/64) hit this rule; escape_idl_keyword_struct_names
# appends a trailing underscore (`String_`). The trailing underscore becomes
# part of the C++ identifier and the on-wire `<pkg>::msg::dds_::String_`
# TypeName — leading-underscore escaping per IDL §7.2.3 was legal IDL but
# trips Fast-DDS's is_type_name_consistent FSM on names like
# `std_msgs::msg::dds_::_String_`, so it was rejected here.
_IDL_KEYWORDS_LC = {
    'any', 'attribute', 'boolean', 'bool', 'case', 'char', 'component',
    'const', 'consumes', 'context', 'custom', 'default', 'double', 'emits',
    'enum', 'eventtype', 'exception', 'factory', 'false', 'finder', 'fixed',
    'float', 'getraises', 'home', 'import', 'in', 'inout', 'interface',
    'local', 'long', 'manages', 'module', 'multiple', 'native', 'object',
    'octet', 'oneway', 'out', 'primarykey', 'private', 'provides', 'public',
    'publishes', 'raises', 'readonly', 'sequence', 'setraises', 'short',
    'string', 'struct', 'supports', 'switch', 'true', 'truncatable',
    'typedef', 'typeid', 'typename', 'typeprefix', 'union', 'unsigned',
    'uses', 'valuebase', 'valuetype', 'void', 'wchar', 'wstring',
    'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64',
    'byte',
    # IDL also reserves a few template-style words; treating them as keywords
    # for collision purposes is safe since none are legitimate type names.
    'map',
}


def escape_idl_keyword_struct_names(text: str, keyword_struct_names: set) -> str:
    """Rename `struct Foo` to `struct Foo_` (and references in field types,
    module guards, etc.) for every struct name whose lowercase form collides
    with an IDL reserved word. A trailing underscore differentiates the
    identifier from the keyword while keeping the name valid under the
    DDS XTypes 1.3 fully-qualified-name FSM, which rejects identifiers that
    start with `_` immediately after `::`. The previous leading-underscore
    convention from IDL §7.2.3 is legal IDL but trips Fast-DDS's
    is_type_name_consistent check on names like `std_msgs::msg::dds_::_String_`,
    causing TypeDescriptor validation failures inside ddsrecorder.

    Skips `//` line comments so the rewrite doesn't touch the provenance
    header rosidl_adapter emits (`// with input from std_msgs/msg/Bool.msg`),
    which would otherwise become a misleading `Bool_.msg` reference.
    """
    if not keyword_struct_names:
        return text
    out_lines = []
    for line in text.splitlines(keepends=True):
        if line.lstrip().startswith('//'):
            out_lines.append(line)
            continue
        for name in keyword_struct_names:
            line = re.sub(rf'\b{re.escape(name)}\b', f'{name}_', line)
        out_lines.append(line)
    return ''.join(out_lines)


_TYPEDEF_RE = re.compile(
    r'^([ \t]*typedef\s+\S+\s+)(\w+)(\s*\[\s*\d+\s*\]\s*;)',
    re.MULTILINE,
)


def uniquify_typedefs(text: str, file_stem: str) -> str:
    """rosidl_adapter emits a fixed-size primitive array typedef per file
    (e.g. `typedef double double__36[36];`). When two files in the same module
    include the same typedef name into the same scope (via transitive
    includes), fastddsgen v4 errors on redefinition. Prefix every typedef in
    this file with the file's struct stem so the typedef name is globally
    unique without changing wire format (typedefs of primitive arrays are
    transparent at the CDR level)."""
    typedef_names = []
    for m in _TYPEDEF_RE.finditer(text):
        typedef_names.append(m.group(2))
    if not typedef_names:
        return text

    # Prefix with the file's struct stem, no leading underscore: Fast-DDS's
    # is_type_name_consistent FSM rejects names that start with `_` (or that
    # have `_` immediately after a `::` separator), and fastddsgen does emit
    # the literal typedef name in a few code paths where the anonymous
    # short-circuit doesn't apply.
    new_name_for = {name: f'{file_stem}__{name}' for name in typedef_names}

    # Rewrite the typedef declarations themselves and every word-boundary
    # reference to those names within this file. Within a single .idl the
    # typedef is used only by the struct here, so renaming is safe.
    def replace_decl(m):
        return f'{m.group(1)}{new_name_for[m.group(2)]}{m.group(3)}'
    text = _TYPEDEF_RE.sub(replace_decl, text)
    for old, new in new_name_for.items():
        text = re.sub(rf'\b{re.escape(old)}\b', new, text)
    return text


def add_include_guard(text: str, package: str, sub: str, type_name: str) -> str:
    """Wrap the IDL content in an #ifndef/#define/#endif guard. fastddsgen v4
    runs its IDL preprocessor recursively across transitive #includes; without
    guards, a type pulled in via multiple paths (e.g. Time.idl reached via both
    Header.idl and Duration.idl) shows up as a duplicate definition. The
    convention used here matches what Provizio shipped pre-3.x.
    """
    guard = f'__ros__{package}__{sub}__{type_name}__idl'
    return (
        f'#ifndef {guard}\n'
        f'#define {guard}\n'
        f'\n'
        f'{text.rstrip()}\n'
        f'\n'
        f'#endif // {guard}\n'
    )


def post_process(text: str, package: str, sub: str, type_name: str,
                 known_type_names_lower: set, keyword_struct_names: set) -> str:
    return add_include_guard(
        uniquify_typedefs(
            escape_idl_keyword_struct_names(
                fix_primitive_field_keyword_collisions(
                    fix_case_collisions(strip_verbatim(text), known_type_names_lower)),
                keyword_struct_names),
            type_name),
        package, sub, type_name)


def collect_keyword_struct_names(package_dirs):
    """Identify type names (filename stems) that case-insensitively collide
    with IDL reserved words. Those will be rewritten everywhere they appear
    (in struct declarations and in field type references)."""
    names = set()
    for pkg_dir in package_dirs.values():
        for sub in ('msg', 'srv', 'action'):
            src_dir = pkg_dir / sub
            if not src_dir.is_dir():
                continue
            for src in src_dir.iterdir():
                if src.suffix in ('.msg', '.srv', '.action'):
                    if src.stem.lower() in _IDL_KEYWORDS_LC:
                        names.add(src.stem)
    return names


# --------------------------------------------------------------------------- #
# rosidl_adapter invocation                                                   #
# --------------------------------------------------------------------------- #


def _ensure_rosidl_adapter_importable() -> None:
    """rosidl_adapter ships with /opt/ros/<distro>; empy (its templating engine)
    is shipped by Debian under /usr/lib/python3/dist-packages which is not on
    the python3.12 default sys.path. The CMake caller is expected to set
    PYTHONPATH appropriately, but we double-check here so error messages are
    legible.

    We also relax rosidl_adapter's message-name validator (it normally only
    accepts PascalCase, e.g. `RadarInfo`) to the ROS-1-compatible alternative
    embedded in the parser as a commented-out regex. Provizio's wire-format
    history uses snake_case message names (`radar_info`), and renaming them
    would change the wire-level type name `provizio::msg::dds_::<Type>_`,
    breaking compatibility with deployed radar firmware. The relaxation only
    affects what rosidl_adapter is willing to parse; it doesn't change any
    generated identifier or wire bytes.
    """
    try:
        import rosidl_adapter  # noqa: F401
        import rosidl_adapter.parser as _parser
        import em  # noqa: F401
    except ImportError as e:
        sys.exit(
            f'idl_pipeline: required Python module missing: {e}\n'
            f'  rosidl_adapter typically lives under /opt/ros/<distro>/lib/python*/site-packages\n'
            f'  empy is the python3-empy Debian package, installed at /usr/lib/python3/dist-packages\n'
            f'  Make sure both are on PYTHONPATH (CMake wraps the call to do this).'
        )
    _parser.VALID_MESSAGE_NAME_PATTERN = re.compile(r'^[A-Za-z][A-Za-z0-9_]*$')


def convert_one(package_dir: Path, package_name: str, rel_input: Path,
                output_dir: Path) -> Path:
    from rosidl_adapter.action import convert_action_to_idl
    from rosidl_adapter.msg import convert_msg_to_idl
    from rosidl_adapter.srv import convert_srv_to_idl

    output_dir.mkdir(parents=True, exist_ok=True)
    if rel_input.suffix == '.msg':
        return convert_msg_to_idl(package_dir, package_name, rel_input, output_dir)
    if rel_input.suffix == '.srv':
        return convert_srv_to_idl(package_dir, package_name, rel_input, output_dir)
    if rel_input.suffix == '.action':
        return convert_action_to_idl(package_dir, package_name, rel_input, output_dir)
    raise ValueError(f'Unsupported input suffix: {rel_input}')


# --------------------------------------------------------------------------- #
# Driver                                                                      #
# --------------------------------------------------------------------------- #


def process_package(package_name, package_dir, out_root, known_type_names_lower,
                    keyword_struct_names):
    """Convert every .msg/.srv/.action in package_dir to a post-processed .idl
    under out_root/<package_name>/{msg,srv,action}/. Returns the number of files
    emitted.
    """
    package_dir = package_dir.resolve()
    count = 0
    for sub in ('msg', 'srv', 'action'):
        src_dir = package_dir / sub
        if not src_dir.is_dir():
            continue
        for src in sorted(src_dir.iterdir()):
            if src.suffix not in ('.msg', '.srv', '.action'):
                continue
            rel_input = Path(sub) / src.name
            out_subdir = out_root / package_name / sub
            tmp_idl = convert_one(package_dir, package_name, rel_input, out_subdir)
            text = Path(tmp_idl).read_text(encoding='utf-8')
            # If this type's name itself collides with an IDL keyword, the
            # output file is also renamed to "<Name>_.idl" (trailing
            # underscore, matching escape_idl_keyword_struct_names) so
            # consumers reference it consistently.
            type_name = src.stem
            final_idl = tmp_idl
            if type_name in keyword_struct_names:
                final_idl = Path(tmp_idl).parent / f'{type_name}_.idl'
                Path(tmp_idl).rename(final_idl)
            Path(final_idl).write_text(
                post_process(text, package_name, sub, type_name,
                             known_type_names_lower, keyword_struct_names),
                encoding='utf-8')
            count += 1
    return count


def parse_args(argv: list[str]) -> argparse.Namespace:
    p = argparse.ArgumentParser(description=__doc__,
                                formatter_class=argparse.RawDescriptionHelpFormatter)
    p.add_argument('--output-dir', required=True, type=Path,
                   help='Root directory where processed .idl files will be written.')
    p.add_argument('--package', action='append', default=[], required=True,
                   metavar='NAME=PATH',
                   help='ROS-style package name and source directory. May be repeated.')
    return p.parse_args(argv)


def main(argv: list[str]) -> int:
    _ensure_rosidl_adapter_importable()
    args = parse_args(argv)

    args.output_dir = args.output_dir.resolve()
    args.output_dir.mkdir(parents=True, exist_ok=True)

    package_dirs = {}
    for entry in args.package:
        if '=' not in entry:
            sys.exit(f'idl_pipeline: --package expects NAME=PATH, got {entry!r}')
        name, path_str = entry.split('=', 1)
        path = Path(path_str)
        if not path.is_dir():
            sys.exit(f'idl_pipeline: package directory for {name!r} not found: {path}')
        package_dirs[name] = path

    # Pre-scan: collect every type's filename-stem across all packages so the
    # collision-rename pass can spot cross-type field-name clashes. Also detect
    # any type names that collide with IDL reserved words so they can be
    # consistently escaped (struct decl + every reference + filename).
    known_type_names_lower = collect_known_type_names(package_dirs)
    keyword_struct_names = collect_keyword_struct_names(package_dirs)

    total = 0
    for name, path in package_dirs.items():
        total += process_package(name, path, args.output_dir,
                                  known_type_names_lower, keyword_struct_names)
    print(f'idl_pipeline: emitted {total} cleaned .idl files under {args.output_dir}')
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv[1:]))
