# Copyright 2026 Provizio Ltd.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# GNSS fix with an additional heading angle in the same message.
# Needed as https://github.com/ros2/common_interfaces/issues/104 is not yet
# implemented in ROS 2.

std_msgs/Header header

# WGS84 lat
float64 latitude

# WGS84 lon
float64 longitude

# Altitude in meters up from the WGS84 ellipsoid (NaN if unknown)
float64 altitude

# The heading angle is between the forward direction of the sensor projected
# onto the horizontal plane and the East (counter-clockwise when looking
# from above), in degrees (NaN if unknown)
float64 heading
