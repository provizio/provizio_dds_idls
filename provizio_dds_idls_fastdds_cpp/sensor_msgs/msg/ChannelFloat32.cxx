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
 * @file ChannelFloat32.cpp
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

#include "ChannelFloat32.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

sensor_msgs::msg::ChannelFloat32::ChannelFloat32()
{
    // m_name com.eprosima.idl.parser.typecode.StringTypeCode@1ac0cdb0
    m_name ="";
    // m_values com.eprosima.idl.parser.typecode.SequenceTypeCode@6684f7f2


}

sensor_msgs::msg::ChannelFloat32::~ChannelFloat32()
{


}

sensor_msgs::msg::ChannelFloat32::ChannelFloat32(
        const ChannelFloat32& x)
{
    m_name = x.m_name;
    m_values = x.m_values;
}

sensor_msgs::msg::ChannelFloat32::ChannelFloat32(
        ChannelFloat32&& x) noexcept 
{
    m_name = std::move(x.m_name);
    m_values = std::move(x.m_values);
}

sensor_msgs::msg::ChannelFloat32& sensor_msgs::msg::ChannelFloat32::operator =(
        const ChannelFloat32& x)
{

    m_name = x.m_name;
    m_values = x.m_values;

    return *this;
}

sensor_msgs::msg::ChannelFloat32& sensor_msgs::msg::ChannelFloat32::operator =(
        ChannelFloat32&& x) noexcept
{

    m_name = std::move(x.m_name);
    m_values = std::move(x.m_values);

    return *this;
}

bool sensor_msgs::msg::ChannelFloat32::operator ==(
        const ChannelFloat32& x) const
{

    return (m_name == x.m_name && m_values == x.m_values);
}

bool sensor_msgs::msg::ChannelFloat32::operator !=(
        const ChannelFloat32& x) const
{
    return !(*this == x);
}

size_t sensor_msgs::msg::ChannelFloat32::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += (100 * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);




    return current_alignment - initial_alignment;
}

size_t sensor_msgs::msg::ChannelFloat32::getCdrSerializedSize(
        const sensor_msgs::msg::ChannelFloat32& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.name().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.values().size() > 0)
    {
        current_alignment += (data.values().size() * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }




    return current_alignment - initial_alignment;
}

void sensor_msgs::msg::ChannelFloat32::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_name.c_str();
    scdr << m_values;

}

void sensor_msgs::msg::ChannelFloat32::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_name;
    dcdr >> m_values;
}

/*!
 * @brief This function copies the value in member name
 * @param _name New value to be copied in member name
 */
void sensor_msgs::msg::ChannelFloat32::name(
        const std::string& _name)
{
    m_name = _name;
}

/*!
 * @brief This function moves the value in member name
 * @param _name New value to be moved in member name
 */
void sensor_msgs::msg::ChannelFloat32::name(
        std::string&& _name)
{
    m_name = std::move(_name);
}

/*!
 * @brief This function returns a constant reference to member name
 * @return Constant reference to member name
 */
const std::string& sensor_msgs::msg::ChannelFloat32::name() const
{
    return m_name;
}

/*!
 * @brief This function returns a reference to member name
 * @return Reference to member name
 */
std::string& sensor_msgs::msg::ChannelFloat32::name()
{
    return m_name;
}
/*!
 * @brief This function copies the value in member values
 * @param _values New value to be copied in member values
 */
void sensor_msgs::msg::ChannelFloat32::values(
        const std::vector<float>& _values)
{
    m_values = _values;
}

/*!
 * @brief This function moves the value in member values
 * @param _values New value to be moved in member values
 */
void sensor_msgs::msg::ChannelFloat32::values(
        std::vector<float>&& _values)
{
    m_values = std::move(_values);
}

/*!
 * @brief This function returns a constant reference to member values
 * @return Constant reference to member values
 */
const std::vector<float>& sensor_msgs::msg::ChannelFloat32::values() const
{
    return m_values;
}

/*!
 * @brief This function returns a reference to member values
 * @return Reference to member values
 */
std::vector<float>& sensor_msgs::msg::ChannelFloat32::values()
{
    return m_values;
}

size_t sensor_msgs::msg::ChannelFloat32::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;





    return current_align;
}

bool sensor_msgs::msg::ChannelFloat32::isKeyDefined()
{
    return false;
}

void sensor_msgs::msg::ChannelFloat32::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
      
}


