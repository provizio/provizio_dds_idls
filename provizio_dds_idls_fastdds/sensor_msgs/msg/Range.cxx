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
 * @file Range.cpp
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

#include "Range.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define builtin_interfaces_msg_Time_max_cdr_typesize 8ULL;
#define sensor_msgs_msg_Range_max_cdr_typesize 288ULL;
#define std_msgs_msg_Header_max_cdr_typesize 268ULL;
#define builtin_interfaces_msg_Time_max_key_cdr_typesize 0ULL;
#define sensor_msgs_msg_Range_max_key_cdr_typesize 0ULL;
#define std_msgs_msg_Header_max_key_cdr_typesize 0ULL;




sensor_msgs::msg::Range::Range()
{
    // std_msgs::msg::Header m_header

    // uint8 m_radiation_type
    m_radiation_type = 0;
    // float m_field_of_view
    m_field_of_view = 0.0;
    // float m_min_range
    m_min_range = 0.0;
    // float m_max_range
    m_max_range = 0.0;
    // float m_range
    m_range = 0.0;

}

sensor_msgs::msg::Range::~Range()
{






}

sensor_msgs::msg::Range::Range(
        const Range& x)
{
    m_header = x.m_header;
    m_radiation_type = x.m_radiation_type;
    m_field_of_view = x.m_field_of_view;
    m_min_range = x.m_min_range;
    m_max_range = x.m_max_range;
    m_range = x.m_range;
}

sensor_msgs::msg::Range::Range(
        Range&& x) noexcept 
{
    m_header = std::move(x.m_header);
    m_radiation_type = x.m_radiation_type;
    m_field_of_view = x.m_field_of_view;
    m_min_range = x.m_min_range;
    m_max_range = x.m_max_range;
    m_range = x.m_range;
}

sensor_msgs::msg::Range& sensor_msgs::msg::Range::operator =(
        const Range& x)
{

    m_header = x.m_header;
    m_radiation_type = x.m_radiation_type;
    m_field_of_view = x.m_field_of_view;
    m_min_range = x.m_min_range;
    m_max_range = x.m_max_range;
    m_range = x.m_range;

    return *this;
}

sensor_msgs::msg::Range& sensor_msgs::msg::Range::operator =(
        Range&& x) noexcept
{

    m_header = std::move(x.m_header);
    m_radiation_type = x.m_radiation_type;
    m_field_of_view = x.m_field_of_view;
    m_min_range = x.m_min_range;
    m_max_range = x.m_max_range;
    m_range = x.m_range;

    return *this;
}

bool sensor_msgs::msg::Range::operator ==(
        const Range& x) const
{

    return (m_header == x.m_header && m_radiation_type == x.m_radiation_type && m_field_of_view == x.m_field_of_view && m_min_range == x.m_min_range && m_max_range == x.m_max_range && m_range == x.m_range);
}

bool sensor_msgs::msg::Range::operator !=(
        const Range& x) const
{
    return !(*this == x);
}

size_t sensor_msgs::msg::Range::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return sensor_msgs_msg_Range_max_cdr_typesize;
}

size_t sensor_msgs::msg::Range::getCdrSerializedSize(
        const sensor_msgs::msg::Range& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getCdrSerializedSize(data.header(), current_alignment);
    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

void sensor_msgs::msg::Range::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_header;
    scdr << m_radiation_type;
    scdr << m_field_of_view;
    scdr << m_min_range;
    scdr << m_max_range;
    scdr << m_range;

}

void sensor_msgs::msg::Range::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_header;
    dcdr >> m_radiation_type;
    dcdr >> m_field_of_view;
    dcdr >> m_min_range;
    dcdr >> m_max_range;
    dcdr >> m_range;
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void sensor_msgs::msg::Range::header(
        const std_msgs::msg::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void sensor_msgs::msg::Range::header(
        std_msgs::msg::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const std_msgs::msg::Header& sensor_msgs::msg::Range::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
std_msgs::msg::Header& sensor_msgs::msg::Range::header()
{
    return m_header;
}
/*!
 * @brief This function sets a value in member radiation_type
 * @param _radiation_type New value for member radiation_type
 */
void sensor_msgs::msg::Range::radiation_type(
        uint8_t _radiation_type)
{
    m_radiation_type = _radiation_type;
}

/*!
 * @brief This function returns the value of member radiation_type
 * @return Value of member radiation_type
 */
uint8_t sensor_msgs::msg::Range::radiation_type() const
{
    return m_radiation_type;
}

/*!
 * @brief This function returns a reference to member radiation_type
 * @return Reference to member radiation_type
 */
uint8_t& sensor_msgs::msg::Range::radiation_type()
{
    return m_radiation_type;
}

/*!
 * @brief This function sets a value in member field_of_view
 * @param _field_of_view New value for member field_of_view
 */
void sensor_msgs::msg::Range::field_of_view(
        float _field_of_view)
{
    m_field_of_view = _field_of_view;
}

/*!
 * @brief This function returns the value of member field_of_view
 * @return Value of member field_of_view
 */
float sensor_msgs::msg::Range::field_of_view() const
{
    return m_field_of_view;
}

/*!
 * @brief This function returns a reference to member field_of_view
 * @return Reference to member field_of_view
 */
float& sensor_msgs::msg::Range::field_of_view()
{
    return m_field_of_view;
}

/*!
 * @brief This function sets a value in member min_range
 * @param _min_range New value for member min_range
 */
void sensor_msgs::msg::Range::min_range(
        float _min_range)
{
    m_min_range = _min_range;
}

/*!
 * @brief This function returns the value of member min_range
 * @return Value of member min_range
 */
float sensor_msgs::msg::Range::min_range() const
{
    return m_min_range;
}

/*!
 * @brief This function returns a reference to member min_range
 * @return Reference to member min_range
 */
float& sensor_msgs::msg::Range::min_range()
{
    return m_min_range;
}

/*!
 * @brief This function sets a value in member max_range
 * @param _max_range New value for member max_range
 */
void sensor_msgs::msg::Range::max_range(
        float _max_range)
{
    m_max_range = _max_range;
}

/*!
 * @brief This function returns the value of member max_range
 * @return Value of member max_range
 */
float sensor_msgs::msg::Range::max_range() const
{
    return m_max_range;
}

/*!
 * @brief This function returns a reference to member max_range
 * @return Reference to member max_range
 */
float& sensor_msgs::msg::Range::max_range()
{
    return m_max_range;
}

/*!
 * @brief This function sets a value in member range
 * @param _range New value for member range
 */
void sensor_msgs::msg::Range::range(
        float _range)
{
    m_range = _range;
}

/*!
 * @brief This function returns the value of member range
 * @return Value of member range
 */
float sensor_msgs::msg::Range::range() const
{
    return m_range;
}

/*!
 * @brief This function returns a reference to member range
 * @return Reference to member range
 */
float& sensor_msgs::msg::Range::range()
{
    return m_range;
}



size_t sensor_msgs::msg::Range::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return sensor_msgs_msg_Range_max_key_cdr_typesize;
}

bool sensor_msgs::msg::Range::isKeyDefined()
{
    return false;
}

void sensor_msgs::msg::Range::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


