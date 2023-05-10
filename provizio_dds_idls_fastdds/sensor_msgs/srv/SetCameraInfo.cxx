// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file SetCameraInfo.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "SetCameraInfo.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define builtin_interfaces_msg_Time_max_cdr_typesize 8ULL;

#define sensor_msgs_srv_SetCameraInfo_Response_max_cdr_typesize 264ULL;
#define sensor_msgs_msg_CameraInfo_max_cdr_typesize 1633ULL;
#define sensor_msgs_msg_RegionOfInterest_max_cdr_typesize 17ULL;
#define std_msgs_msg_Header_max_cdr_typesize 268ULL;
#define sensor_msgs_srv_SetCameraInfo_Request_max_cdr_typesize 1633ULL;

#define builtin_interfaces_msg_Time_max_key_cdr_typesize 0ULL;

#define sensor_msgs_srv_SetCameraInfo_Response_max_key_cdr_typesize 0ULL;
#define sensor_msgs_msg_CameraInfo_max_key_cdr_typesize 0ULL;
#define sensor_msgs_msg_RegionOfInterest_max_key_cdr_typesize 0ULL;
#define std_msgs_msg_Header_max_key_cdr_typesize 0ULL;
#define sensor_msgs_srv_SetCameraInfo_Request_max_key_cdr_typesize 0ULL;


sensor_msgs::srv::SetCameraInfo_Request::SetCameraInfo_Request()
{
    // sensor_msgs::msg::CameraInfo m_camera_info


}

sensor_msgs::srv::SetCameraInfo_Request::~SetCameraInfo_Request()
{
}

sensor_msgs::srv::SetCameraInfo_Request::SetCameraInfo_Request(
        const SetCameraInfo_Request& x)
{
    m_camera_info = x.m_camera_info;
}

sensor_msgs::srv::SetCameraInfo_Request::SetCameraInfo_Request(
        SetCameraInfo_Request&& x) noexcept 
{
    m_camera_info = std::move(x.m_camera_info);
}

sensor_msgs::srv::SetCameraInfo_Request& sensor_msgs::srv::SetCameraInfo_Request::operator =(
        const SetCameraInfo_Request& x)
{

    m_camera_info = x.m_camera_info;

    return *this;
}

sensor_msgs::srv::SetCameraInfo_Request& sensor_msgs::srv::SetCameraInfo_Request::operator =(
        SetCameraInfo_Request&& x) noexcept
{

    m_camera_info = std::move(x.m_camera_info);

    return *this;
}

bool sensor_msgs::srv::SetCameraInfo_Request::operator ==(
        const SetCameraInfo_Request& x) const
{

    return (m_camera_info == x.m_camera_info);
}

bool sensor_msgs::srv::SetCameraInfo_Request::operator !=(
        const SetCameraInfo_Request& x) const
{
    return !(*this == x);
}

size_t sensor_msgs::srv::SetCameraInfo_Request::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return sensor_msgs_srv_SetCameraInfo_Request_max_cdr_typesize;
}

size_t sensor_msgs::srv::SetCameraInfo_Request::getCdrSerializedSize(
        const sensor_msgs::srv::SetCameraInfo_Request& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += sensor_msgs::msg::CameraInfo::getCdrSerializedSize(data.camera_info(), current_alignment);

    return current_alignment - initial_alignment;
}

void sensor_msgs::srv::SetCameraInfo_Request::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_camera_info;

}

void sensor_msgs::srv::SetCameraInfo_Request::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_camera_info;
}

/*!
 * @brief This function copies the value in member camera_info
 * @param _camera_info New value to be copied in member camera_info
 */
void sensor_msgs::srv::SetCameraInfo_Request::camera_info(
        const sensor_msgs::msg::CameraInfo& _camera_info)
{
    m_camera_info = _camera_info;
}

/*!
 * @brief This function moves the value in member camera_info
 * @param _camera_info New value to be moved in member camera_info
 */
void sensor_msgs::srv::SetCameraInfo_Request::camera_info(
        sensor_msgs::msg::CameraInfo&& _camera_info)
{
    m_camera_info = std::move(_camera_info);
}

/*!
 * @brief This function returns a constant reference to member camera_info
 * @return Constant reference to member camera_info
 */
const sensor_msgs::msg::CameraInfo& sensor_msgs::srv::SetCameraInfo_Request::camera_info() const
{
    return m_camera_info;
}

/*!
 * @brief This function returns a reference to member camera_info
 * @return Reference to member camera_info
 */
sensor_msgs::msg::CameraInfo& sensor_msgs::srv::SetCameraInfo_Request::camera_info()
{
    return m_camera_info;
}


