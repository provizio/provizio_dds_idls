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
# Perspective camera intrinsics: a horizontal field-of-view shortcut for
# the simple cases, and a full pinhole-model description for the precise
# ones. Consumers fall back to `hfov` when `precise_model` is the default.

float32 hfov
provizio/camera_intrinsics_precise_model precise_model
