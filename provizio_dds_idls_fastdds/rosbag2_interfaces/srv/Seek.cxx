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
 * @file Seek.cpp
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

#include "Seek.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define builtin_interfaces_msg_Time_max_cdr_typesize 8ULL;
#define rosbag2_interfaces_srv_Seek_Response_max_cdr_typesize 1ULL;
#define rosbag2_interfaces_srv_Seek_Request_max_cdr_typesize 8ULL;
#define builtin_interfaces_msg_Time_max_key_cdr_typesize 0ULL;
#define rosbag2_interfaces_srv_Seek_Response_max_key_cdr_typesize 0ULL;
#define rosbag2_interfaces_srv_Seek_Request_max_key_cdr_typesize 0ULL;

rosbag2_interfaces::srv::Seek_Request::Seek_Request()
{
    // builtin_interfaces::msg::Time m_time


}

rosbag2_interfaces::srv::Seek_Request::~Seek_Request()
{
}

rosbag2_interfaces::srv::Seek_Request::Seek_Request(
        const Seek_Request& x)
{
    m_time = x.m_time;
}

rosbag2_interfaces::srv::Seek_Request::Seek_Request(
        Seek_Request&& x) noexcept 
{
    m_time = std::move(x.m_time);
}

rosbag2_interfaces::srv::Seek_Request& rosbag2_interfaces::srv::Seek_Request::operator =(
        const Seek_Request& x)
{

    m_time = x.m_time;

    return *this;
}

rosbag2_interfaces::srv::Seek_Request& rosbag2_interfaces::srv::Seek_Request::operator =(
        Seek_Request&& x) noexcept
{

    m_time = std::move(x.m_time);

    return *this;
}

bool rosbag2_interfaces::srv::Seek_Request::operator ==(
        const Seek_Request& x) const
{

    return (m_time == x.m_time);
}

bool rosbag2_interfaces::srv::Seek_Request::operator !=(
        const Seek_Request& x) const
{
    return !(*this == x);
}

size_t rosbag2_interfaces::srv::Seek_Request::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return rosbag2_interfaces_srv_Seek_Request_max_cdr_typesize;
}

size_t rosbag2_interfaces::srv::Seek_Request::getCdrSerializedSize(
        const rosbag2_interfaces::srv::Seek_Request& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += builtin_interfaces::msg::Time::getCdrSerializedSize(data.time(), current_alignment);

    return current_alignment - initial_alignment;
}

void rosbag2_interfaces::srv::Seek_Request::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_time;

}

void rosbag2_interfaces::srv::Seek_Request::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_time;
}

/*!
 * @brief This function copies the value in member time
 * @param _time New value to be copied in member time
 */
void rosbag2_interfaces::srv::Seek_Request::time(
        const builtin_interfaces::msg::Time& _time)
{
    m_time = _time;
}

/*!
 * @brief This function moves the value in member time
 * @param _time New value to be moved in member time
 */
void rosbag2_interfaces::srv::Seek_Request::time(
        builtin_interfaces::msg::Time&& _time)
{
    m_time = std::move(_time);
}

/*!
 * @brief This function returns a constant reference to member time
 * @return Constant reference to member time
 */
const builtin_interfaces::msg::Time& rosbag2_interfaces::srv::Seek_Request::time() const
{
    return m_time;
}

/*!
 * @brief This function returns a reference to member time
 * @return Reference to member time
 */
builtin_interfaces::msg::Time& rosbag2_interfaces::srv::Seek_Request::time()
{
    return m_time;
}


size_t rosbag2_interfaces::srv::Seek_Request::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return rosbag2_interfaces_srv_Seek_Request_max_key_cdr_typesize;
}

bool rosbag2_interfaces::srv::Seek_Request::isKeyDefined()
{
    return false;
}

void rosbag2_interfaces::srv::Seek_Request::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

rosbag2_interfaces::srv::Seek_Response::Seek_Response()
{
    // boolean m_success
    m_success = false;

}

rosbag2_interfaces::srv::Seek_Response::~Seek_Response()
{
}

rosbag2_interfaces::srv::Seek_Response::Seek_Response(
        const Seek_Response& x)
{
    m_success = x.m_success;
}

rosbag2_interfaces::srv::Seek_Response::Seek_Response(
        Seek_Response&& x) noexcept 
{
    m_success = x.m_success;
}

rosbag2_interfaces::srv::Seek_Response& rosbag2_interfaces::srv::Seek_Response::operator =(
        const Seek_Response& x)
{

    m_success = x.m_success;

    return *this;
}

rosbag2_interfaces::srv::Seek_Response& rosbag2_interfaces::srv::Seek_Response::operator =(
        Seek_Response&& x) noexcept
{

    m_success = x.m_success;

    return *this;
}

bool rosbag2_interfaces::srv::Seek_Response::operator ==(
        const Seek_Response& x) const
{

    return (m_success == x.m_success);
}

bool rosbag2_interfaces::srv::Seek_Response::operator !=(
        const Seek_Response& x) const
{
    return !(*this == x);
}

size_t rosbag2_interfaces::srv::Seek_Response::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return rosbag2_interfaces_srv_Seek_Response_max_cdr_typesize;
}

size_t rosbag2_interfaces::srv::Seek_Response::getCdrSerializedSize(
        const rosbag2_interfaces::srv::Seek_Response& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    return current_alignment - initial_alignment;
}

void rosbag2_interfaces::srv::Seek_Response::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_success;

}

void rosbag2_interfaces::srv::Seek_Response::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_success;
}

/*!
 * @brief This function sets a value in member success
 * @param _success New value for member success
 */
void rosbag2_interfaces::srv::Seek_Response::success(
        bool _success)
{
    m_success = _success;
}

/*!
 * @brief This function returns the value of member success
 * @return Value of member success
 */
bool rosbag2_interfaces::srv::Seek_Response::success() const
{
    return m_success;
}

/*!
 * @brief This function returns a reference to member success
 * @return Reference to member success
 */
bool& rosbag2_interfaces::srv::Seek_Response::success()
{
    return m_success;
}



size_t rosbag2_interfaces::srv::Seek_Response::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return rosbag2_interfaces_srv_Seek_Response_max_key_cdr_typesize;
}

bool rosbag2_interfaces::srv::Seek_Response::isKeyDefined()
{
    return false;
}

void rosbag2_interfaces::srv::Seek_Response::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

