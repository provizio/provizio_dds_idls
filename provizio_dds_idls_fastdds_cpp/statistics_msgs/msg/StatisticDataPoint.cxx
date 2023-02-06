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
 * @file StatisticDataPoint.cpp
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

#include "StatisticDataPoint.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

statistics_msgs::msg::StatisticDataPoint::StatisticDataPoint()
{
    // m_data_type com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1bfa5a13
    m_data_type = 0;
    // m_data com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1b1e1f02
    m_data = 0.0;

}

statistics_msgs::msg::StatisticDataPoint::~StatisticDataPoint()
{


}

statistics_msgs::msg::StatisticDataPoint::StatisticDataPoint(
        const StatisticDataPoint& x)
{
    m_data_type = x.m_data_type;
    m_data = x.m_data;
}

statistics_msgs::msg::StatisticDataPoint::StatisticDataPoint(
        StatisticDataPoint&& x) noexcept 
{
    m_data_type = x.m_data_type;
    m_data = x.m_data;
}

statistics_msgs::msg::StatisticDataPoint& statistics_msgs::msg::StatisticDataPoint::operator =(
        const StatisticDataPoint& x)
{

    m_data_type = x.m_data_type;
    m_data = x.m_data;

    return *this;
}

statistics_msgs::msg::StatisticDataPoint& statistics_msgs::msg::StatisticDataPoint::operator =(
        StatisticDataPoint&& x) noexcept
{

    m_data_type = x.m_data_type;
    m_data = x.m_data;

    return *this;
}

bool statistics_msgs::msg::StatisticDataPoint::operator ==(
        const StatisticDataPoint& x) const
{

    return (m_data_type == x.m_data_type && m_data == x.m_data);
}

bool statistics_msgs::msg::StatisticDataPoint::operator !=(
        const StatisticDataPoint& x) const
{
    return !(*this == x);
}

size_t statistics_msgs::msg::StatisticDataPoint::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);



    return current_alignment - initial_alignment;
}

size_t statistics_msgs::msg::StatisticDataPoint::getCdrSerializedSize(
        const statistics_msgs::msg::StatisticDataPoint& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);



    return current_alignment - initial_alignment;
}

void statistics_msgs::msg::StatisticDataPoint::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_data_type;
    scdr << m_data;

}

void statistics_msgs::msg::StatisticDataPoint::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_data_type;
    dcdr >> m_data;
}

/*!
 * @brief This function sets a value in member data_type
 * @param _data_type New value for member data_type
 */
void statistics_msgs::msg::StatisticDataPoint::data_type(
        uint8_t _data_type)
{
    m_data_type = _data_type;
}

/*!
 * @brief This function returns the value of member data_type
 * @return Value of member data_type
 */
uint8_t statistics_msgs::msg::StatisticDataPoint::data_type() const
{
    return m_data_type;
}

/*!
 * @brief This function returns a reference to member data_type
 * @return Reference to member data_type
 */
uint8_t& statistics_msgs::msg::StatisticDataPoint::data_type()
{
    return m_data_type;
}

/*!
 * @brief This function sets a value in member data
 * @param _data New value for member data
 */
void statistics_msgs::msg::StatisticDataPoint::data(
        double _data)
{
    m_data = _data;
}

/*!
 * @brief This function returns the value of member data
 * @return Value of member data
 */
double statistics_msgs::msg::StatisticDataPoint::data() const
{
    return m_data;
}

/*!
 * @brief This function returns a reference to member data
 * @return Reference to member data
 */
double& statistics_msgs::msg::StatisticDataPoint::data()
{
    return m_data;
}


size_t statistics_msgs::msg::StatisticDataPoint::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;





    return current_align;
}

bool statistics_msgs::msg::StatisticDataPoint::isKeyDefined()
{
    return false;
}

void statistics_msgs::msg::StatisticDataPoint::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
      
}


