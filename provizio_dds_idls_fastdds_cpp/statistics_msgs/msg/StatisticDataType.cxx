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
 * @file StatisticDataType.cpp
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

#include "StatisticDataType.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>








statistics_msgs::msg::StatisticDataType::StatisticDataType()
{
    // m_structure_needs_at_least_one_member com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1ec7d8b3
    m_structure_needs_at_least_one_member = 0;

}

statistics_msgs::msg::StatisticDataType::~StatisticDataType()
{
}

statistics_msgs::msg::StatisticDataType::StatisticDataType(
        const StatisticDataType& x)
{
    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;
}

statistics_msgs::msg::StatisticDataType::StatisticDataType(
        StatisticDataType&& x) noexcept 
{
    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;
}

statistics_msgs::msg::StatisticDataType& statistics_msgs::msg::StatisticDataType::operator =(
        const StatisticDataType& x)
{

    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;

    return *this;
}

statistics_msgs::msg::StatisticDataType& statistics_msgs::msg::StatisticDataType::operator =(
        StatisticDataType&& x) noexcept
{

    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;

    return *this;
}

bool statistics_msgs::msg::StatisticDataType::operator ==(
        const StatisticDataType& x) const
{

    return (m_structure_needs_at_least_one_member == x.m_structure_needs_at_least_one_member);
}

bool statistics_msgs::msg::StatisticDataType::operator !=(
        const StatisticDataType& x) const
{
    return !(*this == x);
}

size_t statistics_msgs::msg::StatisticDataType::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    return current_alignment - initial_alignment;
}

size_t statistics_msgs::msg::StatisticDataType::getCdrSerializedSize(
        const statistics_msgs::msg::StatisticDataType& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    return current_alignment - initial_alignment;
}

void statistics_msgs::msg::StatisticDataType::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_structure_needs_at_least_one_member;

}

void statistics_msgs::msg::StatisticDataType::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_structure_needs_at_least_one_member;
}

/*!
 * @brief This function sets a value in member structure_needs_at_least_one_member
 * @param _structure_needs_at_least_one_member New value for member structure_needs_at_least_one_member
 */
void statistics_msgs::msg::StatisticDataType::structure_needs_at_least_one_member(
        uint8_t _structure_needs_at_least_one_member)
{
    m_structure_needs_at_least_one_member = _structure_needs_at_least_one_member;
}

/*!
 * @brief This function returns the value of member structure_needs_at_least_one_member
 * @return Value of member structure_needs_at_least_one_member
 */
uint8_t statistics_msgs::msg::StatisticDataType::structure_needs_at_least_one_member() const
{
    return m_structure_needs_at_least_one_member;
}

/*!
 * @brief This function returns a reference to member structure_needs_at_least_one_member
 * @return Reference to member structure_needs_at_least_one_member
 */
uint8_t& statistics_msgs::msg::StatisticDataType::structure_needs_at_least_one_member()
{
    return m_structure_needs_at_least_one_member;
}


size_t statistics_msgs::msg::StatisticDataType::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;



    return current_align;
}

bool statistics_msgs::msg::StatisticDataType::isKeyDefined()
{
    return false;
}

void statistics_msgs::msg::StatisticDataType::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
     
}


