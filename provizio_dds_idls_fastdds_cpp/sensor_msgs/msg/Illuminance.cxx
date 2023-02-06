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
 * @file Illuminance.cpp
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

#include "Illuminance.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

sensor_msgs::msg::Illuminance::Illuminance()
{
    // m_header com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@22db8f4

    // m_illuminance com.eprosima.idl.parser.typecode.PrimitiveTypeCode@2b46a8c1
    m_illuminance = 0.0;
    // m_variance com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1d572e62
    m_variance = 0.0;

}

sensor_msgs::msg::Illuminance::~Illuminance()
{



}

sensor_msgs::msg::Illuminance::Illuminance(
        const Illuminance& x)
{
    m_header = x.m_header;
    m_illuminance = x.m_illuminance;
    m_variance = x.m_variance;
}

sensor_msgs::msg::Illuminance::Illuminance(
        Illuminance&& x) noexcept 
{
    m_header = std::move(x.m_header);
    m_illuminance = x.m_illuminance;
    m_variance = x.m_variance;
}

sensor_msgs::msg::Illuminance& sensor_msgs::msg::Illuminance::operator =(
        const Illuminance& x)
{

    m_header = x.m_header;
    m_illuminance = x.m_illuminance;
    m_variance = x.m_variance;

    return *this;
}

sensor_msgs::msg::Illuminance& sensor_msgs::msg::Illuminance::operator =(
        Illuminance&& x) noexcept
{

    m_header = std::move(x.m_header);
    m_illuminance = x.m_illuminance;
    m_variance = x.m_variance;

    return *this;
}

bool sensor_msgs::msg::Illuminance::operator ==(
        const Illuminance& x) const
{

    return (m_header == x.m_header && m_illuminance == x.m_illuminance && m_variance == x.m_variance);
}

bool sensor_msgs::msg::Illuminance::operator !=(
        const Illuminance& x) const
{
    return !(*this == x);
}

size_t sensor_msgs::msg::Illuminance::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getMaxCdrSerializedSize(current_alignment);
    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);



    return current_alignment - initial_alignment;
}

size_t sensor_msgs::msg::Illuminance::getCdrSerializedSize(
        const sensor_msgs::msg::Illuminance& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getCdrSerializedSize(data.header(), current_alignment);
    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);



    return current_alignment - initial_alignment;
}

void sensor_msgs::msg::Illuminance::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_header;
    scdr << m_illuminance;
    scdr << m_variance;

}

void sensor_msgs::msg::Illuminance::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_header;
    dcdr >> m_illuminance;
    dcdr >> m_variance;
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void sensor_msgs::msg::Illuminance::header(
        const std_msgs::msg::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void sensor_msgs::msg::Illuminance::header(
        std_msgs::msg::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const std_msgs::msg::Header& sensor_msgs::msg::Illuminance::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
std_msgs::msg::Header& sensor_msgs::msg::Illuminance::header()
{
    return m_header;
}
/*!
 * @brief This function sets a value in member illuminance
 * @param _illuminance New value for member illuminance
 */
void sensor_msgs::msg::Illuminance::illuminance(
        double _illuminance)
{
    m_illuminance = _illuminance;
}

/*!
 * @brief This function returns the value of member illuminance
 * @return Value of member illuminance
 */
double sensor_msgs::msg::Illuminance::illuminance() const
{
    return m_illuminance;
}

/*!
 * @brief This function returns a reference to member illuminance
 * @return Reference to member illuminance
 */
double& sensor_msgs::msg::Illuminance::illuminance()
{
    return m_illuminance;
}

/*!
 * @brief This function sets a value in member variance
 * @param _variance New value for member variance
 */
void sensor_msgs::msg::Illuminance::variance(
        double _variance)
{
    m_variance = _variance;
}

/*!
 * @brief This function returns the value of member variance
 * @return Value of member variance
 */
double sensor_msgs::msg::Illuminance::variance() const
{
    return m_variance;
}

/*!
 * @brief This function returns a reference to member variance
 * @return Reference to member variance
 */
double& sensor_msgs::msg::Illuminance::variance()
{
    return m_variance;
}


size_t sensor_msgs::msg::Illuminance::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;






    return current_align;
}

bool sensor_msgs::msg::Illuminance::isKeyDefined()
{
    return false;
}

void sensor_msgs::msg::Illuminance::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
       
}

