# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## What this repo produces

C++ and Python Fast-DDS bindings for Provizio's DDS API plus the ROS 2 standard message packages we depend on. The generated C++ (`.hpp`/`.cxx`) lives under `provizio_dds_idls_fastdds/<pkg>/{msg,srv}/` and is **committed**; downstream consumers either pull these in via `SKIP_CODE_GENERATION=ON` or re-run the full pipeline locally. The post-processed `.idl` text that fastddsgen consumes is also committed under `processed_idls/<pkg>/{msg,srv}/` so MCAP/omgidl-schema consumers can read it without running `rosidl_adapter` themselves.

**Wire-format compatibility with deployed firmware is a hard constraint.** Renaming Provizio messages, changing field names, or dropping the `-typeros2` flag would change the on-wire `<pkg>::msg::dds_::<Type>_` type name and break existing radars. The pipeline goes to some length to preserve this — see the snake_case-validator relaxation in `_ensure_rosidl_adapter_importable()` and the `-typeros2` invocation in CMakeLists.txt.

## Build / regenerate

There is no test suite and no lint step — the build IS the verification. Successful CMake configure means every `.msg`/`.srv` passed through `rosidl_adapter` → post-processing → `fastddsgen` cleanly.

```bash
# Full regen (default — what CI does):
mkdir -p build && cd build && cmake ..

# Consume the committed generated tree without re-running fastddsgen:
cmake -DSKIP_CODE_GENERATION=ON ..

# Limit which ROS packages are processed (default is the full set in CMakeLists.txt):
cmake -DROS_PACKAGES="sensor_msgs;std_msgs" ..
```

