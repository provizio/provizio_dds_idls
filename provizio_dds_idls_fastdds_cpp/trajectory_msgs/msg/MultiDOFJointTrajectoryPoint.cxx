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
 * @file MultiDOFJointTrajectoryPoint.cpp
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

#include "MultiDOFJointTrajectoryPoint.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::MultiDOFJointTrajectoryPoint()
{
    // m_transforms com.eprosima.idl.parser.typecode.SequenceTypeCode@131c0b6f

    // m_velocities com.eprosima.idl.parser.typecode.SequenceTypeCode@7f030c72

    // m_accelerations com.eprosima.idl.parser.typecode.SequenceTypeCode@68d8ae27

    // m_time_from_start com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@18513c23


}

trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::~MultiDOFJointTrajectoryPoint()
{




}

trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::MultiDOFJointTrajectoryPoint(
        const MultiDOFJointTrajectoryPoint& x)
{
    m_transforms = x.m_transforms;
    m_velocities = x.m_velocities;
    m_accelerations = x.m_accelerations;
    m_time_from_start = x.m_time_from_start;
}

trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::MultiDOFJointTrajectoryPoint(
        MultiDOFJointTrajectoryPoint&& x) noexcept 
{
    m_transforms = std::move(x.m_transforms);
    m_velocities = std::move(x.m_velocities);
    m_accelerations = std::move(x.m_accelerations);
    m_time_from_start = std::move(x.m_time_from_start);
}

trajectory_msgs::msg::MultiDOFJointTrajectoryPoint& trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::operator =(
        const MultiDOFJointTrajectoryPoint& x)
{

    m_transforms = x.m_transforms;
    m_velocities = x.m_velocities;
    m_accelerations = x.m_accelerations;
    m_time_from_start = x.m_time_from_start;

    return *this;
}

trajectory_msgs::msg::MultiDOFJointTrajectoryPoint& trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::operator =(
        MultiDOFJointTrajectoryPoint&& x) noexcept
{

    m_transforms = std::move(x.m_transforms);
    m_velocities = std::move(x.m_velocities);
    m_accelerations = std::move(x.m_accelerations);
    m_time_from_start = std::move(x.m_time_from_start);

    return *this;
}

bool trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::operator ==(
        const MultiDOFJointTrajectoryPoint& x) const
{

    return (m_transforms == x.m_transforms && m_velocities == x.m_velocities && m_accelerations == x.m_accelerations && m_time_from_start == x.m_time_from_start);
}

bool trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::operator !=(
        const MultiDOFJointTrajectoryPoint& x) const
{
    return !(*this == x);
}

size_t trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < 100; ++a)
    {
        current_alignment += geometry_msgs::msg::Transform::getMaxCdrSerializedSize(current_alignment);}

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < 100; ++a)
    {
        current_alignment += geometry_msgs::msg::Twist::getMaxCdrSerializedSize(current_alignment);}

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < 100; ++a)
    {
        current_alignment += geometry_msgs::msg::Twist::getMaxCdrSerializedSize(current_alignment);}

    current_alignment += builtin_interfaces::msg::Duration::getMaxCdrSerializedSize(current_alignment);

    return current_alignment - initial_alignment;
}

size_t trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::getCdrSerializedSize(
        const trajectory_msgs::msg::MultiDOFJointTrajectoryPoint& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.transforms().size(); ++a)
    {
        current_alignment += geometry_msgs::msg::Transform::getCdrSerializedSize(data.transforms().at(a), current_alignment);}

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.velocities().size(); ++a)
    {
        current_alignment += geometry_msgs::msg::Twist::getCdrSerializedSize(data.velocities().at(a), current_alignment);}

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.accelerations().size(); ++a)
    {
        current_alignment += geometry_msgs::msg::Twist::getCdrSerializedSize(data.accelerations().at(a), current_alignment);}

    current_alignment += builtin_interfaces::msg::Duration::getCdrSerializedSize(data.time_from_start(), current_alignment);

    return current_alignment - initial_alignment;
}

void trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_transforms;
    scdr << m_velocities;
    scdr << m_accelerations;
    scdr << m_time_from_start;

}

void trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_transforms;
    dcdr >> m_velocities;
    dcdr >> m_accelerations;
    dcdr >> m_time_from_start;
}

/*!
 * @brief This function copies the value in member transforms
 * @param _transforms New value to be copied in member transforms
 */
void trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::transforms(
        const std::vector<geometry_msgs::msg::Transform>& _transforms)
{
    m_transforms = _transforms;
}

/*!
 * @brief This function moves the value in member transforms
 * @param _transforms New value to be moved in member transforms
 */
void trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::transforms(
        std::vector<geometry_msgs::msg::Transform>&& _transforms)
{
    m_transforms = std::move(_transforms);
}

/*!
 * @brief This function returns a constant reference to member transforms
 * @return Constant reference to member transforms
 */
const std::vector<geometry_msgs::msg::Transform>& trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::transforms() const
{
    return m_transforms;
}

/*!
 * @brief This function returns a reference to member transforms
 * @return Reference to member transforms
 */
std::vector<geometry_msgs::msg::Transform>& trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::transforms()
{
    return m_transforms;
}
/*!
 * @brief This function copies the value in member velocities
 * @param _velocities New value to be copied in member velocities
 */
void trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::velocities(
        const std::vector<geometry_msgs::msg::Twist>& _velocities)
{
    m_velocities = _velocities;
}

/*!
 * @brief This function moves the value in member velocities
 * @param _velocities New value to be moved in member velocities
 */
void trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::velocities(
        std::vector<geometry_msgs::msg::Twist>&& _velocities)
{
    m_velocities = std::move(_velocities);
}

/*!
 * @brief This function returns a constant reference to member velocities
 * @return Constant reference to member velocities
 */
const std::vector<geometry_msgs::msg::Twist>& trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::velocities() const
{
    return m_velocities;
}

/*!
 * @brief This function returns a reference to member velocities
 * @return Reference to member velocities
 */
std::vector<geometry_msgs::msg::Twist>& trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::velocities()
{
    return m_velocities;
}
/*!
 * @brief This function copies the value in member accelerations
 * @param _accelerations New value to be copied in member accelerations
 */
void trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::accelerations(
        const std::vector<geometry_msgs::msg::Twist>& _accelerations)
{
    m_accelerations = _accelerations;
}

/*!
 * @brief This function moves the value in member accelerations
 * @param _accelerations New value to be moved in member accelerations
 */
void trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::accelerations(
        std::vector<geometry_msgs::msg::Twist>&& _accelerations)
{
    m_accelerations = std::move(_accelerations);
}

/*!
 * @brief This function returns a constant reference to member accelerations
 * @return Constant reference to member accelerations
 */
const std::vector<geometry_msgs::msg::Twist>& trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::accelerations() const
{
    return m_accelerations;
}

/*!
 * @brief This function returns a reference to member accelerations
 * @return Reference to member accelerations
 */
std::vector<geometry_msgs::msg::Twist>& trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::accelerations()
{
    return m_accelerations;
}
/*!
 * @brief This function copies the value in member time_from_start
 * @param _time_from_start New value to be copied in member time_from_start
 */
void trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::time_from_start(
        const builtin_interfaces::msg::Duration& _time_from_start)
{
    m_time_from_start = _time_from_start;
}

/*!
 * @brief This function moves the value in member time_from_start
 * @param _time_from_start New value to be moved in member time_from_start
 */
void trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::time_from_start(
        builtin_interfaces::msg::Duration&& _time_from_start)
{
    m_time_from_start = std::move(_time_from_start);
}

/*!
 * @brief This function returns a constant reference to member time_from_start
 * @return Constant reference to member time_from_start
 */
const builtin_interfaces::msg::Duration& trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::time_from_start() const
{
    return m_time_from_start;
}

/*!
 * @brief This function returns a reference to member time_from_start
 * @return Reference to member time_from_start
 */
builtin_interfaces::msg::Duration& trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::time_from_start()
{
    return m_time_from_start;
}

size_t trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;







    return current_align;
}

bool trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::isKeyDefined()
{
    return false;
}

void trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
        
}


