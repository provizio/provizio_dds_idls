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
 * @file DiagnosticStatus.cpp
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

#include "DiagnosticStatus.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>






diagnostic_msgs::msg::DiagnosticStatus::DiagnosticStatus()
{
    // m_level com.eprosima.idl.parser.typecode.PrimitiveTypeCode@20cece0b
    m_level = 0;
    // m_name com.eprosima.idl.parser.typecode.StringTypeCode@4c777e7b
    m_name ="";
    // m_message com.eprosima.idl.parser.typecode.StringTypeCode@5f038248
    m_message ="";
    // m_hardware_id com.eprosima.idl.parser.typecode.StringTypeCode@78e22d35
    m_hardware_id ="";
    // m_values com.eprosima.idl.parser.typecode.SequenceTypeCode@2e8a1ab4


}

diagnostic_msgs::msg::DiagnosticStatus::~DiagnosticStatus()
{





}

diagnostic_msgs::msg::DiagnosticStatus::DiagnosticStatus(
        const DiagnosticStatus& x)
{
    m_level = x.m_level;
    m_name = x.m_name;
    m_message = x.m_message;
    m_hardware_id = x.m_hardware_id;
    m_values = x.m_values;
}

diagnostic_msgs::msg::DiagnosticStatus::DiagnosticStatus(
        DiagnosticStatus&& x) noexcept 
{
    m_level = x.m_level;
    m_name = std::move(x.m_name);
    m_message = std::move(x.m_message);
    m_hardware_id = std::move(x.m_hardware_id);
    m_values = std::move(x.m_values);
}

diagnostic_msgs::msg::DiagnosticStatus& diagnostic_msgs::msg::DiagnosticStatus::operator =(
        const DiagnosticStatus& x)
{

    m_level = x.m_level;
    m_name = x.m_name;
    m_message = x.m_message;
    m_hardware_id = x.m_hardware_id;
    m_values = x.m_values;

    return *this;
}

diagnostic_msgs::msg::DiagnosticStatus& diagnostic_msgs::msg::DiagnosticStatus::operator =(
        DiagnosticStatus&& x) noexcept
{

    m_level = x.m_level;
    m_name = std::move(x.m_name);
    m_message = std::move(x.m_message);
    m_hardware_id = std::move(x.m_hardware_id);
    m_values = std::move(x.m_values);

    return *this;
}

bool diagnostic_msgs::msg::DiagnosticStatus::operator ==(
        const DiagnosticStatus& x) const
{

    return (m_level == x.m_level && m_name == x.m_name && m_message == x.m_message && m_hardware_id == x.m_hardware_id && m_values == x.m_values);
}

bool diagnostic_msgs::msg::DiagnosticStatus::operator !=(
        const DiagnosticStatus& x) const
{
    return !(*this == x);
}

size_t diagnostic_msgs::msg::DiagnosticStatus::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < 100; ++a)
    {
        current_alignment += diagnostic_msgs::msg::KeyValue::getMaxCdrSerializedSize(current_alignment);}


    return current_alignment - initial_alignment;
}

size_t diagnostic_msgs::msg::DiagnosticStatus::getCdrSerializedSize(
        const diagnostic_msgs::msg::DiagnosticStatus& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.name().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.message().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.hardware_id().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.values().size(); ++a)
    {
        current_alignment += diagnostic_msgs::msg::KeyValue::getCdrSerializedSize(data.values().at(a), current_alignment);}


    return current_alignment - initial_alignment;
}

void diagnostic_msgs::msg::DiagnosticStatus::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_level;
    scdr << m_name.c_str();
    scdr << m_message.c_str();
    scdr << m_hardware_id.c_str();
    scdr << m_values;

}

void diagnostic_msgs::msg::DiagnosticStatus::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_level;
    dcdr >> m_name;
    dcdr >> m_message;
    dcdr >> m_hardware_id;
    dcdr >> m_values;
}

/*!
 * @brief This function sets a value in member level
 * @param _level New value for member level
 */
void diagnostic_msgs::msg::DiagnosticStatus::level(
        uint8_t _level)
{
    m_level = _level;
}

/*!
 * @brief This function returns the value of member level
 * @return Value of member level
 */
uint8_t diagnostic_msgs::msg::DiagnosticStatus::level() const
{
    return m_level;
}

