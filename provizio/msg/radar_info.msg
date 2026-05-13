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
# Per-radar status emitted periodically alongside the point cloud. The range
# fields carry the radar's current operating mode plus the discrete set of
# modes it can switch to. Values are encoded as plain uint32 instead of an
# IDL enum because rosidl_adapter's .msg format doesn't surface enums; the
# CDR byte layout is identical (a 32-bit unsigned integer for both
# representations), so on-wire bytes from new and old participants are
# interchangeable. Note that DDS XTypes type-identity is NOT preserved
# (the new struct's TypeObject has a `uint32` field where the old one had
# an `enum radar_range` field), so strict XTypes type-match discovery
# between v3 and v4 participants will not succeed — coexistence relies on
# the matching CDR layout and the `-typeros2`-preserved topic-type name.

std_msgs/Header header
string serial_number

# Radar range constants. Use these literal values for `supported_ranges`
# entries and for `current_range`. UNKNOWN_RANGE is the 0xffff sentinel
# carried over from the legacy enum.
uint32 SHORT_RANGE=0
uint32 MEDIUM_RANGE=1
uint32 LONG_RANGE=2
uint32 ULTRA_LONG_RANGE=3
uint32 HYPER_LONG_RANGE=4
uint32 UNKNOWN_RANGE=65535

uint32[] supported_ranges
uint32 current_range
