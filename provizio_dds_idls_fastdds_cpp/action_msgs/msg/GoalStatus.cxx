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
 * @file GoalStatus.cpp
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

#include "GoalStatus.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>












actionlib_msgs::msg::GoalStatus::GoalStatus()
{
    // m_goal_id com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@72825400

    // m_status com.eprosima.idl.parser.typecode.PrimitiveTypeCode@19ee1ae6
    m_status = 0;
    // m_text com.eprosima.idl.parser.typecode.StringTypeCode@5f117b3d
    m_text ="";

}

actionlib_msgs::msg::GoalStatus::~GoalStatus()
{



}

actionlib_msgs::msg::GoalStatus::GoalStatus(
        const GoalStatus& x)
{
    m_goal_id = x.m_goal_id;
    m_status = x.m_status;
    m_text = x.m_text;
}

actionlib_msgs::msg::GoalStatus::GoalStatus(
        GoalStatus&& x) noexcept 
{
    m_goal_id = std::move(x.m_goal_id);
    m_status = x.m_status;
    m_text = std::move(x.m_text);
}

actionlib_msgs::msg::GoalStatus& actionlib_msgs::msg::GoalStatus::operator =(
        const GoalStatus& x)
{

    m_goal_id = x.m_goal_id;
    m_status = x.m_status;
    m_text = x.m_text;

    return *this;
}

actionlib_msgs::msg::GoalStatus& actionlib_msgs::msg::GoalStatus::operator =(
        GoalStatus&& x) noexcept
{

    m_goal_id = std::move(x.m_goal_id);
    m_status = x.m_status;
    m_text = std::move(x.m_text);

    return *this;
}

bool actionlib_msgs::msg::GoalStatus::operator ==(
        const GoalStatus& x) const
{

    return (m_goal_id == x.m_goal_id && m_status == x.m_status && m_text == x.m_text);
}

bool actionlib_msgs::msg::GoalStatus::operator !=(
        const GoalStatus& x) const
{
    return !(*this == x);
}

size_t actionlib_msgs::msg::GoalStatus::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += actionlib_msgs::msg::GoalID::getMaxCdrSerializedSize(current_alignment);
    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;


    return current_alignment - initial_alignment;
}

size_t actionlib_msgs::msg::GoalStatus::getCdrSerializedSize(
        const actionlib_msgs::msg::GoalStatus& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += actionlib_msgs::msg::GoalID::getCdrSerializedSize(data.goal_id(), current_alignment);
    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.text().size() + 1;


    return current_alignment - initial_alignment;
}

void actionlib_msgs::msg::GoalStatus::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_goal_id;
    scdr << m_status;
    scdr << m_text.c_str();

}

void actionlib_msgs::msg::GoalStatus::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_goal_id;
    dcdr >> m_status;
    dcdr >> m_text;
}

/*!
 * @brief This function copies the value in member goal_id
 * @param _goal_id New value to be copied in member goal_id
 */
void actionlib_msgs::msg::GoalStatus::goal_id(
        const actionlib_msgs::msg::GoalID& _goal_id)
{
    m_goal_id = _goal_id;
}

/*!
 * @brief This function moves the value in member goal_id
 * @param _goal_id New value to be moved in member goal_id
 */
void actionlib_msgs::msg::GoalStatus::goal_id(
        actionlib_msgs::msg::GoalID&& _goal_id)
{
    m_goal_id = std::move(_goal_id);
}

/*!
 * @brief This function returns a constant reference to member goal_id
 * @return Constant reference to member goal_id
 */
const actionlib_msgs::msg::GoalID& actionlib_msgs::msg::GoalStatus::goal_id() const
{
    return m_goal_id;
}

/*!
 * @brief This function returns a reference to member goal_id
 * @return Reference to member goal_id
 */
actionlib_msgs::msg::GoalID& actionlib_msgs::msg::GoalStatus::goal_id()
{
    return m_goal_id;
}
/*!
 * @brief This function sets a value in member status
 * @param _status New value for member status
 */
void actionlib_msgs::msg::GoalStatus::status(
        uint8_t _status)
{
    m_status = _status;
}

/*!
 * @brief This function returns the value of member status
 * @return Value of member status
 */
uint8_t actionlib_msgs::msg::GoalStatus::status() const
{
    return m_status;
}

/*!
 * @brief This function returns a reference to member status
 * @return Reference to member status
 */
uint8_t& actionlib_msgs::msg::GoalStatus::status()
{
    return m_status;
}

/*!
 * @brief This function copies the value in member text
 * @param _text New value to be copied in member text
 */
void actionlib_msgs::msg::GoalStatus::text(
        const std::string& _text)
{
    m_text = _text;
}

/*!
 * @brief This function moves the value in member text
 * @param _text New value to be moved in member text
 */
void actionlib_msgs::msg::GoalStatus::text(
        std::string&& _text)
{
    m_text = std::move(_text);
}

/*!
 * @brief This function returns a constant reference to member text
 * @return Constant reference to member text
 */
const std::string& actionlib_msgs::msg::GoalStatus::text() const
{
    return m_text;
}

/*!
 * @brief This function returns a reference to member text
 * @return Reference to member text
 */
std::string& actionlib_msgs::msg::GoalStatus::text()
{
    return m_text;
}

size_t actionlib_msgs::msg::GoalStatus::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;






    return current_align;
}

bool actionlib_msgs::msg::GoalStatus::isKeyDefined()
{
    return false;
}

void actionlib_msgs::msg::GoalStatus::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
       
}

