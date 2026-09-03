# Contents

This folder mirrors the standard ROS 2 Humble `.msg` / `.srv` source files from
[ros2/common_interfaces](https://github.com/ros2/common_interfaces/tree/humble).
These are the source-of-truth inputs to `pipeline/idl_pipeline.py`, which runs
`rosidl_adapter` plus repo-specific post-processing to produce the `.idl` text
that `fastddsgen` actually consumes. The cleaned `.idl` files live under
`processed_idls/` (committed) and the generated C++/Python bindings under
`provizio_dds_idls_fastdds/` (committed). See the repo-root `CLAUDE.md` for the
full pipeline description.

## License

ROS 2 is licensed under Apache 2.0 License, same as `provizio_dds_idls` repo. See [ros2/common_interfaces/LICENSE](https://github.com/ros2/common_interfaces/blob/humble/LICENSE)
