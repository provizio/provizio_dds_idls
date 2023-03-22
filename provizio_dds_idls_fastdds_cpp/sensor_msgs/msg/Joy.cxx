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
 * @file Joy.cpp
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

#include "Joy.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

sensor_msgs::msg::Joy::Joy()
{
    // m_header com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@a23a01d

    // m_axes com.eprosima.idl.parser.typecode.SequenceTypeCode@4acf72b6

    // m_buttons com.eprosima.idl.parser.typecode.SequenceTypeCode@7561db12


}

sensor_msgs::msg::Joy::~Joy()
{



}

sensor_msgs::msg::Joy::Joy(
        const Joy& x)
{
    m_header = x.m_header;
    m_axes = x.m_axes;
    m_buttons = x.m_buttons;
}

sensor_msgs::msg::Joy::Joy(
        Joy&& x) noexcept 
{
    m_header = std::move(x.m_header);
    m_axes = std::move(x.m_axes);
    m_buttons = std::move(x.m_buttons);
}

sensor_msgs::msg::Joy& sensor_msgs::msg::Joy::operator =(
        const Joy& x)
{

    m_header = x.m_header;
    m_axes = x.m_axes;
    m_buttons = x.m_buttons;

    return *this;
}

sensor_msgs::msg::Joy& sensor_msgs::msg::Joy::operator =(
        Joy&& x) noexcept
{

    m_header = std::move(x.m_header);
    m_axes = std::move(x.m_axes);
    m_buttons = std::move(x.m_buttons);

    return *this;
}

bool sensor_msgs::msg::Joy::operator ==(
        const Joy& x) const
{

    return (m_header == x.m_header && m_axes == x.m_axes && m_buttons == x.m_buttons);
}

bool sensor_msgs::msg::Joy::operator !=(
        const Joy& x) const
{
    return !(*this == x);
}

size_t sensor_msgs::msg::Joy::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getMaxCdrSerializedSize(current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += (100 * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += (100 * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);




    return current_alignment - initial_alignment;
}

size_t sensor_msgs::msg::Joy::getCdrSerializedSize(
        const sensor_msgs::msg::Joy& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getCdrSerializedSize(data.header(), current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.axes().size() > 0)
    {
        current_alignment += (data.axes().size() * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.buttons().size() > 0)
    {
        current_alignment += (data.buttons().size() * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }




    return current_alignment - initial_alignment;
}

void sensor_msgs::msg::Joy::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_header;
    scdr << m_axes;
    scdr << m_buttons;

}

void sensor_msgs::msg::Joy::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_header;
    dcdr >> m_axes;
    dcdr >> m_buttons;
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void sensor_msgs::msg::Joy::header(
        const std_msgs::msg::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void sensor_msgs::msg::Joy::header(
        std_msgs::msg::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const std_msgs::msg::Header& sensor_msgs::msg::Joy::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
std_msgs::msg::Header& sensor_msgs::msg::Joy::header()
{
    return m_header;
}
/*!
 * @brief This function copies the value in member axes
 * @param _axes New value to be copied in member axes
 */
void sensor_msgs::msg::Joy::axes(
        const std::vector<float>& _axes)
{
    m_axes = _axes;
}

/*!
 * @brief This function moves the value in member axes
 * @param _axes New value to be moved in member axes
 */
void sensor_msgs::msg::Joy::axes(
        std::vector<float>&& _axes)
{
    m_axes = std::move(_axes);
}

/*!
 * @brief This function returns a constant reference to member axes
 * @return Constant reference to member axes
 */
const std::vector<float>& sensor_msgs::msg::Joy::axes() const
{
    return m_axes;
}

/*!
 * @brief This function returns a reference to member axes
 * @return Reference to member axes
 */
std::vector<float>& sensor_msgs::msg::Joy::axes()
{
    return m_axes;
}
/*!
 * @brief This function copies the value in member buttons
 * @param _buttons New value to be copied in member buttons
 */
void sensor_msgs::msg::Joy::buttons(
        const std::vector<int32_t>& _buttons)
{
    m_buttons = _buttons;
}

/*!
 * @brief This function moves the value in member buttons
 * @param _buttons New value to be moved in member buttons
 */
void sensor_msgs::msg::Joy::buttons(
        std::vector<int32_t>&& _buttons)
{
    m_buttons = std::move(_buttons);
}

/*!
 * @brief This function returns a constant reference to member buttons
 * @return Constant reference to member buttons
 */
const std::vector<int32_t>& sensor_msgs::msg::Joy::buttons() const
{
    return m_buttons;
}

/*!
 * @brief This function returns a reference to member buttons
 * @return Reference to member buttons
 */
std::vector<int32_t>& sensor_msgs::msg::Joy::buttons()
{
    return m_buttons;
}

size_t sensor_msgs::msg::Joy::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;






    return current_align;
}

bool sensor_msgs::msg::Joy::isKeyDefined()
{
    return false;
}

void sensor_msgs::msg::Joy::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
       
}


