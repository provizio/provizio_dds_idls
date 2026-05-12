# provizio_dds_idls

`.idl` files definining DDS API interfaces of Provizio software components.

> **Note (PR in progress):** The `ros/<pkg>/{msg,srv,action}/` upstream-mirror
> switch from pre-generated `.idl` to ROS 2 `.msg`/`.srv` source files is
> deferred to a follow-up commit on this branch, to keep the changed-file
> count under the Copilot reviewer's 300-file cap. The pipeline
> (`pipeline/idl_pipeline.py`) and CMake wiring assume the post-switch
> layout — codegen will not run cleanly on this branch until the follow-up
> commit lands. This note is removed when that commit is applied.

## ROS2 Interoperability

Messages are intentionally defined to be [ROS2](https://www.ros.org/) compatible, despite Provizio DDS API being independent of ROS.
See also [ros/README.md](ros/README.md)

## Build Dependencies

- [Fast-DDS-Gen](https://fast-dds.docs.eprosima.com/en/latest/fastdds/dds_layer/topic/fastddsgen/fastddsgen.html) 4.3.0.0+ (paired with Fast-DDS 3.x at runtime)
- CMake 3.5+
- `rosidl_adapter` (from a ROS 2 distro, e.g. `apt install ros-jazzy-rosidl-adapter python3-empy`)

## Provizio Topics

See [the topics table](TOPICS.md)

## License

[Apache 2.0 License](LICENSE)