size_t sensor_msgs::srv::SetCameraInfo_Request::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return sensor_msgs_srv_SetCameraInfo_Request_max_key_cdr_typesize;
}

bool sensor_msgs::srv::SetCameraInfo_Request::isKeyDefined()
{
    return false;
}

void sensor_msgs::srv::SetCameraInfo_Request::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

sensor_msgs::srv::SetCameraInfo_Response::SetCameraInfo_Response()
{
    // boolean m_success
    m_success = false;
    // string m_status_message
    m_status_message ="";

}

sensor_msgs::srv::SetCameraInfo_Response::~SetCameraInfo_Response()
{


}

sensor_msgs::srv::SetCameraInfo_Response::SetCameraInfo_Response(
        const SetCameraInfo_Response& x)
{
    m_success = x.m_success;
    m_status_message = x.m_status_message;
}

sensor_msgs::srv::SetCameraInfo_Response::SetCameraInfo_Response(
        SetCameraInfo_Response&& x) noexcept 
{
    m_success = x.m_success;
    m_status_message = std::move(x.m_status_message);
}

sensor_msgs::srv::SetCameraInfo_Response& sensor_msgs::srv::SetCameraInfo_Response::operator =(
        const SetCameraInfo_Response& x)
{

    m_success = x.m_success;
    m_status_message = x.m_status_message;

    return *this;
}

sensor_msgs::srv::SetCameraInfo_Response& sensor_msgs::srv::SetCameraInfo_Response::operator =(
        SetCameraInfo_Response&& x) noexcept
{

    m_success = x.m_success;
    m_status_message = std::move(x.m_status_message);

    return *this;
}

bool sensor_msgs::srv::SetCameraInfo_Response::operator ==(
        const SetCameraInfo_Response& x) const
{

    return (m_success == x.m_success && m_status_message == x.m_status_message);
}

bool sensor_msgs::srv::SetCameraInfo_Response::operator !=(
        const SetCameraInfo_Response& x) const
{
    return !(*this == x);
}

size_t sensor_msgs::srv::SetCameraInfo_Response::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return sensor_msgs_srv_SetCameraInfo_Response_max_cdr_typesize;
}

size_t sensor_msgs::srv::SetCameraInfo_Response::getCdrSerializedSize(
        const sensor_msgs::srv::SetCameraInfo_Response& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.status_message().size() + 1;


    return current_alignment - initial_alignment;
}

void sensor_msgs::srv::SetCameraInfo_Response::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_success;
    scdr << m_status_message.c_str();

}

void sensor_msgs::srv::SetCameraInfo_Response::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_success;
    dcdr >> m_status_message;
}

/*!
 * @brief This function sets a value in member success
 * @param _success New value for member success
 */
void sensor_msgs::srv::SetCameraInfo_Response::success(
        bool _success)
{
    m_success = _success;
}

/*!
 * @brief This function returns the value of member success
 * @return Value of member success
 */
bool sensor_msgs::srv::SetCameraInfo_Response::success() const
{
    return m_success;
}

/*!
 * @brief This function returns a reference to member success
 * @return Reference to member success
 */
bool& sensor_msgs::srv::SetCameraInfo_Response::success()
{
    return m_success;
}

/*!
 * @brief This function copies the value in member status_message
 * @param _status_message New value to be copied in member status_message
 */
void sensor_msgs::srv::SetCameraInfo_Response::status_message(
        const std::string& _status_message)
{
    m_status_message = _status_message;
}

/*!
 * @brief This function moves the value in member status_message
 * @param _status_message New value to be moved in member status_message
 */
void sensor_msgs::srv::SetCameraInfo_Response::status_message(
        std::string&& _status_message)
{
    m_status_message = std::move(_status_message);
}

/*!
 * @brief This function returns a constant reference to member status_message
 * @return Constant reference to member status_message
 */
const std::string& sensor_msgs::srv::SetCameraInfo_Response::status_message() const
{
    return m_status_message;
}

/*!
 * @brief This function returns a reference to member status_message
 * @return Reference to member status_message
 */
std::string& sensor_msgs::srv::SetCameraInfo_Response::status_message()
{
    return m_status_message;
}


size_t sensor_msgs::srv::SetCameraInfo_Response::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return sensor_msgs_srv_SetCameraInfo_Response_max_key_cdr_typesize;
}

bool sensor_msgs::srv::SetCameraInfo_Response::isKeyDefined()
{
    return false;
}

void sensor_msgs::srv::SetCameraInfo_Response::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

