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
# Generic, extensible per-frame metadata emitted by any Provizio subsystem
# (radar, odometry, tracking, ...). This is the open-schema generalization of
# radar_info: rather than a fixed set of fields, it carries an arbitrary list
# of typed key/value pairs, so new fields can be added — or specialized per
# sensor model — without changing the on-wire type. radar_info itself is
# unaffected and remains the firmware-compatible channel; metadata is a new,
# additive channel.

# Standard header carrying the frame_id and timestamp this metadata applies to.
std_msgs/Header header

# Identifies the subsystem that produced this metadata (e.g. "radar",
# "odometry", "tracking"). Free-form so new sources need no schema change; lets
# several metadata messages sharing a frame_id/stamp be told apart.
string source

# Arbitrary, typed key/value pairs. Each Parameter is a name plus a variant
# ParameterValue (bool / integer / double / string / byte[] / their arrays).
# A radar producer, for example, would emit serial_number, current_range and
# supported_ranges as parameters instead of dedicated fields.
rcl_interfaces/Parameter[] parameters
