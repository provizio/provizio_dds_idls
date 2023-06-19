# Provizio DDS Topics

| Description | DDS Topic Name   | ROS 2 Topic Name | Data Type | C++ Type Name / Pub-Sub Type Name | Python Type Name / Pub-Sub Type Name | Built-in ROS 2 Type |
| ----------- | ---------------- | ---------------- | --------- | ------------- | ---------------- | ------------------- |
| [Radar point cloud](#radar-point-cloud-fields) | rt/provizio_radar_point_cloud | /provizio_radar_point_cloud | [sensor_msgs/msg/PointCloud2](ros/sensor_msgs/msg/PointCloud2.idl) | `sensor_msgs::msg::PointCloud2` / `sensor_msgs::msg::PointCloud2PubSubType` | `provizio_dds.PointCloud2` / `provizio_dds.PointCloud2PubSubType` | [Yes](https://docs.ros2.org/latest/api/sensor_msgs/msg/PointCloud2.html) |
| [Super-resolution enhanced radar point cloud](#radar-point-cloud-fields) | rt/provizio_radar_point_cloud_sr | /provizio_radar_point_cloud_sr | [sensor_msgs/msg/PointCloud2](ros/sensor_msgs/msg/PointCloud2.idl) | `sensor_msgs::msg::PointCloud2` / `sensor_msgs::msg::PointCloud2PubSubType` | `provizio_dds.PointCloud2` / `provizio_dds.PointCloud2PubSubType` | [Yes](https://docs.ros2.org/latest/api/sensor_msgs/msg/PointCloud2.html) |
| Radar info | rt/provizio_radar_info | /provizio_radar_info | [provizio/msg/radar_info](provizio/msg/radar_info.idl) | `provizio::msg::radar_info` / `provizio::msg::radar_infoPubSubType` | `provizio_dds.radar_info` / `provizio_dds.radar_infoPubSubType` | No |
| Radar-based odometry | rt/provizio_radar_odometry | /provizio_radar_odometry | [nav_msgs/msg/Odometry](ros/nav_msgs/msg/Odometry.idl) | `nav_msgs::msg::Odometry` / `nav_msgs::msg::OdometryPubSubType` | `provizio_dds.Odometry` / `provizio_dds.OdometryPubSubType` | [Yes](https://docs.ros2.org/latest/api/nav_msgs/msg/Odometry.html) |
| [Entities](#entities-fields) | rt/provizio_entities | /provizio_entities | [sensor_msgs/msg/PointCloud2](ros/sensor_msgs/msg/PointCloud2.idl) | `sensor_msgs::msg::PointCloud2` / `sensor_msgs::msg::PointCloud2PubSubType` | `provizio_dds.PointCloud2` / `provizio_dds.PointCloud2PubSubType` | [Yes](https://docs.ros2.org/latest/api/sensor_msgs/msg/PointCloud2.html) |

## Radar Point Cloud: Fields

Radar point clouds (regular and super-resolution enhanced) can contain the following [point fields](https://docs.ros2.org/latest/api/sensor_msgs/msg/PointField.html):

| Description                                                       | Name                            | Data Type | Count | Field Presence                  |
| ----------------------------------------------------------------- | ------------------------------- | --------- | ----- | ------------------------------- |
| Radar-relative X (forward) position of the point in meters        | x                               | FLOAT32   | 1     | Always present                  |
| Radar-relative Y (left) position of the point in meters           | y                               | FLOAT32   | 1     | Always present                  |
| Radar-relative Z (up) position of the point in meters             | z                               | FLOAT32   | 1     | Always present                  |
| Radar-relative radial velocity of the point in meters per second  | radar_relative_radial_velocity  | FLOAT32   | 1     | Always present                  |
| Ground-relative radial velocity of the point in meters per second | ground_relative_radial_velocity | FLOAT32   | 1     | **Can be missing or NaN value** |
| Signal-to-noise ratio (dB)                                        | signal_to_noise_ratio           | FLOAT32   | 1     | Always present                  |

## Entities: Fields

Entities can contain the following [point fields](https://docs.ros2.org/latest/api/sensor_msgs/msg/PointField.html):

| Description                                                        | Name                            | Data Type | Count | Field Presence                              |
| ------------------------------------------------------------------ | ------------------------------- | --------- | ----- | ------------------------------------------- |
| Unique identifier of an entity persistent across frames            | entity_id                       | UINT32    | 1     | Always present                              |
| [Entity Class](#entities-classes)                                  | entity_class                    | UINT8     | 1     | Always present but can be 0, i.e. "Unknown" |
| Radar-relative X (forward) position of the centroid in meters      | x                               | FLOAT32   | 1     | Always present                              |
| Radar-relative Y (left) position of the centroid in meters         | y                               | FLOAT32   | 1     | Always present                              |
| Radar-relative Z (up) position of the centroid in meters           | z                               | FLOAT32   | 1     | Always present                              |
| Radar-relative radial velocity of the entity in meters per second  | radar_relative_radial_velocity  | FLOAT32   | 1     | Always present                              |
| Ground-relative radial velocity of the entity in meters per second | ground_relative_radial_velocity | FLOAT32   | 1     | **Can be missing or NaN value**             |
| Orientation quaternion: (x, y, z, w)                               | orientation                     | FLOAT32   | 4     | **Can be missing or NaN values**            |
| Bounding box size: (x, y, z) meters                                | size                            | FLOAT32   | 3     | **Can be missing or NaN values**            |
| Confidence the entity actually exists, 0..255                      | entity_confidence               | UINT8     | 1     | **Can be missing**                          |
| Confidence the entity class is correct, 0..255                     | entity_class_confidence         | UINT8     | 1     | **Can be missing**                          |

## Entities: Classes

| UINT8 id | Entity Class |
| -------- | ------------ |
| 0        | Unknown      |
| 1        | Pedestrian   |
| 2        | Cyclist      |
| 3        | Motorbike    |
| 4        | Car          |
| 5        | Truck        |
| 6        | Bus          |
| 7        | Obstacle     |
