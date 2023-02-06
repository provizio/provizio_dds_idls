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
 * @file GetMap.cpp
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

#include "GetMap.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

nav_msgs::srv::GetMap_Request::GetMap_Request()
{
    // m_structure_needs_at_least_one_member com.eprosima.idl.parser.typecode.PrimitiveTypeCode@54a67a45
    m_structure_needs_at_least_one_member = 0;

}

nav_msgs::srv::GetMap_Request::~GetMap_Request()
{
}

nav_msgs::srv::GetMap_Request::GetMap_Request(
        const GetMap_Request& x)
{
    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;
}

nav_msgs::srv::GetMap_Request::GetMap_Request(
        GetMap_Request&& x) noexcept 
{
    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;
}

nav_msgs::srv::GetMap_Request& nav_msgs::srv::GetMap_Request::operator =(
        const GetMap_Request& x)
{

    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;

    return *this;
}

nav_msgs::srv::GetMap_Request& nav_msgs::srv::GetMap_Request::operator =(
        GetMap_Request&& x) noexcept
{

    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;

    return *this;
}

bool nav_msgs::srv::GetMap_Request::operator ==(
        const GetMap_Request& x) const
{

    return (m_structure_needs_at_least_one_member == x.m_structure_needs_at_least_one_member);
}

bool nav_msgs::srv::GetMap_Request::operator !=(
        const GetMap_Request& x) const
{
    return !(*this == x);
}

size_t nav_msgs::srv::GetMap_Request::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    return current_alignment - initial_alignment;
}

size_t nav_msgs::srv::GetMap_Request::getCdrSerializedSize(
        const nav_msgs::srv::GetMap_Request& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    return current_alignment - initial_alignment;
}

void nav_msgs::srv::GetMap_Request::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_structure_needs_at_least_one_member;

}

void nav_msgs::srv::GetMap_Request::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_structure_needs_at_least_one_member;
}

/*!
 * @brief This function sets a value in member structure_needs_at_least_one_member
 * @param _structure_needs_at_least_one_member New value for member structure_needs_at_least_one_member
 */
void nav_msgs::srv::GetMap_Request::structure_needs_at_least_one_member(
        uint8_t _structure_needs_at_least_one_member)
{
    m_structure_needs_at_least_one_member = _structure_needs_at_least_one_member;
}

/*!
 * @brief This function returns the value of member structure_needs_at_least_one_member
 * @return Value of member structure_needs_at_least_one_member
 */
uint8_t nav_msgs::srv::GetMap_Request::structure_needs_at_least_one_member() const
{
    return m_structure_needs_at_least_one_member;
}

/*!
 * @brief This function returns a reference to member structure_needs_at_least_one_member
 * @return Reference to member structure_needs_at_least_one_member
 */
uint8_t& nav_msgs::srv::GetMap_Request::structure_needs_at_least_one_member()
{
    return m_structure_needs_at_least_one_member;
}


size_t nav_msgs::srv::GetMap_Request::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;



    return current_align;
}

bool nav_msgs::srv::GetMap_Request::isKeyDefined()
{
    return false;
}

void nav_msgs::srv::GetMap_Request::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
     
}

nav_msgs::srv::GetMap_Response::GetMap_Response()
{
    // m_the_map com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@7d42c224


}

nav_msgs::srv::GetMap_Response::~GetMap_Response()
{
}

nav_msgs::srv::GetMap_Response::GetMap_Response(
        const GetMap_Response& x)
{
    m_the_map = x.m_the_map;
}

nav_msgs::srv::GetMap_Response::GetMap_Response(
        GetMap_Response&& x) noexcept 
{
    m_the_map = std::move(x.m_the_map);
}

nav_msgs::srv::GetMap_Response& nav_msgs::srv::GetMap_Response::operator =(
        const GetMap_Response& x)
{

    m_the_map = x.m_the_map;

    return *this;
}

nav_msgs::srv::GetMap_Response& nav_msgs::srv::GetMap_Response::operator =(
        GetMap_Response&& x) noexcept
{

    m_the_map = std::move(x.m_the_map);

    return *this;
}

bool nav_msgs::srv::GetMap_Response::operator ==(
        const GetMap_Response& x) const
{

    return (m_the_map == x.m_the_map);
}

bool nav_msgs::srv::GetMap_Response::operator !=(
        const GetMap_Response& x) const
{
    return !(*this == x);
}

size_t nav_msgs::srv::GetMap_Response::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += nav_msgs::msg::OccupancyGrid::getMaxCdrSerializedSize(current_alignment);

    return current_alignment - initial_alignment;
}

size_t nav_msgs::srv::GetMap_Response::getCdrSerializedSize(
        const nav_msgs::srv::GetMap_Response& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += nav_msgs::msg::OccupancyGrid::getCdrSerializedSize(data.the_map(), current_alignment);

    return current_alignment - initial_alignment;
}

void nav_msgs::srv::GetMap_Response::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_the_map;

}

void nav_msgs::srv::GetMap_Response::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_the_map;
}

/*!
 * @brief This function copies the value in member the_map
 * @param _the_map New value to be copied in member the_map
 */
void nav_msgs::srv::GetMap_Response::the_map(
        const nav_msgs::msg::OccupancyGrid& _the_map)
{
    m_the_map = _the_map;
}

/*!
 * @brief This function moves the value in member the_map
 * @param _the_map New value to be moved in member the_map
 */
void nav_msgs::srv::GetMap_Response::the_map(
        nav_msgs::msg::OccupancyGrid&& _the_map)
{
    m_the_map = std::move(_the_map);
}

/*!
 * @brief This function returns a constant reference to member the_map
 * @return Constant reference to member the_map
 */
const nav_msgs::msg::OccupancyGrid& nav_msgs::srv::GetMap_Response::the_map() const
{
    return m_the_map;
}

/*!
 * @brief This function returns a reference to member the_map
 * @return Reference to member the_map
 */
nav_msgs::msg::OccupancyGrid& nav_msgs::srv::GetMap_Response::the_map()
{
    return m_the_map;
}

size_t nav_msgs::srv::GetMap_Response::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;



    return current_align;
}

bool nav_msgs::srv::GetMap_Response::isKeyDefined()
{
    return false;
}

void nav_msgs::srv::GetMap_Response::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
     
}


