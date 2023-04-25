# Provizio DDS Topics

| Description | DDS Topic Name   | ROS 2 Topic Name | Data Type | C++ Type Name / Pub-Sub Type Name | Python Type Name / Pub-Sub Type Name | Built-in ROS 2 Type |
| ----------- | ---------------- | ---------------- | --------- | ------------- | ---------------- | ------------------- |
| Radar point cloud | rt/provizio_radar_point_cloud | /provizio_radar_point_cloud | [sensor_msgs/msg/PointCloud2](ros/sensor_msgs/msg/PointCloud2.idl) | `sensor_msgs::msg::PointCloud2` / `sensor_msgs::msg::PointCloud2PubSubType` | `provizio_dds.PointCloud2` / `provizio_dds.PointCloud2PubSubType` | [Yes](https://docs.ros2.org/latest/api/sensor_msgs/msg/PointCloud2.html) |
| Super-resolution enhanced radar point cloud | rt/provizio_radar_point_cloud_sr | /provizio_radar_point_cloud_sr | [sensor_msgs/msg/PointCloud2](ros/sensor_msgs/msg/PointCloud2.idl) | `sensor_msgs::msg::PointCloud2` / `sensor_msgs::msg::PointCloud2PubSubType` | `provizio_dds.PointCloud2` / `provizio_dds.PointCloud2PubSubType` | [Yes](https://docs.ros2.org/latest/api/sensor_msgs/msg/PointCloud2.html) |
| Radar info | rt/provizio_radar_info | /provizio_radar_info | [provizio/msg/radar_info](provizio/msg/radar_info.idl) | `provizio::msg::radar_info` / `provizio::msg::radar_infoPubSubType` | `provizio_dds.radar_info` / `provizio_dds.radar_infoPubSubType` | No |
