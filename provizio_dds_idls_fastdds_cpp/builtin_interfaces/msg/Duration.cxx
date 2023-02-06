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
 * @file Duration.cpp
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

#include "Duration.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

builtin_interfaces::msg::Duration::Duration()
{
    // m_sec com.eprosima.idl.parser.typecode.PrimitiveTypeCode@76d0a290
    m_sec = 0;
    // m_nanosec com.eprosima.idl.parser.typecode.PrimitiveTypeCode@ea84346
    m_nanosec = 0;

}

builtin_interfaces::msg::Duration::~Duration()
{


}

builtin_interfaces::msg::Duration::Duration(
        const Duration& x)
{
    m_sec = x.m_sec;
    m_nanosec = x.m_nanosec;
}

builtin_interfaces::msg::Duration::Duration(
        Duration&& x) noexcept 
{
    m_sec = x.m_sec;
    m_nanosec = x.m_nanosec;
}

builtin_interfaces::msg::Duration& builtin_interfaces::msg::Duration::operator =(
        const Duration& x)
{

    m_sec = x.m_sec;
    m_nanosec = x.m_nanosec;

    return *this;
}

builtin_interfaces::msg::Duration& builtin_interfaces::msg::Duration::operator =(
        Duration&& x) noexcept
{

    m_sec = x.m_sec;
    m_nanosec = x.m_nanosec;

    return *this;
}

bool builtin_interfaces::msg::Duration::operator ==(
        const Duration& x) const
{

    return (m_sec == x.m_sec && m_nanosec == x.m_nanosec);
}

bool builtin_interfaces::msg::Duration::operator !=(
        const Duration& x) const
{
    return !(*this == x);
}

size_t builtin_interfaces::msg::Duration::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

size_t builtin_interfaces::msg::Duration::getCdrSerializedSize(
        const builtin_interfaces::msg::Duration& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

void builtin_interfaces::msg::Duration::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_sec;
    scdr << m_nanosec;

}

void builtin_interfaces::msg::Duration::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_sec;
    dcdr >> m_nanosec;
}

/*!
 * @brief This function sets a value in member sec
 * @param _sec New value for member sec
 */
void builtin_interfaces::msg::Duration::sec(
        int32_t _sec)
{
    m_sec = _sec;
}

/*!
 * @brief This function returns the value of member sec
 * @return Value of member sec
 */
int32_t builtin_interfaces::msg::Duration::sec() const
{
    return m_sec;
}

/*!
 * @brief This function returns a reference to member sec
 * @return Reference to member sec
 */
int32_t& builtin_interfaces::msg::Duration::sec()
{
    return m_sec;
}

/*!
 * @brief This function sets a value in member nanosec
 * @param _nanosec New value for member nanosec
 */
void builtin_interfaces::msg::Duration::nanosec(
        uint32_t _nanosec)
{
    m_nanosec = _nanosec;
}

/*!
 * @brief This function returns the value of member nanosec
 * @return Value of member nanosec
 */
uint32_t builtin_interfaces::msg::Duration::nanosec() const
{
    return m_nanosec;
}

/*!
 * @brief This function returns a reference to member nanosec
 * @return Reference to member nanosec
 */
uint32_t& builtin_interfaces::msg::Duration::nanosec()
{
    return m_nanosec;
}


size_t builtin_interfaces::msg::Duration::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;





    return current_align;
}

bool builtin_interfaces::msg::Duration::isKeyDefined()
{
    return false;
}

void builtin_interfaces::msg::Duration::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
      
}


