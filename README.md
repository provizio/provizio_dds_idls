# provizio_dds_idls

`.idl` files definining DDS API interfaces of Provizio software components.

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
