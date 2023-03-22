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
 * @file GetRate.cpp
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

#include "GetRate.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

rosbag2_interfaces::srv::GetRate_Request::GetRate_Request()
{
    // m_structure_needs_at_least_one_member com.eprosima.idl.parser.typecode.PrimitiveTypeCode@c65a5ef
    m_structure_needs_at_least_one_member = 0;

}

rosbag2_interfaces::srv::GetRate_Request::~GetRate_Request()
{
}

rosbag2_interfaces::srv::GetRate_Request::GetRate_Request(
        const GetRate_Request& x)
{
    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;
}

rosbag2_interfaces::srv::GetRate_Request::GetRate_Request(
        GetRate_Request&& x) noexcept 
{
    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;
}

rosbag2_interfaces::srv::GetRate_Request& rosbag2_interfaces::srv::GetRate_Request::operator =(
        const GetRate_Request& x)
{

    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;

    return *this;
}

rosbag2_interfaces::srv::GetRate_Request& rosbag2_interfaces::srv::GetRate_Request::operator =(
        GetRate_Request&& x) noexcept
{

    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;

    return *this;
}

bool rosbag2_interfaces::srv::GetRate_Request::operator ==(
        const GetRate_Request& x) const
{

    return (m_structure_needs_at_least_one_member == x.m_structure_needs_at_least_one_member);
}

bool rosbag2_interfaces::srv::GetRate_Request::operator !=(
        const GetRate_Request& x) const
{
    return !(*this == x);
}

size_t rosbag2_interfaces::srv::GetRate_Request::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    return current_alignment - initial_alignment;
}

size_t rosbag2_interfaces::srv::GetRate_Request::getCdrSerializedSize(
        const rosbag2_interfaces::srv::GetRate_Request& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    return current_alignment - initial_alignment;
}

void rosbag2_interfaces::srv::GetRate_Request::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_structure_needs_at_least_one_member;

}

void rosbag2_interfaces::srv::GetRate_Request::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_structure_needs_at_least_one_member;
}

/*!
 * @brief This function sets a value in member structure_needs_at_least_one_member
 * @param _structure_needs_at_least_one_member New value for member structure_needs_at_least_one_member
 */
void rosbag2_interfaces::srv::GetRate_Request::structure_needs_at_least_one_member(
        uint8_t _structure_needs_at_least_one_member)
{
    m_structure_needs_at_least_one_member = _structure_needs_at_least_one_member;
}

/*!
 * @brief This function returns the value of member structure_needs_at_least_one_member
 * @return Value of member structure_needs_at_least_one_member
 */
uint8_t rosbag2_interfaces::srv::GetRate_Request::structure_needs_at_least_one_member() const
{
    return m_structure_needs_at_least_one_member;
}

/*!
 * @brief This function returns a reference to member structure_needs_at_least_one_member
 * @return Reference to member structure_needs_at_least_one_member
 */
uint8_t& rosbag2_interfaces::srv::GetRate_Request::structure_needs_at_least_one_member()
{
    return m_structure_needs_at_least_one_member;
}


size_t rosbag2_interfaces::srv::GetRate_Request::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;



    return current_align;
}

bool rosbag2_interfaces::srv::GetRate_Request::isKeyDefined()
{
    return false;
}

void rosbag2_interfaces::srv::GetRate_Request::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
     
}

rosbag2_interfaces::srv::GetRate_Response::GetRate_Response()
{
    // m_rate com.eprosima.idl.parser.typecode.PrimitiveTypeCode@6b5176f2
    m_rate = 0.0;

}

rosbag2_interfaces::srv::GetRate_Response::~GetRate_Response()
{
}

rosbag2_interfaces::srv::GetRate_Response::GetRate_Response(
        const GetRate_Response& x)
{
    m_rate = x.m_rate;
}

rosbag2_interfaces::srv::GetRate_Response::GetRate_Response(
        GetRate_Response&& x) noexcept 
{
    m_rate = x.m_rate;
}

rosbag2_interfaces::srv::GetRate_Response& rosbag2_interfaces::srv::GetRate_Response::operator =(
        const GetRate_Response& x)
{

    m_rate = x.m_rate;

    return *this;
}

rosbag2_interfaces::srv::GetRate_Response& rosbag2_interfaces::srv::GetRate_Response::operator =(
        GetRate_Response&& x) noexcept
{

    m_rate = x.m_rate;

    return *this;
}

bool rosbag2_interfaces::srv::GetRate_Response::operator ==(
        const GetRate_Response& x) const
{

    return (m_rate == x.m_rate);
}

bool rosbag2_interfaces::srv::GetRate_Response::operator !=(
        const GetRate_Response& x) const
{
    return !(*this == x);
}

size_t rosbag2_interfaces::srv::GetRate_Response::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    return current_alignment - initial_alignment;
}

size_t rosbag2_interfaces::srv::GetRate_Response::getCdrSerializedSize(
        const rosbag2_interfaces::srv::GetRate_Response& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    return current_alignment - initial_alignment;
}

void rosbag2_interfaces::srv::GetRate_Response::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_rate;

}

void rosbag2_interfaces::srv::GetRate_Response::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_rate;
}

/*!
 * @brief This function sets a value in member rate
 * @param _rate New value for member rate
 */
void rosbag2_interfaces::srv::GetRate_Response::rate(
        double _rate)
{
    m_rate = _rate;
}

/*!
 * @brief This function returns the value of member rate
 * @return Value of member rate
 */
double rosbag2_interfaces::srv::GetRate_Response::rate() const
{
    return m_rate;
}

/*!
 * @brief This function returns a reference to member rate
 * @return Reference to member rate
 */
double& rosbag2_interfaces::srv::GetRate_Response::rate()
{
    return m_rate;
}


size_t rosbag2_interfaces::srv::GetRate_Response::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;



    return current_align;
}

bool rosbag2_interfaces::srv::GetRate_Response::isKeyDefined()
{
    return false;
}

void rosbag2_interfaces::srv::GetRate_Response::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
     
}


