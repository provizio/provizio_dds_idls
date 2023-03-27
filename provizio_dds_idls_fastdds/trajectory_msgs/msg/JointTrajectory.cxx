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
 * @file JointTrajectory.cpp
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

#include "JointTrajectory.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define trajectory_msgs_msg_JointTrajectory_max_cdr_typesize 350272ULL;
#define builtin_interfaces_msg_Time_max_cdr_typesize 8ULL;
#define builtin_interfaces_msg_Duration_max_cdr_typesize 8ULL;
#define trajectory_msgs_msg_JointTrajectoryPoint_max_cdr_typesize 3240ULL;
#define std_msgs_msg_Header_max_cdr_typesize 268ULL;
#define trajectory_msgs_msg_JointTrajectory_max_key_cdr_typesize 0ULL;
#define builtin_interfaces_msg_Time_max_key_cdr_typesize 0ULL;
#define builtin_interfaces_msg_Duration_max_key_cdr_typesize 0ULL;
#define trajectory_msgs_msg_JointTrajectoryPoint_max_key_cdr_typesize 0ULL;
#define std_msgs_msg_Header_max_key_cdr_typesize 0ULL;

trajectory_msgs::msg::JointTrajectory::JointTrajectory()
{
    // std_msgs::msg::Header m_header

    // sequence<string> m_joint_names

    // sequence<trajectory_msgs::msg::JointTrajectoryPoint> m_points


}

trajectory_msgs::msg::JointTrajectory::~JointTrajectory()
{



}

trajectory_msgs::msg::JointTrajectory::JointTrajectory(
        const JointTrajectory& x)
{
    m_header = x.m_header;
    m_joint_names = x.m_joint_names;
    m_points = x.m_points;
}

trajectory_msgs::msg::JointTrajectory::JointTrajectory(
        JointTrajectory&& x) noexcept 
{
    m_header = std::move(x.m_header);
    m_joint_names = std::move(x.m_joint_names);
    m_points = std::move(x.m_points);
}

trajectory_msgs::msg::JointTrajectory& trajectory_msgs::msg::JointTrajectory::operator =(
        const JointTrajectory& x)
{

    m_header = x.m_header;
    m_joint_names = x.m_joint_names;
    m_points = x.m_points;

    return *this;
}

trajectory_msgs::msg::JointTrajectory& trajectory_msgs::msg::JointTrajectory::operator =(
        JointTrajectory&& x) noexcept
{

    m_header = std::move(x.m_header);
    m_joint_names = std::move(x.m_joint_names);
    m_points = std::move(x.m_points);

    return *this;
}

bool trajectory_msgs::msg::JointTrajectory::operator ==(
        const JointTrajectory& x) const
{

    return (m_header == x.m_header && m_joint_names == x.m_joint_names && m_points == x.m_points);
}

bool trajectory_msgs::msg::JointTrajectory::operator !=(
        const JointTrajectory& x) const
{
    return !(*this == x);
}

size_t trajectory_msgs::msg::JointTrajectory::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return trajectory_msgs_msg_JointTrajectory_max_cdr_typesize;
}

size_t trajectory_msgs::msg::JointTrajectory::getCdrSerializedSize(
        const trajectory_msgs::msg::JointTrajectory& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getCdrSerializedSize(data.header(), current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.joint_names().size(); ++a)
    {
        current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) +
            data.joint_names().at(a).size() + 1;
    }
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.points().size(); ++a)
    {
        current_alignment += trajectory_msgs::msg::JointTrajectoryPoint::getCdrSerializedSize(data.points().at(a), current_alignment);}


    return current_alignment - initial_alignment;
}

void trajectory_msgs::msg::JointTrajectory::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_header;
    scdr << m_joint_names;
    scdr << m_points;

}

void trajectory_msgs::msg::JointTrajectory::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_header;
    dcdr >> m_joint_names;
    dcdr >> m_points;
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void trajectory_msgs::msg::JointTrajectory::header(
        const std_msgs::msg::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void trajectory_msgs::msg::JointTrajectory::header(
        std_msgs::msg::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const std_msgs::msg::Header& trajectory_msgs::msg::JointTrajectory::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
std_msgs::msg::Header& trajectory_msgs::msg::JointTrajectory::header()
{
    return m_header;
}
/*!
 * @brief This function copies the value in member joint_names
 * @param _joint_names New value to be copied in member joint_names
 */
void trajectory_msgs::msg::JointTrajectory::joint_names(
        const std::vector<std::string>& _joint_names)
{
    m_joint_names = _joint_names;
}

/*!
 * @brief This function moves the value in member joint_names
 * @param _joint_names New value to be moved in member joint_names
 */
void trajectory_msgs::msg::JointTrajectory::joint_names(
        std::vector<std::string>&& _joint_names)
{
    m_joint_names = std::move(_joint_names);
}

/*!
 * @brief This function returns a constant reference to member joint_names
 * @return Constant reference to member joint_names
 */
const std::vector<std::string>& trajectory_msgs::msg::JointTrajectory::joint_names() const
{
    return m_joint_names;
}

/*!
 * @brief This function returns a reference to member joint_names
 * @return Reference to member joint_names
 */
std::vector<std::string>& trajectory_msgs::msg::JointTrajectory::joint_names()
{
    return m_joint_names;
}
/*!
 * @brief This function copies the value in member points
 * @param _points New value to be copied in member points
 */
void trajectory_msgs::msg::JointTrajectory::points(
        const std::vector<trajectory_msgs::msg::JointTrajectoryPoint>& _points)
{
    m_points = _points;
}

/*!
 * @brief This function moves the value in member points
 * @param _points New value to be moved in member points
 */
void trajectory_msgs::msg::JointTrajectory::points(
        std::vector<trajectory_msgs::msg::JointTrajectoryPoint>&& _points)
{
    m_points = std::move(_points);
}

/*!
 * @brief This function returns a constant reference to member points
 * @return Constant reference to member points
 */
const std::vector<trajectory_msgs::msg::JointTrajectoryPoint>& trajectory_msgs::msg::JointTrajectory::points() const
{
    return m_points;
}

/*!
 * @brief This function returns a reference to member points
 * @return Reference to member points
 */
std::vector<trajectory_msgs::msg::JointTrajectoryPoint>& trajectory_msgs::msg::JointTrajectory::points()
{
    return m_points;
}


size_t trajectory_msgs::msg::JointTrajectory::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return trajectory_msgs_msg_JointTrajectory_max_key_cdr_typesize;
}

bool trajectory_msgs::msg::JointTrajectory::isKeyDefined()
{
    return false;
}

void trajectory_msgs::msg::JointTrajectory::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