Dependencies (installed in CI by `.github/workflows/install_dependencies.sh`):
- **Fast-DDS-Gen v4.3.0.0** (built from source via Gradle, paired with Fast-DDS 3.x runtime)
- **OpenJDK 17** (to build Fast-DDS-Gen)
- **rosidl_adapter** from ROS 2 Jazzy (Ubuntu Noble) or Humble (Ubuntu Jammy), installed as `ros-<distro>-rosidl-adapter`
- **python3-empy** (rosidl_adapter's templating backend, Debian package — not pip)

CMake splices `/opt/ros/<distro>/lib/python*/site-packages` and `/usr/lib/python3/dist-packages` into `PYTHONPATH` before launching the pipeline (these are not on the default `python3.12` sys.path on vanilla Ubuntu). If you see "rosidl_adapter not importable" locally, `source /opt/ros/<distro>/setup.bash` before invoking cmake, or `apt install ros-jazzy-rosidl-adapter python3-empy`.

## The codegen pipeline (the part that requires reading multiple files to understand)

Everything is driven from `CMakeLists.txt` (one big `execute_process` chain — no targets). The flow:

```
provizio/msg/*.msg                ros/<pkg>/msg/*.msg
provizio/srv/*.srv                ros/<pkg>/srv/*.srv
                                  ros/<pkg>/action/*.action  (where applicable)
       │                                       │
       └───────────────┬───────────────────────┘
                       ▼
           pipeline/idl_pipeline.py
              (rosidl_adapter + 6 post-process passes)
                       │
                       ▼
       build/processed_ros_idls/<pkg>/{msg,srv,action}/<Type>.idl
                       │
                       ├─── mirrored into processed_idls/   (committed)
                       │
                       ▼
              fastddsgen v4 (-typeros2 -de final -python)
                       │
                       ▼
              build/<project>_tmp_gen/<Type>.{hpp,cxx,...}
                       │
                       ├─── CMake post-codegen sed passes
                       │    (fix 5 fastddsgen v4 bugs)
                       │
                       ▼
       provizio_dds_idls_fastdds/<pkg>/{msg,srv}/<Type>.{hpp,cxx,...}  (committed)
```

**Source of truth** lives in `provizio/{msg,srv}/` and `ros/<pkg>/{msg,srv}/`. Edit those. The two output trees (`processed_idls/` and `provizio_dds_idls_fastdds/`) are committed but treated as generated: CI overwrites them on every push.

### The 6 pipeline post-process passes (`pipeline/idl_pipeline.py`)

`rosidl_adapter` alone produces IDL that fastddsgen v4 refuses to parse or that fastddsgen miscompiles. The pipeline applies these passes in order:

1. **strip `@verbatim`** — fastddsgen v4 has a string-escaping bug emitting text from these annotations into C++ source. They're documentation only, so we just remove them.
2. **fix case-collisions** (PascalCase types) — OMG IDL §7.2.3 forbids `Header header;` (field name case-collides with type basename). fastddsgen v3 was permissive; v4 enforces. We rename the field to `_header`. Also covers cross-type clashes (e.g. `TwistWithCovariance twist;` where another file defines `Twist`), and field names whose lowercase form matches an IDL reserved word in `_IDL_KEYWORDS_LC` (e.g. `map`, `default`).
3. **fix primitive-typed keyword collisions** — pass 2's regex only matches PascalCase type basenames, so `string default;` would pass through unchanged. This pass catches the same keyword-collision case for primitive-typed fields (`string`, `uint32`, `boolean`, …).
4. **escape IDL-keyword struct names** — `Bool`, `Byte`, `Char`, `String`, `Int8/16/32/64`, `UInt8/16/32/64` in `std_msgs` collide with IDL keywords case-insensitively. We prepend a leading underscore at the declaration site (`struct _String`) — the canonical OMG IDL §7.4.4.1 escaped-identifier form. The IDL parser strips the leading underscore at parse time, so `_String` and `String` denote the same identifier — fastddsgen v4 emits C++ class `String`, Python class `String`, and on-wire `std_msgs::msg::dds_::String_` (single trailing underscore added by `-typeros2`), matching stock ROS 2 and pre-3.x provizio_dds exactly. Field-type references to the escaped type (e.g. `std_msgs::msg::String stamp;`) don't need their own escape — they resolve by name lookup.
5. **uniquify typedefs** — `rosidl_adapter` emits primitive-array typedefs like `typedef double double__36[36];`. When two files in the same module include the same typedef name via transitive includes, fastddsgen v4 errors on redefinition. We prefix every typedef with the file's struct stem: `NavSatFix__double__9`.
6. **add include guard** — fastddsgen v4 runs its preprocessor recursively; without `#ifndef` guards, a type reached via multiple include paths (e.g. `Time.idl` via both `Header.idl` and `Duration.idl`) becomes a duplicate-definition error.

There's also a `_ensure_rosidl_adapter_importable()` shim that relaxes rosidl_adapter's `VALID_MESSAGE_NAME_PATTERN` from PascalCase-only to ROS-1-style (allowing `radar_info` etc.). This is **necessary** — Provizio's wire-format history uses snake_case message names. Renaming them would change `provizio::msg::dds_::<Type>_` and break deployed firmware.

### The post-codegen CMake passes (in `CMakeLists.txt`)

After `fastddsgen` runs, CMake patches `*TypeObjectSupport.cxx` for five fastddsgen-v4 bugs (see the `# Post-codegen: fix five fastddsgen v4.x bugs` block in `CMakeLists.txt`). Several of these were the original motivation for splitting the pipeline into a Python pre-process pass — `strip_verbatim` and `uniquify_typedefs` upstream make most of these patterns no longer appear in fastddsgen output for the current input set. The CMake passes are kept as defensive guards: cheap to run, and they will scrub the patterns if a future fastddsgen version regresses or a new input shape resurfaces them.

1. `PlacementKindValue` → `PlacementKind` (typedef doesn't exist in Fast-DDS 3.x)
2. Bare `BEFORE_DECLARATION` etc. → scoped `PlacementKind::BEFORE_DECLARATION`
3. Double-quote escape bug → collapse `""` to `"`
4. `text_X = "..."` / `language_X = "..."` doc strings → `= ""` (documentation metadata that fastddsgen miscompiles when it contains escaped quotes; now empty after `strip_verbatim` upstream)
5. `register_<primitive>__<N>_type_identifier(...)` → `inline ...` for primitive-array registrations only. Without `inline`, the same function name appears in multiple TUs (e.g. `double[9]` arrays appear in both `NavSatFix` and `CameraInfo`) and the linker errors on multiple-definition. Message-type registrations stay externally linked so they remain exported from the shared library. (The `uniquify_typedefs` pre-process pass renames the typedef itself, so the registration function name is now per-message — but this regex still matches any future primitive-array typedef that isn't uniquified.)

Also note the **flatten step** for fastddsgen's nested output. Because both the ROS IDL inputs live under `${PROCESSED_ROS_IDLS_DIR}` and that directory is also on the `-I` include path, fastddsgen mirrors the include-relative subdirectory in its output (`build/<project>_tmp_gen/processed_ros_idls/sensor_msgs/msg/Image.hpp`). The Provizio inputs use absolute paths and emit flat (`build/<project>_tmp_gen/radar_info.hpp`). The copy loop expects flat, so CMake walks the nested tree and moves everything up to the flat layout before the per-package copy.

## CI behavior

`.github/workflows/codegen.yml` runs on every push to non-`master`/non-`develop` branches:
1. Checks out the repo + Fast-DDS-Gen v4.3.0.0
2. Builds Fast-DDS-Gen via Gradle, installs it system-wide
3. Runs `cmake ..` (full regen pipeline)
4. **Auto-commits** any changes under `provizio_dds_idls_fastdds/` and `processed_idls/` with message `Types Wrapper Code Generated` (via `stefanzweifel/git-auto-commit-action`)

This means your manually-authored commits will be interleaved with bot commits. When cleaning history (`git-history-cleanup` skill), the `Types Wrapper Code Generated` commits should generally be squashed away — they're reproducible from the source `.msg`/`.srv` files and CI will regenerate them on the next push regardless.

## Source layout

- `provizio/{msg,srv}/` — Provizio types in ROS 2 `.msg`/`.srv` form (the source of truth). Snake_case filenames are intentional.
- `ros/<pkg>/{msg,srv}/` — Unmodified mirror of ROS 2 Humble `common_interfaces`. Treat as upstream — if you need a new type, copy it from `ros2/common_interfaces` rather than hand-editing.
- `pipeline/idl_pipeline.py` — The post-processing script described above. Has zero dependencies beyond stdlib + rosidl_adapter + empy.
- `processed_idls/` (committed, generated) — Post-pipeline `.idl` text that fastddsgen consumes. Downstream consumers like `apt_gui`'s MCAP omgidl schema map generator read this directly.
- `provizio_dds_idls_fastdds/` (committed, generated) — Final C++/Python bindings. This is what `provizio_dds` and downstream apps link against.
- `TOPICS.md` — Mapping of DDS topic name ↔ ROS 2 topic name ↔ C++/Python type for every published interface. Edit this when adding a new topic.
