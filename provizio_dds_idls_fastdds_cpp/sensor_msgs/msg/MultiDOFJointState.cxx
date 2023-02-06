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
 * @file MultiDOFJointState.cpp
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

#include "MultiDOFJointState.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

sensor_msgs::msg::MultiDOFJointState::MultiDOFJointState()
{
    // m_header com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@126be319

    // m_joint_names com.eprosima.idl.parser.typecode.SequenceTypeCode@6c44052e

    // m_transforms com.eprosima.idl.parser.typecode.SequenceTypeCode@5c371e13

    // m_twist com.eprosima.idl.parser.typecode.SequenceTypeCode@530a8454

    // m_wrench com.eprosima.idl.parser.typecode.SequenceTypeCode@1e34c607


}

sensor_msgs::msg::MultiDOFJointState::~MultiDOFJointState()
{





}

sensor_msgs::msg::MultiDOFJointState::MultiDOFJointState(
        const MultiDOFJointState& x)
{
    m_header = x.m_header;
    m_joint_names = x.m_joint_names;
    m_transforms = x.m_transforms;
    m_twist = x.m_twist;
    m_wrench = x.m_wrench;
}

sensor_msgs::msg::MultiDOFJointState::MultiDOFJointState(
        MultiDOFJointState&& x) noexcept 
{
    m_header = std::move(x.m_header);
    m_joint_names = std::move(x.m_joint_names);
    m_transforms = std::move(x.m_transforms);
    m_twist = std::move(x.m_twist);
    m_wrench = std::move(x.m_wrench);
}

sensor_msgs::msg::MultiDOFJointState& sensor_msgs::msg::MultiDOFJointState::operator =(
        const MultiDOFJointState& x)
{

    m_header = x.m_header;
    m_joint_names = x.m_joint_names;
    m_transforms = x.m_transforms;
    m_twist = x.m_twist;
    m_wrench = x.m_wrench;

    return *this;
}

sensor_msgs::msg::MultiDOFJointState& sensor_msgs::msg::MultiDOFJointState::operator =(
        MultiDOFJointState&& x) noexcept
{

    m_header = std::move(x.m_header);
    m_joint_names = std::move(x.m_joint_names);
    m_transforms = std::move(x.m_transforms);
    m_twist = std::move(x.m_twist);
    m_wrench = std::move(x.m_wrench);

    return *this;
}

bool sensor_msgs::msg::MultiDOFJointState::operator ==(
        const MultiDOFJointState& x) const
{

    return (m_header == x.m_header && m_joint_names == x.m_joint_names && m_transforms == x.m_transforms && m_twist == x.m_twist && m_wrench == x.m_wrench);
}

bool sensor_msgs::msg::MultiDOFJointState::operator !=(
        const MultiDOFJointState& x) const
{
    return !(*this == x);
}

size_t sensor_msgs::msg::MultiDOFJointState::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getMaxCdrSerializedSize(current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < 100; ++a)
    {
        current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;
    }
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
        current_alignment += geometry_msgs::msg::Wrench::getMaxCdrSerializedSize(current_alignment);}


    return current_alignment - initial_alignment;
}

size_t sensor_msgs::msg::MultiDOFJointState::getCdrSerializedSize(
        const sensor_msgs::msg::MultiDOFJointState& data,
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


    for(size_t a = 0; a < data.transforms().size(); ++a)
    {
        current_alignment += geometry_msgs::msg::Transform::getCdrSerializedSize(data.transforms().at(a), current_alignment);}

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.twist().size(); ++a)
    {
        current_alignment += geometry_msgs::msg::Twist::getCdrSerializedSize(data.twist().at(a), current_alignment);}

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.wrench().size(); ++a)
    {
        current_alignment += geometry_msgs::msg::Wrench::getCdrSerializedSize(data.wrench().at(a), current_alignment);}


    return current_alignment - initial_alignment;
}

void sensor_msgs::msg::MultiDOFJointState::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_header;
    scdr << m_joint_names;
    scdr << m_transforms;
    scdr << m_twist;
    scdr << m_wrench;

}

