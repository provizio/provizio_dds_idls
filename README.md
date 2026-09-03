# provizio_dds_idls

ROS 2 `.msg` / `.srv` definitions of Provizio's DDS API, plus the ROS 2
standard message packages those APIs depend on. A build-time pipeline
converts them into the `.idl` text that Fast-DDS-Gen consumes and the
generated C++/Python bindings that downstream code links against.

## Layout

```
provizio_dds_idls/
├── provizio/
│   ├── msg/        # Provizio-specific messages (.msg)
│   └── srv/        # Provizio-specific services (.srv)
├── ros/            # Mirrored ROS 2 standard packages (.msg/.srv/.action)
├── pipeline/
│   └── idl_pipeline.py    # rosidl_adapter → post-processing → .idl
├── processed_idls/        # Committed post-processed .idl files
├── provizio_dds_idls_fastdds/   # Committed Fast-DDS-Gen output (.hpp/.cxx)
├── TOPICS.md              # Provizio topic name ↔ message type table
└── CMakeLists.txt
```

`provizio/msg/` and `provizio/srv/` are the source of truth — every other
artifact (`processed_idls/*.idl`, `provizio_dds_idls_fastdds/*.{hpp,cxx}`)
is regenerated from these by the CMake build. The generated trees are
committed so downstream consumers can opt out of running the pipeline
themselves (`-DSKIP_CODE_GENERATION=ON`).

## ROS 2 Interoperability

Provizio messages are intentionally defined as ROS 2 `.msg` / `.srv`
files so they can be consumed directly by ROS 2 nodes and recorded with
standard `ros2 bag` / `mcap` tooling. The on-wire type names use the
ROS 2 `<pkg>::msg::dds_::<Type>_` convention via Fast-DDS-Gen's
`-typeros2` flag. See [`ros/README.md`](ros/README.md) for which ROS 2
distribution the bundled standard messages are mirrored from.

## How the pipeline works

For each `.msg` / `.srv` / `.action` source file under the configured
ROS packages, `pipeline/idl_pipeline.py` runs the upstream
`rosidl_adapter` and then applies six post-processing passes that
together make the output safe for fastddsgen v4 to consume without
losing wire-format compatibility with deployed firmware:

1. Strip every `@verbatim (language=…, text=…)` annotation block —
   fastddsgen v4 has a string-escaping bug in its emitted C++ for the
   text field; the annotations are documentation-only and don't affect
   wire format or type identity.
2. Rewrite field declarations where the field name case-insensitively
   collides with its type or with any other type in the package set
   (OMG IDL §7.2.3). `Header header` is the canonical example —
   becomes `Header _header`. `rosidl_adapter` strips the leading
   underscore in generated C++/Python, so CDR stays identical.
3. Apply the same rewrite to primitive-typed fields whose names hit
   an IDL reserved word (e.g. `string default` → `string _default`).
4. OMG IDL §7.4.4.1 keyword escape: prepend a leading underscore to
   struct declarations whose name collides with an IDL reserved word
   (`struct Bool` → `struct _Bool`). fastddsgen v4 strips the leading
   underscore at parse time, so the generated C++ class is `Bool`,
   the Python class is `Bool`, and the on-wire DDS type name is
   `std_msgs::msg::dds_::Bool_` — matching stock ROS 2 and pre-3.x
   provizio_dds. (Affects Bool, Byte, Char, String, and the
   {Int,UInt}{8,16,32,64} std_msgs types.)
5. Uniquify primitive-array typedefs (`typedef double double__36[36]`)
   by prefixing them with the file's struct stem, so transitive
   includes can't redefine the same typedef name.
6. Wrap each `.idl` in an `#ifndef/#define/#endif` include guard so
   types reached via multiple paths don't trip duplicate-definition
   errors in fastddsgen's recursive preprocessor.

The processed `.idl` files are committed under `processed_idls/`. The
fastddsgen-emitted `.hpp`/`.cxx` artifacts are committed under
`provizio_dds_idls_fastdds/`.

## Build / regenerate

There is no test suite — the CMake build itself is the verification.
Successful configure means every input passed through
`rosidl_adapter` → post-processing → `fastddsgen` cleanly.

```bash
# Full regenerate from .msg/.srv source (what CI does):
mkdir -p build && cd build && cmake ..

# Reuse the committed generated tree (skip fastddsgen entirely):
cmake -DSKIP_CODE_GENERATION=ON ..

# Process only a subset of ROS packages (default: full set):
cmake -DROS_PACKAGES="sensor_msgs;std_msgs" ..
```

### Build dependencies

- [Fast-DDS-Gen](https://fast-dds.docs.eprosima.com/en/latest/fastdds/dds_layer/topic/fastddsgen/fastddsgen.html)
  4.3.0.0+ (paired with Fast-DDS 3.x at runtime). Built from source via
  Gradle, requires OpenJDK 17.
- CMake 3.5+
- `rosidl_adapter` from a ROS 2 distro (e.g. `apt install
  ros-jazzy-rosidl-adapter`)
- `python3-empy` (rosidl_adapter's templating backend, Debian package
  — not pip-installable as a drop-in)

`CMakeLists.txt` arranges PYTHONPATH so that ROS-shipped
`rosidl_adapter` finds the system `empy`.

## Wire-format compatibility

The on-wire `<pkg>::msg::dds_::<Type>_` type names are a hard interop
contract with deployed firmware: every Provizio radar, fleet pipeline,
and recorded MCAP speaks this exact form. Renaming a Provizio message,
changing a field name, or dropping `-typeros2` from the fastddsgen
invocation would break that contract. The `idl_pipeline.py` doc string
documents the specific historical regressions that motivated each pass.

## Provizio Topics

See the [topics table](TOPICS.md) for the full topic name ↔ message
type ↔ direction mapping.

## License

[Apache 2.0 License](LICENSE)
