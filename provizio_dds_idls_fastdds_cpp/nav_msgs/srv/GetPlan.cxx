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
 * @file GetPlan.cpp
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

#include "GetPlan.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

nav_msgs::srv::GetPlan_Request::GetPlan_Request()
{
    // m_start com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@312ab28e

    // m_goal com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@312ab28e

    // m_tolerance com.eprosima.idl.parser.typecode.PrimitiveTypeCode@5644dc81
    m_tolerance = 0.0;

}

nav_msgs::srv::GetPlan_Request::~GetPlan_Request()
{



}

nav_msgs::srv::GetPlan_Request::GetPlan_Request(
        const GetPlan_Request& x)
{
    m_start = x.m_start;
    m_goal = x.m_goal;
    m_tolerance = x.m_tolerance;
}

nav_msgs::srv::GetPlan_Request::GetPlan_Request(
        GetPlan_Request&& x) noexcept 
{
    m_start = std::move(x.m_start);
    m_goal = std::move(x.m_goal);
    m_tolerance = x.m_tolerance;
}

nav_msgs::srv::GetPlan_Request& nav_msgs::srv::GetPlan_Request::operator =(
        const GetPlan_Request& x)
{

    m_start = x.m_start;
    m_goal = x.m_goal;
    m_tolerance = x.m_tolerance;

    return *this;
}

nav_msgs::srv::GetPlan_Request& nav_msgs::srv::GetPlan_Request::operator =(
        GetPlan_Request&& x) noexcept
{

    m_start = std::move(x.m_start);
    m_goal = std::move(x.m_goal);
    m_tolerance = x.m_tolerance;

    return *this;
}

bool nav_msgs::srv::GetPlan_Request::operator ==(
        const GetPlan_Request& x) const
{

    return (m_start == x.m_start && m_goal == x.m_goal && m_tolerance == x.m_tolerance);
}

bool nav_msgs::srv::GetPlan_Request::operator !=(
        const GetPlan_Request& x) const
{
    return !(*this == x);
}

size_t nav_msgs::srv::GetPlan_Request::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += geometry_msgs::msg::PoseStamped::getMaxCdrSerializedSize(current_alignment);
    current_alignment += geometry_msgs::msg::PoseStamped::getMaxCdrSerializedSize(current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

size_t nav_msgs::srv::GetPlan_Request::getCdrSerializedSize(
        const nav_msgs::srv::GetPlan_Request& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += geometry_msgs::msg::PoseStamped::getCdrSerializedSize(data.start(), current_alignment);
    current_alignment += geometry_msgs::msg::PoseStamped::getCdrSerializedSize(data.goal(), current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

void nav_msgs::srv::GetPlan_Request::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_start;
    scdr << m_goal;
    scdr << m_tolerance;

}

void nav_msgs::srv::GetPlan_Request::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_start;
    dcdr >> m_goal;
    dcdr >> m_tolerance;
}

/*!
 * @brief This function copies the value in member start
 * @param _start New value to be copied in member start
 */
void nav_msgs::srv::GetPlan_Request::start(
        const geometry_msgs::msg::PoseStamped& _start)
{
    m_start = _start;
}

/*!
 * @brief This function moves the value in member start
 * @param _start New value to be moved in member start
 */
void nav_msgs::srv::GetPlan_Request::start(
        geometry_msgs::msg::PoseStamped&& _start)
{
    m_start = std::move(_start);
}

/*!
 * @brief This function returns a constant reference to member start
 * @return Constant reference to member start
 */
const geometry_msgs::msg::PoseStamped& nav_msgs::srv::GetPlan_Request::start() const
{
    return m_start;
}

/*!
 * @brief This function returns a reference to member start
 * @return Reference to member start
 */
geometry_msgs::msg::PoseStamped& nav_msgs::srv::GetPlan_Request::start()
{
    return m_start;
}
/*!
 * @brief This function copies the value in member goal
 * @param _goal New value to be copied in member goal
 */
void nav_msgs::srv::GetPlan_Request::goal(
        const geometry_msgs::msg::PoseStamped& _goal)
{
    m_goal = _goal;
}

/*!
 * @brief This function moves the value in member goal
 * @param _goal New value to be moved in member goal
 */
void nav_msgs::srv::GetPlan_Request::goal(
        geometry_msgs::msg::PoseStamped&& _goal)
{
    m_goal = std::move(_goal);
}

/*!
 * @brief This function returns a constant reference to member goal
 * @return Constant reference to member goal
 */
const geometry_msgs::msg::PoseStamped& nav_msgs::srv::GetPlan_Request::goal() const
{
    return m_goal;
}

/*!
 * @brief This function returns a reference to member goal
 * @return Reference to member goal
 */
geometry_msgs::msg::PoseStamped& nav_msgs::srv::GetPlan_Request::goal()
{
    return m_goal;
}
/*!
 * @brief This function sets a value in member tolerance
 * @param _tolerance New value for member tolerance
 */
void nav_msgs::srv::GetPlan_Request::tolerance(
        float _tolerance)
{
    m_tolerance = _tolerance;
}

/*!
 * @brief This function returns the value of member tolerance
 * @return Value of member tolerance
 */
float nav_msgs::srv::GetPlan_Request::tolerance() const
{
    return m_tolerance;
}

/*!
 * @brief This function returns a reference to member tolerance
 * @return Reference to member tolerance
 */
float& nav_msgs::srv::GetPlan_Request::tolerance()
{
    return m_tolerance;
}


size_t nav_msgs::srv::GetPlan_Request::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;






    return current_align;
}

