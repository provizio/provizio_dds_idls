# Provizio DDS Topics

## Messages

| Description | DDS Topic Name   | ROS 2 Topic Name | Data Type | C++ Type Name / Pub-Sub Type Name | Python Type Name / Pub-Sub Type Name | Built-in ROS 2 Type |
| ----------- | ---------------- | ---------------- | --------- | ------------- | ---------------- | ------------------- |
| [Radar point cloud](#radar-point-cloud-fields) | rt/provizio_radar_point_cloud | /provizio_radar_point_cloud | [sensor_msgs/msg/PointCloud2](ros/sensor_msgs/msg/PointCloud2.msg) | `sensor_msgs::msg::PointCloud2` / `sensor_msgs::msg::PointCloud2PubSubType` | `provizio_dds.PointCloud2` / `provizio_dds.PointCloud2PubSubType` | [Yes](https://docs.ros2.org/latest/api/sensor_msgs/msg/PointCloud2.html) |
| [Super-resolution enhanced radar point cloud](#radar-point-cloud-fields) | rt/provizio_radar_point_cloud_sr | /provizio_radar_point_cloud_sr | [sensor_msgs/msg/PointCloud2](ros/sensor_msgs/msg/PointCloud2.msg) | `sensor_msgs::msg::PointCloud2` / `sensor_msgs::msg::PointCloud2PubSubType` | `provizio_dds.PointCloud2` / `provizio_dds.PointCloud2PubSubType` | [Yes](https://docs.ros2.org/latest/api/sensor_msgs/msg/PointCloud2.html) |
| Radar info | rt/provizio_radar_info | /provizio_radar_info | [provizio/msg/radar_info](provizio/msg/radar_info.msg) | `provizio::msg::radar_info` / `provizio::msg::radar_infoPubSubType` | `provizio_dds.radar_info` / `provizio_dds.radar_infoPubSubType` | No |
| [Generic sensor/frame metadata](#metadata-fields) | rt/provizio_metadata | /provizio_metadata | [provizio/msg/metadata](provizio/msg/metadata.msg) | `provizio::msg::metadata` / `provizio::msg::metadataPubSubType` | `provizio_dds.metadata` / `provizio_dds.metadataPubSubType` | No |
| Radar-based odometry | rt/provizio_radar_odometry | /provizio_radar_odometry | [nav_msgs/msg/Odometry](ros/nav_msgs/msg/Odometry.msg) | `nav_msgs::msg::Odometry` / `nav_msgs::msg::OdometryPubSubType` | `provizio_dds.Odometry` / `provizio_dds.OdometryPubSubType` | [Yes](https://docs.ros2.org/latest/api/nav_msgs/msg/Odometry.html) |
| [Radar-based entities](#entities-fields) | rt/provizio_entities | /provizio_entities | [sensor_msgs/msg/PointCloud2](ros/sensor_msgs/msg/PointCloud2.msg) | `sensor_msgs::msg::PointCloud2` / `sensor_msgs::msg::PointCloud2PubSubType` | `provizio_dds.PointCloud2` / `provizio_dds.PointCloud2PubSubType` | [Yes](https://docs.ros2.org/latest/api/sensor_msgs/msg/PointCloud2.html) |
| [Camera-based entities](#entities-fields) | rt/provizio_entities_camera | /provizio_entities_camera | [sensor_msgs/msg/PointCloud2](ros/sensor_msgs/msg/PointCloud2.msg) | `sensor_msgs::msg::PointCloud2` / `sensor_msgs::msg::PointCloud2PubSubType` | `provizio_dds.PointCloud2` / `provizio_dds.PointCloud2PubSubType` | [Yes](https://docs.ros2.org/latest/api/sensor_msgs/msg/PointCloud2.html) |
| [Fusion-based entities](#entities-fields) | rt/provizio_entities_fusion | /provizio_entities_fusion | [sensor_msgs/msg/PointCloud2](ros/sensor_msgs/msg/PointCloud2.msg) | `sensor_msgs::msg::PointCloud2` / `sensor_msgs::msg::PointCloud2PubSubType` | `provizio_dds.PointCloud2` / `provizio_dds.PointCloud2PubSubType` | [Yes](https://docs.ros2.org/latest/api/sensor_msgs/msg/PointCloud2.html) |
| [Compressed camera frames](#compressed-video) | rt/provizio_camera/compressed | /provizio_camera/compressed | [sensor_msgs/msg/CompressedImage](ros/sensor_msgs/msg/CompressedImage.msg) | `sensor_msgs::msg::CompressedImage` / `sensor_msgs::msg::CompressedImagePubSubType` | `provizio_dds.CompressedImage` / `provizio_dds.CompressedImagePubSubType` | [Yes](https://docs.ros2.org/latest/api/sensor_msgs/msg/CompressedImage.html) |
| [Compressed image freespace](#compressed-video) | rt/provizio_freespace/compressed | /provizio_freespace/compressed | [sensor_msgs/msg/CompressedImage](ros/sensor_msgs/msg/CompressedImage.msg) | `sensor_msgs::msg::CompressedImage` / `sensor_msgs::msg::CompressedImagePubSubType` | `provizio_dds.CompressedImage` / `provizio_dds.CompressedImagePubSubType` | [Yes](https://docs.ros2.org/latest/api/sensor_msgs/msg/CompressedImage.html) |
| **Obsolete** — [uncompressed camera frames](#compressed-video) | rt/provizio_camera | /provizio_camera | [sensor_msgs/msg/Image](ros/sensor_msgs/msg/Image.msg) | `sensor_msgs::msg::Image` / `sensor_msgs::msg::ImagePubSubType` | `provizio_dds.Image` / `provizio_dds.ImagePubSubType` | [Yes](https://docs.ros2.org/latest/api/sensor_msgs/msg/Image.html) |
| **Obsolete** — [uncompressed image freespace](#raw-image-freespaces) | rt/provizio_freespace | /provizio_freespace | [sensor_msgs/msg/Image](ros/sensor_msgs/msg/Image.msg) | `sensor_msgs::msg::Image` / `sensor_msgs::msg::ImagePubSubType` | `provizio_dds.Image` / `provizio_dds.ImagePubSubType` | [Yes](https://docs.ros2.org/latest/api/sensor_msgs/msg/Image.html) |
| [Lidar point cloud](#lidar-point-cloud) | rt/lidar_point_cloud | /lidar_point_cloud | [sensor_msgs/msg/PointCloud2](ros/sensor_msgs/msg/PointCloud2.msg) | `sensor_msgs::msg::PointCloud2` / `sensor_msgs::msg::PointCloud2PubSubType` | `provizio_dds.PointCloud2` / `provizio_dds.PointCloud2PubSubType` | [Yes](https://docs.ros2.org/latest/api/sensor_msgs/msg/PointCloud2.html) |
| [Sensor extrinsics](#extrinsics-and-intrinsics) | rt/provizio_extrinsics | /provizio_extrinsics | [geometry_msgs/msg/TransformStamped](ros/geometry_msgs/msg/TransformStamped.msg) | `geometry_msgs::msg::TransformStamped` / `geometry_msgs::msg::TransformStampedPubSubType` | `provizio_dds.TransformStamped` / `provizio_dds.TransformStampedPubSubType` | [Yes](https://docs.ros2.org/latest/api/geometry_msgs/msg/TransformStamped.html) |
| [Camera intrinsics](#extrinsics-and-intrinsics) | rt/provizio_camera_intrinsics | /provizio_camera_intrinsics | [provizio/msg/camera_intrinsics](provizio/msg/camera_intrinsics.msg) | `provizio::msg::camera_intrinsics` / `provizio::msg::camera_intrinsicsPubSubType` | `provizio_dds.camera_intrinsics` / `provizio_dds.camera_intrinsicsPubSubType` | No |
| [GNSS fix](#gnss) | rt/provizio_nav_sat_fix | /provizio_nav_sat_fix | [sensor_msgs/msg/NavSatFix](ros/sensor_msgs/msg/NavSatFix.msg) | `sensor_msgs::msg::NavSatFix` / `sensor_msgs::msg::NavSatFixPubSubType` | `provizio_dds.NavSatFix` / `provizio_dds.NavSatFixPubSubType` | [Yes](https://docs.ros2.org/latest/api/sensor_msgs/msg/NavSatFix.html) |
| [GNSS fix with heading](#gnss) | rt/provizio_nav_sat_fix_heading | /provizio_nav_sat_fix_heading | [provizio/msg/nav_sat_fix_with_heading](provizio/msg/nav_sat_fix_with_heading.msg) | `provizio::msg::nav_sat_fix_with_heading` / `provizio::msg::nav_sat_fix_with_headingPubSubType` | `provizio_dds.nav_sat_fix_with_heading` / `provizio_dds.nav_sat_fix_with_headingPubSubType` | No |
| **Obsolete** — [radar range control](#setting-a-radars-range) | rt/provizio_set_radar_range | /provizio_set_radar_range | `provizio/msg/set_radar_range` (no longer generated) | — | — | No |
| [Freespace polygons](#polygonal-freespaces) | rt/provizio_freespace_poly | /provizio_freespace_poly | [geometry_msgs/msg/PolygonInstanceStamped.msg](ros/geometry_msgs/msg/PolygonInstanceStamped.msg) | `geometry_msgs::msg::PolygonInstanceStamped` / `geometry_msgs::msg::PolygonInstanceStampedPubSubType` | `provizio_dds.PolygonInstanceStamped` / `provizio_dds.PolygonInstanceStampedPubSubType` | [Yes](https://github.com/ros2/common_interfaces/blob/master/geometry_msgs/msg/PolygonInstanceStamped.msg) |
| [Camera freespace polygons](#polygonal-freespaces) | rt/provizio_freespace_camera_poly | /provizio_freespace_camera_poly | [geometry_msgs/msg/PolygonInstanceStamped.msg](ros/geometry_msgs/msg/PolygonInstanceStamped.msg) | `geometry_msgs::msg::PolygonInstanceStamped` / `geometry_msgs::msg::PolygonInstanceStampedPubSubType` | `provizio_dds.PolygonInstanceStamped` / `provizio_dds.PolygonInstanceStampedPubSubType` | [Yes](https://github.com/ros2/common_interfaces/blob/master/geometry_msgs/msg/PolygonInstanceStamped.msg) |

## Services

| Description | Service Name (same in provizio_dds and ROS 2) | Request DDS Topic Name | Response DDS Topic Name | Request Data Type | Response Data Type | C++ Type Names / Pub-Sub Type Names | Python Type Names / Pub-Sub Type Names |
| ----------- | --------------------------------------------- | ---------------------- | ----------------------- | ------------------| ------------------ | ----------------------------------- | -------------------------------------- |
| Setting radar range | [provizio_set_radar_range](provizio/srv/set_radar_range.srv) | rq/provizio_set_radar_rangeRequest | rr/provizio_set_radar_rangeReply | provizio/srv/set_radar_range_Request | provizio/srv/set_radar_range_Response | `provizio::srv::set_radar_range_Request` / `provizio::srv::set_radar_range_RequestPubSubType` & `provizio::srv::set_radar_range_Response` / `provizio::srv::set_radar_range_ResponsePubSubType` | `provizio_dds.set_radar_range_Request` / `provizio_dds.set_radar_range_RequestPubSubType` & `provizio_dds.set_radar_range_Response` / `provizio_dds.set_radar_range_ResponsePubSubType` |

## Setting a Radar's Range

A radar's operating range is changed through the
[`provizio_set_radar_range`](provizio/srv/set_radar_range.srv) service listed above. The
request names the range to switch to, and optionally a `serial_number` so that only one radar
of several acts on it; the response says whether the change succeeded and reports the radar's
`supported_ranges` and `current_range`. Range values are the constants in
[Radar range values](#radar-range-values).

### Obsolete: the `rt/provizio_set_radar_range` topic

Before the service existed, the same change was requested by publishing a
`provizio::msg::set_radar_range` message — a `Header`, an optional `serial_number` and a
`target_range` — to the plain `rt/provizio_set_radar_range` topic. It was one-way: nothing
confirmed that a radar had received the request, that it had applied it, or that the range was
one the radar supports, which is what the request/response form exists to provide.

The message type is no longer generated, so current bindings cannot publish or subscribe it.
The topic is documented because recordings made before the change still contain it, and a tool
reading those recordings will encounter the channel.

## Metadata: Fields

[`metadata`](provizio/msg/metadata.msg) messages carry a `Header` (`frame_id` +
`stamp`), a `source` string identifying the producing subsystem, and an open
list of `parameters` — each an
[`rcl_interfaces/Parameter`](ros/rcl_interfaces/msg/Parameter.msg): a `name`
plus a typed `ParameterValue`. The parameters published for each `source` are
documented below. New sources, or new parameters within a source, can be added
without changing the message type.

### Radar (`source` = `"radar"`)

Radar metadata is the open-schema equivalent of
[`radar_info`](provizio/msg/radar_info.msg), plus `multiplex` and `radar_model`:

| Parameter `name`   | `ParameterValue` type                     | Description |
| ------------------ | ----------------------------------------- | ----------- |
| `serial_number`    | string (`PARAMETER_STRING`)               | Radar serial number. |
| `radar_model`      | string (`PARAMETER_STRING`)               | Radar model identifier. |
| `multiplex`        | string (`PARAMETER_STRING`)               | Multiplexing scheme. One of: `TDMA`, `DDMA`, `SPTDMA` (can be extended in the future). |
| `current_range`    | integer (`PARAMETER_INTEGER`)             | The radar's current operating range mode — see [Radar range values](#radar-range-values). |
| `supported_ranges` | integer array (`PARAMETER_INTEGER_ARRAY`) | The discrete set of range modes the radar can switch to — see [Radar range values](#radar-range-values). |

#### Radar range values

`current_range` and `supported_ranges` use the same encoding as `radar_info`'s
range constants:

| Value | Range              |
| ----- | ------------------ |
| 0     | `SHORT_RANGE`      |
| 1     | `MEDIUM_RANGE`     |
| 2     | `LONG_RANGE`       |
| 3     | `ULTRA_LONG_RANGE` |
| 4     | `HYPER_LONG_RANGE` |
| 65535 | `UNKNOWN_RANGE`    |

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

Entities can be radar-detected, camera-detected or fused, and hence can contain the following set of [point fields](https://docs.ros2.org/latest/api/sensor_msgs/msg/PointField.html):

| Description                                                                          | Name                            | Data Type | Count | Field Presence                                                                                            |
| ------------------------------------------------------------------------------------ | ------------------------------- | --------- | ----- | --------------------------------------------------------------------------------------------------------- |
| Unique identifier of an entity persistent across frames, radar-based                 | entity_id                       | UINT32    | 1     | Present in radar/fusion-detected entities, **missing in camera-detected entities**                        |
| Unique identifier of an entity persistent across frames, camera-based                | camera_entity_id                | UINT32    | 1     | Present in camera/fusion-detected entities, **missing in radar entities**                                 |
| [Entity Class](#entities-classes)                                                    | entity_class                    | UINT8     | 1     | Always present but can be 0, i.e. "Unknown"                                                               |
| Sensor-relative X (forward) position of the centroid in meters                       | x                               | FLOAT32   | 1     | Always present, **can be NaN in camera-detected entities**                                                |
| Sensor-relative Y (left) position of the centroid in meters                          | y                               | FLOAT32   | 1     | Always present, **can be NaN in camera-detected entities**                                                |
| Sensor-relative Z (up) position of the centroid in meters                            | z                               | FLOAT32   | 1     | Always present, **can be NaN in camera-detected entities**                                                |
| Sensor-relative radial velocity of the entity in meters per second                   | radar_relative_radial_velocity  | FLOAT32   | 1     | Present in radar/fusion-detected entities, **missing in camera-detected entities**                        |
| Ground-relative radial velocity of the entity in meters per second                   | ground_relative_radial_velocity | FLOAT32   | 1     | **Can be missing or NaN value, always missing in camera-detected entities**                               |
| Orientation quaternion: (x, y, z, w)                                                 | orientation                     | FLOAT32   | 4     | **Can be missing or NaN value, always missing in camera-detected entities**                               |
| Bounding box size: (x, y, z) meters                                                  | size                            | FLOAT32   | 3     | **Can be missing or NaN value, always missing in camera-detected entities**                               |
| Camera-space 2D bounding box: (left, top, right, bottom), 0..1 from picture left/top | camera_bbox                     | FLOAT32   | 4     | Present in camera-detected entities, **missing in radar-detected entities, can be NaN in fused entities** |
| Confidence the entity actually exists, 0..255                                        | entity_confidence               | UINT8     | 1     | **Can be missing**                                                                                        |
| Confidence the entity class is correct, 0..255                                       | entity_class_confidence         | UINT8     | 1     | **Can be missing**                                                                                        |

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

## Compressed Video

Camera frames and image freespaces are published compressed. A DDS topic carries one type,
so the compressed stream does not replace the contents of the uncompressed topic but travels
on a sibling of it, named the way `image_transport` names one — `<base topic>/compressed`:

| Uncompressed (obsolete)  | Compressed                          |
| ------------------------ | ----------------------------------- |
| `rt/provizio_camera`     | `rt/provizio_camera/compressed`     |
| `rt/provizio_freespace`  | `rt/provizio_freespace/compressed`  |

A publisher sends one or the other, not both, so a consumer that wants to work with either
subscribes to both topics and takes whichever arrives. A recording likewise holds only the
topic its producer published.

### Why the uncompressed topics are obsolete

Uncompressed frames cost roughly 156 Mbps per camera at 960x540 and 25 fps, which no remote
link carries and which is a significant fraction of what a recording can be expected to hold.
The same footage as VP9 costs around 1.5 Mbps. New publishers and consumers should use the
compressed topics; the uncompressed ones remain documented because deployed software still
produces and reads them.

### Format field

`CompressedImage.format` is free-form in ROS 2, which is what lets the same message carry a
video codec as well as a still-image one. Provizio uses these values:

| `format` | Contents                                                                 |
| -------- | ------------------------------------------------------------------------ |
| `vp9`    | One VP9 frame per message. **Recommended.**                              |
| `vp8`    | One VP8 frame per message. Around twice as cheap to encode, roughly a third larger. |
| `jpeg`   | A complete JPEG image. Intra-only, so every message stands on its own.   |
| `png`    | A complete PNG image. Lossless, so it suits synthesised overlays such as a freespace mask, whose flat colours and hard class boundaries a lossy codec smears. |

`vp8` and `vp9` are inter-predicted: a message that is not a key frame decodes only against
the frames before it, so a consumer joining a live stream produces nothing until the next key
frame, and one that misses a message must wait for a key frame before it can decode again.

### Why VP9

VP9 is the recommended codec because it is the best available balance of the three properties
that matter here, rather than the best on any one of them:

- **Encoding cost.** Compression has to run on the vehicle, alongside radar processing and
  often on a platform with no video encoder of its own — a Jetson Orin Nano has none at all.
  VP9 at realtime settings costs about three quarters of one Cortex-A78AE core at 1280x720 and
  25 fps, and around one and a half cores at 1920x1080, which leaves the remaining cores to the
  work they exist for.
- **Decoding cost and hardware support.** Consumers range from desktop players to browsers on
  modest hardware, and VP9 decoding is accelerated in hardware across essentially every current
  GPU, mobile SoC and browser. Software decoding, where hardware is absent, is also cheap.
- **Availability.** VP9 is royalty-free and decodable everywhere without licensing questions,
  through libvpx on desktop and through the browser's own `VideoDecoder` on the web.

AV1 and the emerging AV2 compress better at the same quality, but neither is the right choice
today: their encoders are far more computationally demanding at equivalent settings, which is
the cost this system can least afford, and hardware decoding for AV1 is still limited to recent
devices while AV2 has essentially none. H.264 and H.265 have the widest hardware support of
all, but carry patent licensing obligations that VP9 does not. VP9 is chosen because it is
cheap enough to encode on the vehicle, cheap and widely accelerated to decode off it, and free
of those obligations.

## Lidar Point Cloud

Lidar point clouds use the same [`PointCloud2`](ros/sensor_msgs/msg/PointCloud2.msg) type as
radar ones, on `rt/lidar_point_cloud`, and carry at least `x`, `y` and `z` in the sensor's own
frame. Which further fields are present depends on the lidar; consumers should read the
message's own `fields` rather than assume a layout.

## Extrinsics and Intrinsics

Calibration travels on its own topics so that a consumer can place every sensor's data in a
common frame without being configured separately.

### Extrinsics — `rt/provizio_extrinsics`

Each [`TransformStamped`](ros/geometry_msgs/msg/TransformStamped.msg) gives one sensor's pose:
`header.frame_id` names the frame the transform is expressed in, `child_frame_id` names the
sensor, and `transform` carries the translation in metres and the rotation as a quaternion. One
message is published per sensor, repeatedly rather than once, so that a consumer which starts
late still receives the full set.

This is the **tf2 format**, not a Provizio one: `TransformStamped` is the message tf2 is built
on, and the fields carry tf2's own meaning — parent frame in `header.frame_id`, child in
`child_frame_id`, and a right-handed translation and rotation from the one to the other. ROS 2
tooling can therefore use these transforms directly, RViz included, with no conversion.

The only thing to note when feeding a tf2 tree is that tf2's own topics, `/tf` and `/tf_static`,
carry [`tf2_msgs/TFMessage`](ros/tf2_msgs/msg/TFMessage.msg) — an array of exactly these
messages — so a relay wraps each one in a single-element array rather than translating it.
Because extrinsics are fixed for a given vehicle build and republished rather than sent once,
`/tf_static` is the topic they belong on.

### Camera intrinsics — `rt/provizio_camera_intrinsics`

[`camera_intrinsics`](provizio/msg/camera_intrinsics.msg) identifies its camera through
`header.frame_id` and carries either a
[perspective](provizio/msg/camera_intrinsics_perspective.msg) or an
[orthographic](provizio/msg/camera_intrinsics_orthographic.msg) sub-message depending on the
projection model the camera uses; the other is left at its default values. As with extrinsics,
these are published repeatedly.

## GNSS

Two topics carry position, and a producer publishes whichever it can:

- `rt/provizio_nav_sat_fix` — a standard
  [`NavSatFix`](ros/sensor_msgs/msg/NavSatFix.msg): latitude, longitude, altitude and their
  covariance.
- `rt/provizio_nav_sat_fix_heading` —
  [`nav_sat_fix_with_heading`](provizio/msg/nav_sat_fix_with_heading.msg), the same fix plus a
  heading, for receivers that resolve orientation as well as position.

A consumer that can use heading should subscribe to both and prefer the heading-bearing topic
when it is present.

## Freespace

There are 2 ways of representing freespaces: [Polygonal](#polygonal-freespaces) and [Raw Images](#raw-image-freespaces). Please see below for more details.

An image freespace is published compressed, on `rt/provizio_freespace/compressed` — see
[Compressed Video](#compressed-video). PNG is the format to use for one: the image is drawn
from a handful of flat colours, which a lossy codec smears across exactly the class boundaries
the overlay exists to draw, and for flat colours PNG is also the smaller of the two.

### Polygonal Freespaces

The primary way of representing freespace is in the form of [polygons](ros/geometry_msgs/msg/PolygonInstanceStamped.msg). The polygons are represented as sequences of vertices defining their outlines. They can be both convex and concave. The "id" specifies the type of polygon, with 0 standing for freespaces.

There can be single or multiple polygons per frame. Later case produces multiple `PolygonInstanceStamped` messages with the same `frame_id` and `stamp`.

### Raw Image Freespaces

> The uncompressed `rt/provizio_freespace` topic is obsolete — see
> [Compressed Video](#compressed-video). What follows describes the image itself, which is the
> same whether it arrives compressed or not.

Freespace can also be provided in the form of images. Black pixels (#000000) stand for non-freespace, while gray-blue (#434758 HEX) pixels mark freespace. The default coordinate system is as following:

- Bottom-center pixel is at the position of the sensor (0m forward, 0m left)
- Up-center pixel is at (400m forward, 0m left)
- Top-left pixel is at (400m forward, 240m left)
- Bottom-right pixel is at (0m forward, -240m left)

Image dimensions and max ranges can differ depending on specific config (400m, 480m) & 400x480 are default values.
Z is assumed to be always 0 (ground level).
