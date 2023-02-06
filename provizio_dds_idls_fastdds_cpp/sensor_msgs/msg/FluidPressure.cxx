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
 * @file FluidPressure.cpp
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

#include "FluidPressure.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

sensor_msgs::msg::FluidPressure::FluidPressure()
{
    // m_header com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@32f61a31

    // m_fluid_pressure com.eprosima.idl.parser.typecode.PrimitiveTypeCode@f5c79a6
    m_fluid_pressure = 0.0;
    // m_variance com.eprosima.idl.parser.typecode.PrimitiveTypeCode@669253b7
    m_variance = 0.0;

}

sensor_msgs::msg::FluidPressure::~FluidPressure()
{



}

sensor_msgs::msg::FluidPressure::FluidPressure(
        const FluidPressure& x)
{
    m_header = x.m_header;
    m_fluid_pressure = x.m_fluid_pressure;
    m_variance = x.m_variance;
}

sensor_msgs::msg::FluidPressure::FluidPressure(
        FluidPressure&& x) noexcept 
{
    m_header = std::move(x.m_header);
    m_fluid_pressure = x.m_fluid_pressure;
    m_variance = x.m_variance;
}

sensor_msgs::msg::FluidPressure& sensor_msgs::msg::FluidPressure::operator =(
        const FluidPressure& x)
{

    m_header = x.m_header;
    m_fluid_pressure = x.m_fluid_pressure;
    m_variance = x.m_variance;

    return *this;
}

sensor_msgs::msg::FluidPressure& sensor_msgs::msg::FluidPressure::operator =(
        FluidPressure&& x) noexcept
{

    m_header = std::move(x.m_header);
    m_fluid_pressure = x.m_fluid_pressure;
    m_variance = x.m_variance;

    return *this;
}

bool sensor_msgs::msg::FluidPressure::operator ==(
        const FluidPressure& x) const
{

    return (m_header == x.m_header && m_fluid_pressure == x.m_fluid_pressure && m_variance == x.m_variance);
}

bool sensor_msgs::msg::FluidPressure::operator !=(
        const FluidPressure& x) const
{
    return !(*this == x);
}

size_t sensor_msgs::msg::FluidPressure::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getMaxCdrSerializedSize(current_alignment);
    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);



    return current_alignment - initial_alignment;
}

size_t sensor_msgs::msg::FluidPressure::getCdrSerializedSize(
        const sensor_msgs::msg::FluidPressure& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getCdrSerializedSize(data.header(), current_alignment);
    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);



    return current_alignment - initial_alignment;
}

void sensor_msgs::msg::FluidPressure::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_header;
    scdr << m_fluid_pressure;
    scdr << m_variance;

}

void sensor_msgs::msg::FluidPressure::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_header;
    dcdr >> m_fluid_pressure;
    dcdr >> m_variance;
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void sensor_msgs::msg::FluidPressure::header(
        const std_msgs::msg::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void sensor_msgs::msg::FluidPressure::header(
        std_msgs::msg::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const std_msgs::msg::Header& sensor_msgs::msg::FluidPressure::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
std_msgs::msg::Header& sensor_msgs::msg::FluidPressure::header()
{
    return m_header;
}
/*!
 * @brief This function sets a value in member fluid_pressure
 * @param _fluid_pressure New value for member fluid_pressure
 */
void sensor_msgs::msg::FluidPressure::fluid_pressure(
        double _fluid_pressure)
{
    m_fluid_pressure = _fluid_pressure;
}

/*!
 * @brief This function returns the value of member fluid_pressure
 * @return Value of member fluid_pressure
 */
double sensor_msgs::msg::FluidPressure::fluid_pressure() const
{
    return m_fluid_pressure;
}

/*!
 * @brief This function returns a reference to member fluid_pressure
 * @return Reference to member fluid_pressure
 */
double& sensor_msgs::msg::FluidPressure::fluid_pressure()
{
    return m_fluid_pressure;
}

/*!
 * @brief This function sets a value in member variance
 * @param _variance New value for member variance
 */
void sensor_msgs::msg::FluidPressure::variance(
        double _variance)
{
    m_variance = _variance;
}

/*!
 * @brief This function returns the value of member variance
 * @return Value of member variance
 */
double sensor_msgs::msg::FluidPressure::variance() const
{
    return m_variance;
}

/*!
 * @brief This function returns a reference to member variance
 * @return Reference to member variance
 */
double& sensor_msgs::msg::FluidPressure::variance()
{
    return m_variance;
}


size_t sensor_msgs::msg::FluidPressure::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;






    return current_align;
}

bool sensor_msgs::msg::FluidPressure::isKeyDefined()
{
    return false;
}

void sensor_msgs::msg::FluidPressure::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
       
}


