# Provizio DDS Topics

| Description | DDS Topic Name   | ROS 2 Topic Name | Data Type | Built-in ROS 2 Type |
| ----------- | ---------------- | ---------------- | --------- | ------------------- |
| Radar point cloud | rt/provizio_radar_point_cloud | /provizio_radar_point_cloud | [sensor_msgs/msg/PointCloud2](ros/sensor_msgs/msg/PointCloud2.idl) | [Yes](https://docs.ros2.org/latest/api/sensor_msgs/msg/PointCloud.html) |
| Super-resolution enhanced radar point cloud | rt/provizio_radar_point_cloud_sr | /provizio_radar_point_cloud_sr | [sensor_msgs/msg/PointCloud2](ros/sensor_msgs/msg/PointCloud2.idl) | [Yes](https://docs.ros2.org/latest/api/sensor_msgs/msg/PointCloud.html) |
| Radar info | rt/provizio_radar_info | /provizio_radar_info | [provizio/msg/radar_info](provizio/msg/radar_info.idl) | No |
