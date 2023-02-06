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
 * @file FloatingPointRange.cpp
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

#include "FloatingPointRange.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

rcl_interfaces::msg::FloatingPointRange::FloatingPointRange()
{
    // m_from_value com.eprosima.idl.parser.typecode.PrimitiveTypeCode@3c54ddec
    m_from_value = 0.0;
    // m_to_value com.eprosima.idl.parser.typecode.PrimitiveTypeCode@6d69a0d3
    m_to_value = 0.0;
    // m_step com.eprosima.idl.parser.typecode.PrimitiveTypeCode@4f114b
    m_step = 0.0;

}

rcl_interfaces::msg::FloatingPointRange::~FloatingPointRange()
{



}

rcl_interfaces::msg::FloatingPointRange::FloatingPointRange(
        const FloatingPointRange& x)
{
    m_from_value = x.m_from_value;
    m_to_value = x.m_to_value;
    m_step = x.m_step;
}

rcl_interfaces::msg::FloatingPointRange::FloatingPointRange(
        FloatingPointRange&& x) noexcept 
{
    m_from_value = x.m_from_value;
    m_to_value = x.m_to_value;
    m_step = x.m_step;
}

rcl_interfaces::msg::FloatingPointRange& rcl_interfaces::msg::FloatingPointRange::operator =(
        const FloatingPointRange& x)
{

    m_from_value = x.m_from_value;
    m_to_value = x.m_to_value;
    m_step = x.m_step;

    return *this;
}

rcl_interfaces::msg::FloatingPointRange& rcl_interfaces::msg::FloatingPointRange::operator =(
        FloatingPointRange&& x) noexcept
{

    m_from_value = x.m_from_value;
    m_to_value = x.m_to_value;
    m_step = x.m_step;

    return *this;
}

bool rcl_interfaces::msg::FloatingPointRange::operator ==(
        const FloatingPointRange& x) const
{

    return (m_from_value == x.m_from_value && m_to_value == x.m_to_value && m_step == x.m_step);
}

bool rcl_interfaces::msg::FloatingPointRange::operator !=(
        const FloatingPointRange& x) const
{
    return !(*this == x);
}

size_t rcl_interfaces::msg::FloatingPointRange::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);



    return current_alignment - initial_alignment;
}

size_t rcl_interfaces::msg::FloatingPointRange::getCdrSerializedSize(
        const rcl_interfaces::msg::FloatingPointRange& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);



    return current_alignment - initial_alignment;
}

void rcl_interfaces::msg::FloatingPointRange::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_from_value;
    scdr << m_to_value;
    scdr << m_step;

}

void rcl_interfaces::msg::FloatingPointRange::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_from_value;
    dcdr >> m_to_value;
    dcdr >> m_step;
}

/*!
 * @brief This function sets a value in member from_value
 * @param _from_value New value for member from_value
 */
void rcl_interfaces::msg::FloatingPointRange::from_value(
        double _from_value)
{
    m_from_value = _from_value;
}

/*!
 * @brief This function returns the value of member from_value
 * @return Value of member from_value
 */
double rcl_interfaces::msg::FloatingPointRange::from_value() const
{
    return m_from_value;
}

/*!
 * @brief This function returns a reference to member from_value
 * @return Reference to member from_value
 */
double& rcl_interfaces::msg::FloatingPointRange::from_value()
{
    return m_from_value;
}

/*!
 * @brief This function sets a value in member to_value
 * @param _to_value New value for member to_value
 */
void rcl_interfaces::msg::FloatingPointRange::to_value(
        double _to_value)
{
    m_to_value = _to_value;
}

/*!
 * @brief This function returns the value of member to_value
 * @return Value of member to_value
 */
double rcl_interfaces::msg::FloatingPointRange::to_value() const
{
    return m_to_value;
}

/*!
 * @brief This function returns a reference to member to_value
 * @return Reference to member to_value
 */
double& rcl_interfaces::msg::FloatingPointRange::to_value()
{
    return m_to_value;
}

/*!
 * @brief This function sets a value in member step
 * @param _step New value for member step
 */
void rcl_interfaces::msg::FloatingPointRange::step(
        double _step)
{
    m_step = _step;
}

/*!
 * @brief This function returns the value of member step
 * @return Value of member step
 */
double rcl_interfaces::msg::FloatingPointRange::step() const
{
    return m_step;
}

/*!
 * @brief This function returns a reference to member step
 * @return Reference to member step
 */
double& rcl_interfaces::msg::FloatingPointRange::step()
{
    return m_step;
}


size_t rcl_interfaces::msg::FloatingPointRange::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;






    return current_align;
}

bool rcl_interfaces::msg::FloatingPointRange::isKeyDefined()
{
    return false;
}

void rcl_interfaces::msg::FloatingPointRange::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
       
}