/*!
 * @brief This function returns a reference to member level
 * @return Reference to member level
 */
uint8_t& diagnostic_msgs::msg::DiagnosticStatus::level()
{
    return m_level;
}

/*!
 * @brief This function copies the value in member name
 * @param _name New value to be copied in member name
 */
void diagnostic_msgs::msg::DiagnosticStatus::name(
        const std::string& _name)
{
    m_name = _name;
}

/*!
 * @brief This function moves the value in member name
 * @param _name New value to be moved in member name
 */
void diagnostic_msgs::msg::DiagnosticStatus::name(
        std::string&& _name)
{
    m_name = std::move(_name);
}

/*!
 * @brief This function returns a constant reference to member name
 * @return Constant reference to member name
 */
const std::string& diagnostic_msgs::msg::DiagnosticStatus::name() const
{
    return m_name;
}

/*!
 * @brief This function returns a reference to member name
 * @return Reference to member name
 */
std::string& diagnostic_msgs::msg::DiagnosticStatus::name()
{
    return m_name;
}
/*!
 * @brief This function copies the value in member message
 * @param _message New value to be copied in member message
 */
void diagnostic_msgs::msg::DiagnosticStatus::message(
        const std::string& _message)
{
    m_message = _message;
}

/*!
 * @brief This function moves the value in member message
 * @param _message New value to be moved in member message
 */
void diagnostic_msgs::msg::DiagnosticStatus::message(
        std::string&& _message)
{
    m_message = std::move(_message);
}

/*!
 * @brief This function returns a constant reference to member message
 * @return Constant reference to member message
 */
const std::string& diagnostic_msgs::msg::DiagnosticStatus::message() const
{
    return m_message;
}

/*!
 * @brief This function returns a reference to member message
 * @return Reference to member message
 */
std::string& diagnostic_msgs::msg::DiagnosticStatus::message()
{
    return m_message;
}
/*!
 * @brief This function copies the value in member hardware_id
 * @param _hardware_id New value to be copied in member hardware_id
 */
void diagnostic_msgs::msg::DiagnosticStatus::hardware_id(
        const std::string& _hardware_id)
{
    m_hardware_id = _hardware_id;
}

/*!
 * @brief This function moves the value in member hardware_id
 * @param _hardware_id New value to be moved in member hardware_id
 */
void diagnostic_msgs::msg::DiagnosticStatus::hardware_id(
        std::string&& _hardware_id)
{
    m_hardware_id = std::move(_hardware_id);
}

/*!
 * @brief This function returns a constant reference to member hardware_id
 * @return Constant reference to member hardware_id
 */
const std::string& diagnostic_msgs::msg::DiagnosticStatus::hardware_id() const
{
    return m_hardware_id;
}

/*!
 * @brief This function returns a reference to member hardware_id
 * @return Reference to member hardware_id
 */
std::string& diagnostic_msgs::msg::DiagnosticStatus::hardware_id()
{
    return m_hardware_id;
}
/*!
 * @brief This function copies the value in member values
 * @param _values New value to be copied in member values
 */
void diagnostic_msgs::msg::DiagnosticStatus::values(
        const std::vector<diagnostic_msgs::msg::KeyValue>& _values)
{
    m_values = _values;
}

/*!
 * @brief This function moves the value in member values
 * @param _values New value to be moved in member values
 */
void diagnostic_msgs::msg::DiagnosticStatus::values(
        std::vector<diagnostic_msgs::msg::KeyValue>&& _values)
{
    m_values = std::move(_values);
}

/*!
 * @brief This function returns a constant reference to member values
 * @return Constant reference to member values
 */
const std::vector<diagnostic_msgs::msg::KeyValue>& diagnostic_msgs::msg::DiagnosticStatus::values() const
{
    return m_values;
}

/*!
 * @brief This function returns a reference to member values
 * @return Reference to member values
 */
std::vector<diagnostic_msgs::msg::KeyValue>& diagnostic_msgs::msg::DiagnosticStatus::values()
{
    return m_values;
}

size_t diagnostic_msgs::msg::DiagnosticStatus::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;








    return current_align;
}

bool diagnostic_msgs::msg::DiagnosticStatus::isKeyDefined()
{
    return false;
}

void diagnostic_msgs::msg::DiagnosticStatus::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
         
}


