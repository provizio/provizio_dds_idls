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
 * @file JoyFeedbackArray.cpp
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

#include "JoyFeedbackArray.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

sensor_msgs::msg::JoyFeedbackArray::JoyFeedbackArray()
{
    // m_array com.eprosima.idl.parser.typecode.SequenceTypeCode@4acf72b6


}

sensor_msgs::msg::JoyFeedbackArray::~JoyFeedbackArray()
{
}

sensor_msgs::msg::JoyFeedbackArray::JoyFeedbackArray(
        const JoyFeedbackArray& x)
{
    m_array = x.m_array;
}

sensor_msgs::msg::JoyFeedbackArray::JoyFeedbackArray(
        JoyFeedbackArray&& x) noexcept 
{
    m_array = std::move(x.m_array);
}

sensor_msgs::msg::JoyFeedbackArray& sensor_msgs::msg::JoyFeedbackArray::operator =(
        const JoyFeedbackArray& x)
{

    m_array = x.m_array;

    return *this;
}

sensor_msgs::msg::JoyFeedbackArray& sensor_msgs::msg::JoyFeedbackArray::operator =(
        JoyFeedbackArray&& x) noexcept
{

    m_array = std::move(x.m_array);

    return *this;
}

bool sensor_msgs::msg::JoyFeedbackArray::operator ==(
        const JoyFeedbackArray& x) const
{

    return (m_array == x.m_array);
}

bool sensor_msgs::msg::JoyFeedbackArray::operator !=(
        const JoyFeedbackArray& x) const
{
    return !(*this == x);
}

size_t sensor_msgs::msg::JoyFeedbackArray::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < 100; ++a)
    {
        current_alignment += sensor_msgs::msg::JoyFeedback::getMaxCdrSerializedSize(current_alignment);}

    return current_alignment - initial_alignment;
}

size_t sensor_msgs::msg::JoyFeedbackArray::getCdrSerializedSize(
        const sensor_msgs::msg::JoyFeedbackArray& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.array().size(); ++a)
    {
        current_alignment += sensor_msgs::msg::JoyFeedback::getCdrSerializedSize(data.array().at(a), current_alignment);}

    return current_alignment - initial_alignment;
}

void sensor_msgs::msg::JoyFeedbackArray::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_array;
}

void sensor_msgs::msg::JoyFeedbackArray::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_array;}

/*!
 * @brief This function copies the value in member array
 * @param _array New value to be copied in member array
 */
void sensor_msgs::msg::JoyFeedbackArray::array(
        const std::vector<sensor_msgs::msg::JoyFeedback>& _array)
{
    m_array = _array;
}

/*!
 * @brief This function moves the value in member array
 * @param _array New value to be moved in member array
 */
void sensor_msgs::msg::JoyFeedbackArray::array(
        std::vector<sensor_msgs::msg::JoyFeedback>&& _array)
{
    m_array = std::move(_array);
}

/*!
 * @brief This function returns a constant reference to member array
 * @return Constant reference to member array
 */
const std::vector<sensor_msgs::msg::JoyFeedback>& sensor_msgs::msg::JoyFeedbackArray::array() const
{
    return m_array;
}

/*!
 * @brief This function returns a reference to member array
 * @return Reference to member array
 */
std::vector<sensor_msgs::msg::JoyFeedback>& sensor_msgs::msg::JoyFeedbackArray::array()
{
    return m_array;
}

size_t sensor_msgs::msg::JoyFeedbackArray::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;



    return current_align;
}

bool sensor_msgs::msg::JoyFeedbackArray::isKeyDefined()
{
    return false;
}

void sensor_msgs::msg::JoyFeedbackArray::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
     
}


