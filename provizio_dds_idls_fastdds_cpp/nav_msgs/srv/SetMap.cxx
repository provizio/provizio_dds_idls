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
 * @file SetMap.cpp
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

#include "SetMap.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

nav_msgs::srv::SetMap_Request::SetMap_Request()
{
    // m_the_map com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@4bd1f8dd

    // m_initial_pose com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@7096b474


}

nav_msgs::srv::SetMap_Request::~SetMap_Request()
{


}

nav_msgs::srv::SetMap_Request::SetMap_Request(
        const SetMap_Request& x)
{
    m_the_map = x.m_the_map;
    m_initial_pose = x.m_initial_pose;
}

nav_msgs::srv::SetMap_Request::SetMap_Request(
        SetMap_Request&& x) noexcept 
{
    m_the_map = std::move(x.m_the_map);
    m_initial_pose = std::move(x.m_initial_pose);
}

nav_msgs::srv::SetMap_Request& nav_msgs::srv::SetMap_Request::operator =(
        const SetMap_Request& x)
{

    m_the_map = x.m_the_map;
    m_initial_pose = x.m_initial_pose;

    return *this;
}

nav_msgs::srv::SetMap_Request& nav_msgs::srv::SetMap_Request::operator =(
        SetMap_Request&& x) noexcept
{

    m_the_map = std::move(x.m_the_map);
    m_initial_pose = std::move(x.m_initial_pose);

    return *this;
}

bool nav_msgs::srv::SetMap_Request::operator ==(
        const SetMap_Request& x) const
{

    return (m_the_map == x.m_the_map && m_initial_pose == x.m_initial_pose);
}

bool nav_msgs::srv::SetMap_Request::operator !=(
        const SetMap_Request& x) const
{
    return !(*this == x);
}

size_t nav_msgs::srv::SetMap_Request::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += nav_msgs::msg::OccupancyGrid::getMaxCdrSerializedSize(current_alignment);
    current_alignment += geometry_msgs::msg::PoseWithCovarianceStamped::getMaxCdrSerializedSize(current_alignment);

    return current_alignment - initial_alignment;
}

size_t nav_msgs::srv::SetMap_Request::getCdrSerializedSize(
        const nav_msgs::srv::SetMap_Request& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += nav_msgs::msg::OccupancyGrid::getCdrSerializedSize(data.the_map(), current_alignment);
    current_alignment += geometry_msgs::msg::PoseWithCovarianceStamped::getCdrSerializedSize(data.initial_pose(), current_alignment);

    return current_alignment - initial_alignment;
}

void nav_msgs::srv::SetMap_Request::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_the_map;
    scdr << m_initial_pose;

}

void nav_msgs::srv::SetMap_Request::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_the_map;
    dcdr >> m_initial_pose;
}

/*!
 * @brief This function copies the value in member the_map
 * @param _the_map New value to be copied in member the_map
 */
void nav_msgs::srv::SetMap_Request::the_map(
        const nav_msgs::msg::OccupancyGrid& _the_map)
{
    m_the_map = _the_map;
}

/*!
 * @brief This function moves the value in member the_map
 * @param _the_map New value to be moved in member the_map
 */
void nav_msgs::srv::SetMap_Request::the_map(
        nav_msgs::msg::OccupancyGrid&& _the_map)
{
    m_the_map = std::move(_the_map);
}

/*!
 * @brief This function returns a constant reference to member the_map
 * @return Constant reference to member the_map
 */
const nav_msgs::msg::OccupancyGrid& nav_msgs::srv::SetMap_Request::the_map() const
{
    return m_the_map;
}

/*!
 * @brief This function returns a reference to member the_map
 * @return Reference to member the_map
 */
nav_msgs::msg::OccupancyGrid& nav_msgs::srv::SetMap_Request::the_map()
{
    return m_the_map;
}
/*!
 * @brief This function copies the value in member initial_pose
 * @param _initial_pose New value to be copied in member initial_pose
 */
void nav_msgs::srv::SetMap_Request::initial_pose(
        const geometry_msgs::msg::PoseWithCovarianceStamped& _initial_pose)
{
    m_initial_pose = _initial_pose;
}

/*!
 * @brief This function moves the value in member initial_pose
 * @param _initial_pose New value to be moved in member initial_pose
 */
void nav_msgs::srv::SetMap_Request::initial_pose(
        geometry_msgs::msg::PoseWithCovarianceStamped&& _initial_pose)
{
    m_initial_pose = std::move(_initial_pose);
}

/*!
 * @brief This function returns a constant reference to member initial_pose
 * @return Constant reference to member initial_pose
 */
const geometry_msgs::msg::PoseWithCovarianceStamped& nav_msgs::srv::SetMap_Request::initial_pose() const
{
    return m_initial_pose;
}

/*!
 * @brief This function returns a reference to member initial_pose
 * @return Reference to member initial_pose
 */
geometry_msgs::msg::PoseWithCovarianceStamped& nav_msgs::srv::SetMap_Request::initial_pose()
{
    return m_initial_pose;
}

size_t nav_msgs::srv::SetMap_Request::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;





    return current_align;
}

bool nav_msgs::srv::SetMap_Request::isKeyDefined()
{
    return false;
}

void nav_msgs::srv::SetMap_Request::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
      
}

nav_msgs::srv::SetMap_Response::SetMap_Response()
{
    // m_success com.eprosima.idl.parser.typecode.PrimitiveTypeCode@3e14c16d
    m_success = false;

}

nav_msgs::srv::SetMap_Response::~SetMap_Response()
{
}

nav_msgs::srv::SetMap_Response::SetMap_Response(
        const SetMap_Response& x)
{
    m_success = x.m_success;
}

nav_msgs::srv::SetMap_Response::SetMap_Response(
        SetMap_Response&& x) noexcept 
{
    m_success = x.m_success;
}

nav_msgs::srv::SetMap_Response& nav_msgs::srv::SetMap_Response::operator =(
        const SetMap_Response& x)
{

    m_success = x.m_success;

    return *this;
}

nav_msgs::srv::SetMap_Response& nav_msgs::srv::SetMap_Response::operator =(
        SetMap_Response&& x) noexcept
{

    m_success = x.m_success;

    return *this;
}

bool nav_msgs::srv::SetMap_Response::operator ==(
        const SetMap_Response& x) const
{

    return (m_success == x.m_success);
}

bool nav_msgs::srv::SetMap_Response::operator !=(
        const SetMap_Response& x) const
{
    return !(*this == x);
}

size_t nav_msgs::srv::SetMap_Response::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    return current_alignment - initial_alignment;
}

size_t nav_msgs::srv::SetMap_Response::getCdrSerializedSize(
        const nav_msgs::srv::SetMap_Response& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    return current_alignment - initial_alignment;
}

void nav_msgs::srv::SetMap_Response::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_success;

}

void nav_msgs::srv::SetMap_Response::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_success;
}

/*!
 * @brief This function sets a value in member success
 * @param _success New value for member success
 */
void nav_msgs::srv::SetMap_Response::success(
        bool _success)
{
    m_success = _success;
}

/*!
 * @brief This function returns the value of member success
 * @return Value of member success
 */
bool nav_msgs::srv::SetMap_Response::success() const
{
    return m_success;
}

/*!
 * @brief This function returns a reference to member success
 * @return Reference to member success
 */
bool& nav_msgs::srv::SetMap_Response::success()
{
    return m_success;
}


size_t nav_msgs::srv::SetMap_Response::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;



    return current_align;
}

bool nav_msgs::srv::SetMap_Response::isKeyDefined()
{
    return false;
}

void nav_msgs::srv::SetMap_Response::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
     
}


