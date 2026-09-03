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
# Camera intrinsic calibration. Either the perspective sub-message or the
# orthographic one carries the actual data depending on which projection
# model the camera uses; the other is left at default values.

std_msgs/Header header
provizio/camera_intrinsics_perspective perspective
provizio/camera_intrinsics_orthographic orthographic
