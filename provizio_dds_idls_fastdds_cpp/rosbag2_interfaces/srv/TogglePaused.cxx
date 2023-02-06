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
 * @file TogglePaused.cpp
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

#include "TogglePaused.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

rosbag2_interfaces::srv::TogglePaused_Request::TogglePaused_Request()
{
    // m_structure_needs_at_least_one_member com.eprosima.idl.parser.typecode.PrimitiveTypeCode@71a9b4c7
    m_structure_needs_at_least_one_member = 0;

}

rosbag2_interfaces::srv::TogglePaused_Request::~TogglePaused_Request()
{
}

rosbag2_interfaces::srv::TogglePaused_Request::TogglePaused_Request(
        const TogglePaused_Request& x)
{
    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;
}

rosbag2_interfaces::srv::TogglePaused_Request::TogglePaused_Request(
        TogglePaused_Request&& x) noexcept 
{
    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;
}

rosbag2_interfaces::srv::TogglePaused_Request& rosbag2_interfaces::srv::TogglePaused_Request::operator =(
        const TogglePaused_Request& x)
{

    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;

    return *this;
}

rosbag2_interfaces::srv::TogglePaused_Request& rosbag2_interfaces::srv::TogglePaused_Request::operator =(
        TogglePaused_Request&& x) noexcept
{

    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;

    return *this;
}

bool rosbag2_interfaces::srv::TogglePaused_Request::operator ==(
        const TogglePaused_Request& x) const
{

    return (m_structure_needs_at_least_one_member == x.m_structure_needs_at_least_one_member);
}

bool rosbag2_interfaces::srv::TogglePaused_Request::operator !=(
        const TogglePaused_Request& x) const
{
    return !(*this == x);
}

size_t rosbag2_interfaces::srv::TogglePaused_Request::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    return current_alignment - initial_alignment;
}

size_t rosbag2_interfaces::srv::TogglePaused_Request::getCdrSerializedSize(
        const rosbag2_interfaces::srv::TogglePaused_Request& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    return current_alignment - initial_alignment;
}

void rosbag2_interfaces::srv::TogglePaused_Request::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_structure_needs_at_least_one_member;

}

void rosbag2_interfaces::srv::TogglePaused_Request::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_structure_needs_at_least_one_member;
}

/*!
 * @brief This function sets a value in member structure_needs_at_least_one_member
 * @param _structure_needs_at_least_one_member New value for member structure_needs_at_least_one_member
 */
void rosbag2_interfaces::srv::TogglePaused_Request::structure_needs_at_least_one_member(
        uint8_t _structure_needs_at_least_one_member)
{
    m_structure_needs_at_least_one_member = _structure_needs_at_least_one_member;
}

/*!
 * @brief This function returns the value of member structure_needs_at_least_one_member
 * @return Value of member structure_needs_at_least_one_member
 */
uint8_t rosbag2_interfaces::srv::TogglePaused_Request::structure_needs_at_least_one_member() const
{
    return m_structure_needs_at_least_one_member;
}

/*!
 * @brief This function returns a reference to member structure_needs_at_least_one_member
 * @return Reference to member structure_needs_at_least_one_member
 */
uint8_t& rosbag2_interfaces::srv::TogglePaused_Request::structure_needs_at_least_one_member()
{
    return m_structure_needs_at_least_one_member;
}


size_t rosbag2_interfaces::srv::TogglePaused_Request::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;



    return current_align;
}

bool rosbag2_interfaces::srv::TogglePaused_Request::isKeyDefined()
{
    return false;
}

void rosbag2_interfaces::srv::TogglePaused_Request::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
     
}

rosbag2_interfaces::srv::TogglePaused_Response::TogglePaused_Response()
{
    // m_structure_needs_at_least_one_member com.eprosima.idl.parser.typecode.PrimitiveTypeCode@4628b1d3
    m_structure_needs_at_least_one_member = 0;

}

rosbag2_interfaces::srv::TogglePaused_Response::~TogglePaused_Response()
{
}

rosbag2_interfaces::srv::TogglePaused_Response::TogglePaused_Response(
        const TogglePaused_Response& x)
{
    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;
}

rosbag2_interfaces::srv::TogglePaused_Response::TogglePaused_Response(
        TogglePaused_Response&& x) noexcept 
{
    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;
}

rosbag2_interfaces::srv::TogglePaused_Response& rosbag2_interfaces::srv::TogglePaused_Response::operator =(
        const TogglePaused_Response& x)
{

    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;

    return *this;
}

rosbag2_interfaces::srv::TogglePaused_Response& rosbag2_interfaces::srv::TogglePaused_Response::operator =(
        TogglePaused_Response&& x) noexcept
{

    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;

    return *this;
}

bool rosbag2_interfaces::srv::TogglePaused_Response::operator ==(
        const TogglePaused_Response& x) const
{

    return (m_structure_needs_at_least_one_member == x.m_structure_needs_at_least_one_member);
}

bool rosbag2_interfaces::srv::TogglePaused_Response::operator !=(
        const TogglePaused_Response& x) const
{
    return !(*this == x);
}

size_t rosbag2_interfaces::srv::TogglePaused_Response::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    return current_alignment - initial_alignment;
}

size_t rosbag2_interfaces::srv::TogglePaused_Response::getCdrSerializedSize(
        const rosbag2_interfaces::srv::TogglePaused_Response& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    return current_alignment - initial_alignment;
}

void rosbag2_interfaces::srv::TogglePaused_Response::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_structure_needs_at_least_one_member;

}

void rosbag2_interfaces::srv::TogglePaused_Response::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_structure_needs_at_least_one_member;
}

/*!
 * @brief This function sets a value in member structure_needs_at_least_one_member
 * @param _structure_needs_at_least_one_member New value for member structure_needs_at_least_one_member
 */
void rosbag2_interfaces::srv::TogglePaused_Response::structure_needs_at_least_one_member(
        uint8_t _structure_needs_at_least_one_member)
{
    m_structure_needs_at_least_one_member = _structure_needs_at_least_one_member;
}

/*!
 * @brief This function returns the value of member structure_needs_at_least_one_member
 * @return Value of member structure_needs_at_least_one_member
 */
uint8_t rosbag2_interfaces::srv::TogglePaused_Response::structure_needs_at_least_one_member() const
{
    return m_structure_needs_at_least_one_member;
}

/*!
 * @brief This function returns a reference to member structure_needs_at_least_one_member
 * @return Reference to member structure_needs_at_least_one_member
 */
uint8_t& rosbag2_interfaces::srv::TogglePaused_Response::structure_needs_at_least_one_member()
{
    return m_structure_needs_at_least_one_member;
}


size_t rosbag2_interfaces::srv::TogglePaused_Response::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;



    return current_align;
}

bool rosbag2_interfaces::srv::TogglePaused_Response::isKeyDefined()
{
    return false;
}

void rosbag2_interfaces::srv::TogglePaused_Response::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
     
}


