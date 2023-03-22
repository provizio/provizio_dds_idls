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
 * @file UInt32.cpp
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

#include "UInt32.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

std_msgs::msg::UInt32::UInt32()
{
    // m_data com.eprosima.idl.parser.typecode.PrimitiveTypeCode@6b760460
    m_data = 0;

}

std_msgs::msg::UInt32::~UInt32()
{
}

std_msgs::msg::UInt32::UInt32(
        const UInt32& x)
{
    m_data = x.m_data;
}

std_msgs::msg::UInt32::UInt32(
        UInt32&& x) noexcept 
{
    m_data = x.m_data;
}

std_msgs::msg::UInt32& std_msgs::msg::UInt32::operator =(
        const UInt32& x)
{

    m_data = x.m_data;

    return *this;
}

std_msgs::msg::UInt32& std_msgs::msg::UInt32::operator =(
        UInt32&& x) noexcept
{

    m_data = x.m_data;

    return *this;
}

bool std_msgs::msg::UInt32::operator ==(
        const UInt32& x) const
{

    return (m_data == x.m_data);
}

bool std_msgs::msg::UInt32::operator !=(
        const UInt32& x) const
{
    return !(*this == x);
}

size_t std_msgs::msg::UInt32::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    return current_alignment - initial_alignment;
}

size_t std_msgs::msg::UInt32::getCdrSerializedSize(
        const std_msgs::msg::UInt32& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    return current_alignment - initial_alignment;
}

void std_msgs::msg::UInt32::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_data;

}

void std_msgs::msg::UInt32::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_data;
}

/*!
 * @brief This function sets a value in member data
 * @param _data New value for member data
 */
void std_msgs::msg::UInt32::data(
        uint32_t _data)
{
    m_data = _data;
}

/*!
 * @brief This function returns the value of member data
 * @return Value of member data
 */
uint32_t std_msgs::msg::UInt32::data() const
{
    return m_data;
}

/*!
 * @brief This function returns a reference to member data
 * @return Reference to member data
 */
uint32_t& std_msgs::msg::UInt32::data()
{
    return m_data;
}


size_t std_msgs::msg::UInt32::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;



    return current_align;
}

bool std_msgs::msg::UInt32::isKeyDefined()
{
    return false;
}

void std_msgs::msg::UInt32::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
     
}


