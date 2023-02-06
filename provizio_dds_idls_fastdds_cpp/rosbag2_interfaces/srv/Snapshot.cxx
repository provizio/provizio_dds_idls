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
 * @file Snapshot.cpp
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

#include "Snapshot.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

rosbag2_interfaces::srv::Snapshot_Request::Snapshot_Request()
{
    // m_structure_needs_at_least_one_member com.eprosima.idl.parser.typecode.PrimitiveTypeCode@42257bdd
    m_structure_needs_at_least_one_member = 0;

}

rosbag2_interfaces::srv::Snapshot_Request::~Snapshot_Request()
{
}

rosbag2_interfaces::srv::Snapshot_Request::Snapshot_Request(
        const Snapshot_Request& x)
{
    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;
}

rosbag2_interfaces::srv::Snapshot_Request::Snapshot_Request(
        Snapshot_Request&& x) noexcept 
{
    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;
}

rosbag2_interfaces::srv::Snapshot_Request& rosbag2_interfaces::srv::Snapshot_Request::operator =(
        const Snapshot_Request& x)
{

    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;

    return *this;
}

rosbag2_interfaces::srv::Snapshot_Request& rosbag2_interfaces::srv::Snapshot_Request::operator =(
        Snapshot_Request&& x) noexcept
{

    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;

    return *this;
}

bool rosbag2_interfaces::srv::Snapshot_Request::operator ==(
        const Snapshot_Request& x) const
{

    return (m_structure_needs_at_least_one_member == x.m_structure_needs_at_least_one_member);
}

bool rosbag2_interfaces::srv::Snapshot_Request::operator !=(
        const Snapshot_Request& x) const
{
    return !(*this == x);
}

size_t rosbag2_interfaces::srv::Snapshot_Request::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    return current_alignment - initial_alignment;
}

size_t rosbag2_interfaces::srv::Snapshot_Request::getCdrSerializedSize(
        const rosbag2_interfaces::srv::Snapshot_Request& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    return current_alignment - initial_alignment;
}

void rosbag2_interfaces::srv::Snapshot_Request::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_structure_needs_at_least_one_member;

}

void rosbag2_interfaces::srv::Snapshot_Request::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_structure_needs_at_least_one_member;
}

/*!
 * @brief This function sets a value in member structure_needs_at_least_one_member
 * @param _structure_needs_at_least_one_member New value for member structure_needs_at_least_one_member
 */
void rosbag2_interfaces::srv::Snapshot_Request::structure_needs_at_least_one_member(
        uint8_t _structure_needs_at_least_one_member)
{
    m_structure_needs_at_least_one_member = _structure_needs_at_least_one_member;
}

/*!
 * @brief This function returns the value of member structure_needs_at_least_one_member
 * @return Value of member structure_needs_at_least_one_member
 */
uint8_t rosbag2_interfaces::srv::Snapshot_Request::structure_needs_at_least_one_member() const
{
    return m_structure_needs_at_least_one_member;
}

/*!
 * @brief This function returns a reference to member structure_needs_at_least_one_member
 * @return Reference to member structure_needs_at_least_one_member
 */
uint8_t& rosbag2_interfaces::srv::Snapshot_Request::structure_needs_at_least_one_member()
{
    return m_structure_needs_at_least_one_member;
}


size_t rosbag2_interfaces::srv::Snapshot_Request::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;



    return current_align;
}

bool rosbag2_interfaces::srv::Snapshot_Request::isKeyDefined()
{
    return false;
}

void rosbag2_interfaces::srv::Snapshot_Request::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
     
}

rosbag2_interfaces::srv::Snapshot_Response::Snapshot_Response()
{
    // m_success com.eprosima.idl.parser.typecode.PrimitiveTypeCode@7689ddef
    m_success = false;

}

rosbag2_interfaces::srv::Snapshot_Response::~Snapshot_Response()
{
}

rosbag2_interfaces::srv::Snapshot_Response::Snapshot_Response(
        const Snapshot_Response& x)
{
    m_success = x.m_success;
}

rosbag2_interfaces::srv::Snapshot_Response::Snapshot_Response(
        Snapshot_Response&& x) noexcept 
{
    m_success = x.m_success;
}

rosbag2_interfaces::srv::Snapshot_Response& rosbag2_interfaces::srv::Snapshot_Response::operator =(
        const Snapshot_Response& x)
{

    m_success = x.m_success;

    return *this;
}

rosbag2_interfaces::srv::Snapshot_Response& rosbag2_interfaces::srv::Snapshot_Response::operator =(
        Snapshot_Response&& x) noexcept
{

    m_success = x.m_success;

    return *this;
}

bool rosbag2_interfaces::srv::Snapshot_Response::operator ==(
        const Snapshot_Response& x) const
{

    return (m_success == x.m_success);
}

bool rosbag2_interfaces::srv::Snapshot_Response::operator !=(
        const Snapshot_Response& x) const
{
    return !(*this == x);
}

size_t rosbag2_interfaces::srv::Snapshot_Response::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    return current_alignment - initial_alignment;
}

size_t rosbag2_interfaces::srv::Snapshot_Response::getCdrSerializedSize(
        const rosbag2_interfaces::srv::Snapshot_Response& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    return current_alignment - initial_alignment;
}

void rosbag2_interfaces::srv::Snapshot_Response::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_success;

}

void rosbag2_interfaces::srv::Snapshot_Response::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_success;
}

/*!
 * @brief This function sets a value in member success
 * @param _success New value for member success
 */
void rosbag2_interfaces::srv::Snapshot_Response::success(
        bool _success)
{
    m_success = _success;
}

/*!
 * @brief This function returns the value of member success
 * @return Value of member success
 */
bool rosbag2_interfaces::srv::Snapshot_Response::success() const
{
    return m_success;
}

/*!
 * @brief This function returns a reference to member success
 * @return Reference to member success
 */
bool& rosbag2_interfaces::srv::Snapshot_Response::success()
{
    return m_success;
}


size_t rosbag2_interfaces::srv::Snapshot_Response::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;



    return current_align;
}

bool rosbag2_interfaces::srv::Snapshot_Response::isKeyDefined()
{
    return false;
}

void rosbag2_interfaces::srv::Snapshot_Response::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
     
}