void sensor_msgs::msg::MultiDOFJointState::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_header;
    dcdr >> m_joint_names;
    dcdr >> m_transforms;
    dcdr >> m_twist;
    dcdr >> m_wrench;
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void sensor_msgs::msg::MultiDOFJointState::header(
        const std_msgs::msg::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void sensor_msgs::msg::MultiDOFJointState::header(
        std_msgs::msg::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const std_msgs::msg::Header& sensor_msgs::msg::MultiDOFJointState::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
std_msgs::msg::Header& sensor_msgs::msg::MultiDOFJointState::header()
{
    return m_header;
}
/*!
 * @brief This function copies the value in member joint_names
 * @param _joint_names New value to be copied in member joint_names
 */
void sensor_msgs::msg::MultiDOFJointState::joint_names(
        const std::vector<std::string>& _joint_names)
{
    m_joint_names = _joint_names;
}

/*!
 * @brief This function moves the value in member joint_names
 * @param _joint_names New value to be moved in member joint_names
 */
void sensor_msgs::msg::MultiDOFJointState::joint_names(
        std::vector<std::string>&& _joint_names)
{
    m_joint_names = std::move(_joint_names);
}

/*!
 * @brief This function returns a constant reference to member joint_names
 * @return Constant reference to member joint_names
 */
const std::vector<std::string>& sensor_msgs::msg::MultiDOFJointState::joint_names() const
{
    return m_joint_names;
}

/*!
 * @brief This function returns a reference to member joint_names
 * @return Reference to member joint_names
 */
std::vector<std::string>& sensor_msgs::msg::MultiDOFJointState::joint_names()
{
    return m_joint_names;
}
/*!
 * @brief This function copies the value in member transforms
 * @param _transforms New value to be copied in member transforms
 */
void sensor_msgs::msg::MultiDOFJointState::transforms(
        const std::vector<geometry_msgs::msg::Transform>& _transforms)
{
    m_transforms = _transforms;
}

/*!
 * @brief This function moves the value in member transforms
 * @param _transforms New value to be moved in member transforms
 */
void sensor_msgs::msg::MultiDOFJointState::transforms(
        std::vector<geometry_msgs::msg::Transform>&& _transforms)
{
    m_transforms = std::move(_transforms);
}

/*!
 * @brief This function returns a constant reference to member transforms
 * @return Constant reference to member transforms
 */
const std::vector<geometry_msgs::msg::Transform>& sensor_msgs::msg::MultiDOFJointState::transforms() const
{
    return m_transforms;
}

/*!
 * @brief This function returns a reference to member transforms
 * @return Reference to member transforms
 */
std::vector<geometry_msgs::msg::Transform>& sensor_msgs::msg::MultiDOFJointState::transforms()
{
    return m_transforms;
}
/*!
 * @brief This function copies the value in member twist
 * @param _twist New value to be copied in member twist
 */
void sensor_msgs::msg::MultiDOFJointState::twist(
        const std::vector<geometry_msgs::msg::Twist>& _twist)
{
    m_twist = _twist;
}

/*!
 * @brief This function moves the value in member twist
 * @param _twist New value to be moved in member twist
 */
void sensor_msgs::msg::MultiDOFJointState::twist(
        std::vector<geometry_msgs::msg::Twist>&& _twist)
{
    m_twist = std::move(_twist);
}

/*!
 * @brief This function returns a constant reference to member twist
 * @return Constant reference to member twist
 */
const std::vector<geometry_msgs::msg::Twist>& sensor_msgs::msg::MultiDOFJointState::twist() const
{
    return m_twist;
}

/*!
 * @brief This function returns a reference to member twist
 * @return Reference to member twist
 */
std::vector<geometry_msgs::msg::Twist>& sensor_msgs::msg::MultiDOFJointState::twist()
{
    return m_twist;
}
/*!
 * @brief This function copies the value in member wrench
 * @param _wrench New value to be copied in member wrench
 */
void sensor_msgs::msg::MultiDOFJointState::wrench(
        const std::vector<geometry_msgs::msg::Wrench>& _wrench)
{
    m_wrench = _wrench;
}

/*!
 * @brief This function moves the value in member wrench
 * @param _wrench New value to be moved in member wrench
 */
void sensor_msgs::msg::MultiDOFJointState::wrench(
        std::vector<geometry_msgs::msg::Wrench>&& _wrench)
{
    m_wrench = std::move(_wrench);
}

/*!
 * @brief This function returns a constant reference to member wrench
 * @return Constant reference to member wrench
 */
const std::vector<geometry_msgs::msg::Wrench>& sensor_msgs::msg::MultiDOFJointState::wrench() const
{
    return m_wrench;
}

/*!
 * @brief This function returns a reference to member wrench
 * @return Reference to member wrench
 */
std::vector<geometry_msgs::msg::Wrench>& sensor_msgs::msg::MultiDOFJointState::wrench()
{
    return m_wrench;
}

size_t sensor_msgs::msg::MultiDOFJointState::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;








    return current_align;
}

bool sensor_msgs::msg::MultiDOFJointState::isKeyDefined()
{
    return false;
}

void sensor_msgs::msg::MultiDOFJointState::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
         
}


