#!/bin/bash

# Copyright 2023 Provizio Ltd.
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

set -e

# Base toolchain.
apt update
apt install -y git build-essential cmake openjdk-17-jdk python3 python3-empy curl gnupg lsb-release

# Add the ROS 2 apt repository so we can install rosidl-adapter alone (it
# isn't published to PyPI and bundling the whole of ROS would be overkill —
# we only need the .msg/.srv -> .idl converter from it).
codename="$(lsb_release -cs)"
curl -fsSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key \
    -o /usr/share/keyrings/ros-archive-keyring.gpg
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu ${codename} main" \
    > /etc/apt/sources.list.d/ros2.list
apt update

# Pick the distro that matches the host's Ubuntu codename. The codegen
# workflow runs on ubuntu-latest, currently Noble (Jazzy).
case "${codename}" in
    noble)  ros_distro=jazzy ;;
    jammy)  ros_distro=humble ;;
    *)      echo "Unsupported Ubuntu codename: ${codename}" >&2; exit 1 ;;
esac
apt install -y "ros-${ros_distro}-rosidl-adapter"
