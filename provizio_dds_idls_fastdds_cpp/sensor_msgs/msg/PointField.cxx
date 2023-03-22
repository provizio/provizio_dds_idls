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
 * @file PointField.cpp
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

#include "PointField.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>










sensor_msgs::msg::PointField::PointField()
{
    // m_name com.eprosima.idl.parser.typecode.StringTypeCode@1d8e9d3e
    m_name ="";
    // m_offset com.eprosima.idl.parser.typecode.PrimitiveTypeCode@360d41d0
    m_offset = 0;
    // m_datatype com.eprosima.idl.parser.typecode.PrimitiveTypeCode@4586a8aa
    m_datatype = 0;
    // m_count com.eprosima.idl.parser.typecode.PrimitiveTypeCode@3dc82e6a
    m_count = 0;

}

sensor_msgs::msg::PointField::~PointField()
{




}

sensor_msgs::msg::PointField::PointField(
        const PointField& x)
{
    m_name = x.m_name;
    m_offset = x.m_offset;
    m_datatype = x.m_datatype;
    m_count = x.m_count;
}

sensor_msgs::msg::PointField::PointField(
        PointField&& x) noexcept 
{
    m_name = std::move(x.m_name);
    m_offset = x.m_offset;
    m_datatype = x.m_datatype;
    m_count = x.m_count;
}

sensor_msgs::msg::PointField& sensor_msgs::msg::PointField::operator =(
        const PointField& x)
{

    m_name = x.m_name;
    m_offset = x.m_offset;
    m_datatype = x.m_datatype;
    m_count = x.m_count;

    return *this;
}

sensor_msgs::msg::PointField& sensor_msgs::msg::PointField::operator =(
        PointField&& x) noexcept
{

    m_name = std::move(x.m_name);
    m_offset = x.m_offset;
    m_datatype = x.m_datatype;
    m_count = x.m_count;

    return *this;
}

bool sensor_msgs::msg::PointField::operator ==(
        const PointField& x) const
{

    return (m_name == x.m_name && m_offset == x.m_offset && m_datatype == x.m_datatype && m_count == x.m_count);
}

bool sensor_msgs::msg::PointField::operator !=(
        const PointField& x) const
{
    return !(*this == x);
}

size_t sensor_msgs::msg::PointField::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

size_t sensor_msgs::msg::PointField::getCdrSerializedSize(
        const sensor_msgs::msg::PointField& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.name().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

void sensor_msgs::msg::PointField::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_name.c_str();
    scdr << m_offset;
    scdr << m_datatype;
    scdr << m_count;

}

void sensor_msgs::msg::PointField::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_name;
    dcdr >> m_offset;
    dcdr >> m_datatype;
    dcdr >> m_count;
}

/*!
 * @brief This function copies the value in member name
 * @param _name New value to be copied in member name
 */
void sensor_msgs::msg::PointField::name(
        const std::string& _name)
{
    m_name = _name;
}

/*!
 * @brief This function moves the value in member name
 * @param _name New value to be moved in member name
 */
void sensor_msgs::msg::PointField::name(
        std::string&& _name)
{
    m_name = std::move(_name);
}

/*!
 * @brief This function returns a constant reference to member name
 * @return Constant reference to member name
 */
const std::string& sensor_msgs::msg::PointField::name() const
{
    return m_name;
}

/*!
 * @brief This function returns a reference to member name
 * @return Reference to member name
 */
std::string& sensor_msgs::msg::PointField::name()
{
    return m_name;
}
/*!
 * @brief This function sets a value in member offset
 * @param _offset New value for member offset
 */
void sensor_msgs::msg::PointField::offset(
        uint32_t _offset)
{
    m_offset = _offset;
}

/*!
 * @brief This function returns the value of member offset
 * @return Value of member offset
 */
uint32_t sensor_msgs::msg::PointField::offset() const
{
    return m_offset;
}

/*!
 * @brief This function returns a reference to member offset
 * @return Reference to member offset
 */
uint32_t& sensor_msgs::msg::PointField::offset()
{
    return m_offset;
}

/*!
 * @brief This function sets a value in member datatype
 * @param _datatype New value for member datatype
 */
void sensor_msgs::msg::PointField::datatype(
        uint8_t _datatype)
{
    m_datatype = _datatype;
}

/*!
 * @brief This function returns the value of member datatype
 * @return Value of member datatype
 */
uint8_t sensor_msgs::msg::PointField::datatype() const
{
    return m_datatype;
}

/*!
 * @brief This function returns a reference to member datatype
 * @return Reference to member datatype
 */
uint8_t& sensor_msgs::msg::PointField::datatype()
{
    return m_datatype;
}

/*!
 * @brief This function sets a value in member count
 * @param _count New value for member count
 */
void sensor_msgs::msg::PointField::count(
        uint32_t _count)
{
    m_count = _count;
}

/*!
 * @brief This function returns the value of member count
 * @return Value of member count
 */
uint32_t sensor_msgs::msg::PointField::count() const
{
    return m_count;
}

/*!
 * @brief This function returns a reference to member count
 * @return Reference to member count
 */
uint32_t& sensor_msgs::msg::PointField::count()
{
    return m_count;
}


size_t sensor_msgs::msg::PointField::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;







    return current_align;
}

bool sensor_msgs::msg::PointField::isKeyDefined()
{
    return false;
}

void sensor_msgs::msg::PointField::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
        
}