bool nav_msgs::srv::GetPlan_Request::isKeyDefined()
{
    return false;
}

void nav_msgs::srv::GetPlan_Request::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
       
}

nav_msgs::srv::GetPlan_Response::GetPlan_Response()
{
    // m_plan com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@246f8b8b


}

nav_msgs::srv::GetPlan_Response::~GetPlan_Response()
{
}

nav_msgs::srv::GetPlan_Response::GetPlan_Response(
        const GetPlan_Response& x)
{
    m_plan = x.m_plan;
}

nav_msgs::srv::GetPlan_Response::GetPlan_Response(
        GetPlan_Response&& x) noexcept 
{
    m_plan = std::move(x.m_plan);
}

nav_msgs::srv::GetPlan_Response& nav_msgs::srv::GetPlan_Response::operator =(
        const GetPlan_Response& x)
{

    m_plan = x.m_plan;

    return *this;
}

nav_msgs::srv::GetPlan_Response& nav_msgs::srv::GetPlan_Response::operator =(
        GetPlan_Response&& x) noexcept
{

    m_plan = std::move(x.m_plan);

    return *this;
}

bool nav_msgs::srv::GetPlan_Response::operator ==(
        const GetPlan_Response& x) const
{

    return (m_plan == x.m_plan);
}

bool nav_msgs::srv::GetPlan_Response::operator !=(
        const GetPlan_Response& x) const
{
    return !(*this == x);
}

size_t nav_msgs::srv::GetPlan_Response::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += nav_msgs::msg::Path::getMaxCdrSerializedSize(current_alignment);

    return current_alignment - initial_alignment;
}

size_t nav_msgs::srv::GetPlan_Response::getCdrSerializedSize(
        const nav_msgs::srv::GetPlan_Response& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += nav_msgs::msg::Path::getCdrSerializedSize(data.plan(), current_alignment);

    return current_alignment - initial_alignment;
}

void nav_msgs::srv::GetPlan_Response::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_plan;

}

void nav_msgs::srv::GetPlan_Response::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_plan;
}

/*!
 * @brief This function copies the value in member plan
 * @param _plan New value to be copied in member plan
 */
void nav_msgs::srv::GetPlan_Response::plan(
        const nav_msgs::msg::Path& _plan)
{
    m_plan = _plan;
}

/*!
 * @brief This function moves the value in member plan
 * @param _plan New value to be moved in member plan
 */
void nav_msgs::srv::GetPlan_Response::plan(
        nav_msgs::msg::Path&& _plan)
{
    m_plan = std::move(_plan);
}

/*!
 * @brief This function returns a constant reference to member plan
 * @return Constant reference to member plan
 */
const nav_msgs::msg::Path& nav_msgs::srv::GetPlan_Response::plan() const
{
    return m_plan;
}

/*!
 * @brief This function returns a reference to member plan
 * @return Reference to member plan
 */
nav_msgs::msg::Path& nav_msgs::srv::GetPlan_Response::plan()
{
    return m_plan;
}

size_t nav_msgs::srv::GetPlan_Response::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;



    return current_align;
}

bool nav_msgs::srv::GetPlan_Response::isKeyDefined()
{
    return false;
}

void nav_msgs::srv::GetPlan_Response::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
     
}


