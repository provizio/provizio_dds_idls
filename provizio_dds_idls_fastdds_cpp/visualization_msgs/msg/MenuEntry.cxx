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
 * @file MenuEntry.cpp
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

#include "MenuEntry.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>





visualization_msgs::msg::MenuEntry::MenuEntry()
{
    // m_id com.eprosima.idl.parser.typecode.PrimitiveTypeCode@3661b732
    m_id = 0;
    // m_parent_id com.eprosima.idl.parser.typecode.PrimitiveTypeCode@5111f814
    m_parent_id = 0;
    // m_title com.eprosima.idl.parser.typecode.StringTypeCode@71eafb64
    m_title ="";
    // m_command com.eprosima.idl.parser.typecode.StringTypeCode@491cc0eb
    m_command ="";
    // m_command_type com.eprosima.idl.parser.typecode.PrimitiveTypeCode@727f36dd
    m_command_type = 0;

}

visualization_msgs::msg::MenuEntry::~MenuEntry()
{





}

visualization_msgs::msg::MenuEntry::MenuEntry(
        const MenuEntry& x)
{
    m_id = x.m_id;
    m_parent_id = x.m_parent_id;
    m_title = x.m_title;
    m_command = x.m_command;
    m_command_type = x.m_command_type;
}

visualization_msgs::msg::MenuEntry::MenuEntry(
        MenuEntry&& x) noexcept 
{
    m_id = x.m_id;
    m_parent_id = x.m_parent_id;
    m_title = std::move(x.m_title);
    m_command = std::move(x.m_command);
    m_command_type = x.m_command_type;
}

visualization_msgs::msg::MenuEntry& visualization_msgs::msg::MenuEntry::operator =(
        const MenuEntry& x)
{

    m_id = x.m_id;
    m_parent_id = x.m_parent_id;
    m_title = x.m_title;
    m_command = x.m_command;
    m_command_type = x.m_command_type;

    return *this;
}

visualization_msgs::msg::MenuEntry& visualization_msgs::msg::MenuEntry::operator =(
        MenuEntry&& x) noexcept
{

    m_id = x.m_id;
    m_parent_id = x.m_parent_id;
    m_title = std::move(x.m_title);
    m_command = std::move(x.m_command);
    m_command_type = x.m_command_type;

    return *this;
}

bool visualization_msgs::msg::MenuEntry::operator ==(
        const MenuEntry& x) const
{

    return (m_id == x.m_id && m_parent_id == x.m_parent_id && m_title == x.m_title && m_command == x.m_command && m_command_type == x.m_command_type);
}

bool visualization_msgs::msg::MenuEntry::operator !=(
        const MenuEntry& x) const
{
    return !(*this == x);
}

size_t visualization_msgs::msg::MenuEntry::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

size_t visualization_msgs::msg::MenuEntry::getCdrSerializedSize(
        const visualization_msgs::msg::MenuEntry& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.title().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.command().size() + 1;

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

void visualization_msgs::msg::MenuEntry::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_id;
    scdr << m_parent_id;
    scdr << m_title.c_str();
    scdr << m_command.c_str();
    scdr << m_command_type;

}

void visualization_msgs::msg::MenuEntry::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_id;
    dcdr >> m_parent_id;
    dcdr >> m_title;
    dcdr >> m_command;
    dcdr >> m_command_type;
}

/*!
 * @brief This function sets a value in member id
 * @param _id New value for member id
 */
void visualization_msgs::msg::MenuEntry::id(
        uint32_t _id)
{
    m_id = _id;
}

/*!
 * @brief This function returns the value of member id
 * @return Value of member id
 */
uint32_t visualization_msgs::msg::MenuEntry::id() const
{
    return m_id;
}

/*!
 * @brief This function returns a reference to member id
 * @return Reference to member id
 */
uint32_t& visualization_msgs::msg::MenuEntry::id()
{
    return m_id;
}

/*!
 * @brief This function sets a value in member parent_id
 * @param _parent_id New value for member parent_id
 */
void visualization_msgs::msg::MenuEntry::parent_id(
        uint32_t _parent_id)
{
    m_parent_id = _parent_id;
}

/*!
 * @brief This function returns the value of member parent_id
 * @return Value of member parent_id
 */
uint32_t visualization_msgs::msg::MenuEntry::parent_id() const
{
    return m_parent_id;
}

/*!
 * @brief This function returns a reference to member parent_id
 * @return Reference to member parent_id
 */
uint32_t& visualization_msgs::msg::MenuEntry::parent_id()
{
    return m_parent_id;
}

/*!
 * @brief This function copies the value in member title
 * @param _title New value to be copied in member title
 */
void visualization_msgs::msg::MenuEntry::title(
        const std::string& _title)
{
    m_title = _title;
}

/*!
 * @brief This function moves the value in member title
 * @param _title New value to be moved in member title
 */
void visualization_msgs::msg::MenuEntry::title(
        std::string&& _title)
{
    m_title = std::move(_title);
}

/*!
 * @brief This function returns a constant reference to member title
 * @return Constant reference to member title
 */
const std::string& visualization_msgs::msg::MenuEntry::title() const
{
    return m_title;
}

/*!
 * @brief This function returns a reference to member title
 * @return Reference to member title
 */
std::string& visualization_msgs::msg::MenuEntry::title()
{
    return m_title;
}
/*!
 * @brief This function copies the value in member command
 * @param _command New value to be copied in member command
 */
void visualization_msgs::msg::MenuEntry::command(
        const std::string& _command)
{
    m_command = _command;
}

/*!
 * @brief This function moves the value in member command
 * @param _command New value to be moved in member command
 */
void visualization_msgs::msg::MenuEntry::command(
        std::string&& _command)
{
    m_command = std::move(_command);
}

/*!
 * @brief This function returns a constant reference to member command
 * @return Constant reference to member command
 */
const std::string& visualization_msgs::msg::MenuEntry::command() const
{
    return m_command;
}

/*!
 * @brief This function returns a reference to member command
 * @return Reference to member command
 */
std::string& visualization_msgs::msg::MenuEntry::command()
{
    return m_command;
}
/*!
 * @brief This function sets a value in member command_type
 * @param _command_type New value for member command_type
 */
void visualization_msgs::msg::MenuEntry::command_type(
        uint8_t _command_type)
{
    m_command_type = _command_type;
}

/*!
 * @brief This function returns the value of member command_type
 * @return Value of member command_type
 */
uint8_t visualization_msgs::msg::MenuEntry::command_type() const
{
    return m_command_type;
}

/*!
 * @brief This function returns a reference to member command_type
 * @return Reference to member command_type
 */
uint8_t& visualization_msgs::msg::MenuEntry::command_type()
{
    return m_command_type;
}


size_t visualization_msgs::msg::MenuEntry::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;








    return current_align;
}

bool visualization_msgs::msg::MenuEntry::isKeyDefined()
{
    return false;
}

void visualization_msgs::msg::MenuEntry::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
         
}


