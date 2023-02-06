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
 * @file SetRate.cpp
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

#include "SetRate.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

rosbag2_interfaces::srv::SetRate_Request::SetRate_Request()
{
    // m_rate com.eprosima.idl.parser.typecode.PrimitiveTypeCode@4816c290
    m_rate = 0.0;

}

rosbag2_interfaces::srv::SetRate_Request::~SetRate_Request()
{
}

rosbag2_interfaces::srv::SetRate_Request::SetRate_Request(
        const SetRate_Request& x)
{
    m_rate = x.m_rate;
}

rosbag2_interfaces::srv::SetRate_Request::SetRate_Request(
        SetRate_Request&& x) noexcept 
{
    m_rate = x.m_rate;
}

rosbag2_interfaces::srv::SetRate_Request& rosbag2_interfaces::srv::SetRate_Request::operator =(
        const SetRate_Request& x)
{

    m_rate = x.m_rate;

    return *this;
}

rosbag2_interfaces::srv::SetRate_Request& rosbag2_interfaces::srv::SetRate_Request::operator =(
        SetRate_Request&& x) noexcept
{

    m_rate = x.m_rate;

    return *this;
}

bool rosbag2_interfaces::srv::SetRate_Request::operator ==(
        const SetRate_Request& x) const
{

    return (m_rate == x.m_rate);
}

bool rosbag2_interfaces::srv::SetRate_Request::operator !=(
        const SetRate_Request& x) const
{
    return !(*this == x);
}

size_t rosbag2_interfaces::srv::SetRate_Request::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    return current_alignment - initial_alignment;
}

size_t rosbag2_interfaces::srv::SetRate_Request::getCdrSerializedSize(
        const rosbag2_interfaces::srv::SetRate_Request& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    return current_alignment - initial_alignment;
}

void rosbag2_interfaces::srv::SetRate_Request::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_rate;

}

void rosbag2_interfaces::srv::SetRate_Request::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_rate;
}

/*!
 * @brief This function sets a value in member rate
 * @param _rate New value for member rate
 */
void rosbag2_interfaces::srv::SetRate_Request::rate(
        double _rate)
{
    m_rate = _rate;
}

/*!
 * @brief This function returns the value of member rate
 * @return Value of member rate
 */
double rosbag2_interfaces::srv::SetRate_Request::rate() const
{
    return m_rate;
}

/*!
 * @brief This function returns a reference to member rate
 * @return Reference to member rate
 */
double& rosbag2_interfaces::srv::SetRate_Request::rate()
{
    return m_rate;
}


size_t rosbag2_interfaces::srv::SetRate_Request::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;



    return current_align;
}

bool rosbag2_interfaces::srv::SetRate_Request::isKeyDefined()
{
    return false;
}

void rosbag2_interfaces::srv::SetRate_Request::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
     
}

rosbag2_interfaces::srv::SetRate_Response::SetRate_Response()
{
    // m_success com.eprosima.idl.parser.typecode.PrimitiveTypeCode@4940809c
    m_success = false;

}

rosbag2_interfaces::srv::SetRate_Response::~SetRate_Response()
{
}

rosbag2_interfaces::srv::SetRate_Response::SetRate_Response(
        const SetRate_Response& x)
{
    m_success = x.m_success;
}

rosbag2_interfaces::srv::SetRate_Response::SetRate_Response(
        SetRate_Response&& x) noexcept 
{
    m_success = x.m_success;
}

rosbag2_interfaces::srv::SetRate_Response& rosbag2_interfaces::srv::SetRate_Response::operator =(
        const SetRate_Response& x)
{

    m_success = x.m_success;

    return *this;
}

rosbag2_interfaces::srv::SetRate_Response& rosbag2_interfaces::srv::SetRate_Response::operator =(
        SetRate_Response&& x) noexcept
{

    m_success = x.m_success;

    return *this;
}

bool rosbag2_interfaces::srv::SetRate_Response::operator ==(
        const SetRate_Response& x) const
{

    return (m_success == x.m_success);
}

bool rosbag2_interfaces::srv::SetRate_Response::operator !=(
        const SetRate_Response& x) const
{
    return !(*this == x);
}

size_t rosbag2_interfaces::srv::SetRate_Response::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    return current_alignment - initial_alignment;
}

size_t rosbag2_interfaces::srv::SetRate_Response::getCdrSerializedSize(
        const rosbag2_interfaces::srv::SetRate_Response& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    return current_alignment - initial_alignment;
}

void rosbag2_interfaces::srv::SetRate_Response::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_success;

}

void rosbag2_interfaces::srv::SetRate_Response::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_success;
}

/*!
 * @brief This function sets a value in member success
 * @param _success New value for member success
 */
void rosbag2_interfaces::srv::SetRate_Response::success(
        bool _success)
{
    m_success = _success;
}

/*!
 * @brief This function returns the value of member success
 * @return Value of member success
 */
bool rosbag2_interfaces::srv::SetRate_Response::success() const
{
    return m_success;
}

/*!
 * @brief This function returns a reference to member success
 * @return Reference to member success
 */
bool& rosbag2_interfaces::srv::SetRate_Response::success()
{
    return m_success;
}


size_t rosbag2_interfaces::srv::SetRate_Response::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;



    return current_align;
}

bool rosbag2_interfaces::srv::SetRate_Response::isKeyDefined()
{
    return false;
}

void rosbag2_interfaces::srv::SetRate_Response::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
     
}


