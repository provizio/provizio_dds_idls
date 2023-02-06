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
 * @file LaserEcho.cpp
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

#include "LaserEcho.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

sensor_msgs::msg::LaserEcho::LaserEcho()
{
    // m_echoes com.eprosima.idl.parser.typecode.SequenceTypeCode@5e385b6f


}

sensor_msgs::msg::LaserEcho::~LaserEcho()
{
}

sensor_msgs::msg::LaserEcho::LaserEcho(
        const LaserEcho& x)
{
    m_echoes = x.m_echoes;
}

sensor_msgs::msg::LaserEcho::LaserEcho(
        LaserEcho&& x) noexcept 
{
    m_echoes = std::move(x.m_echoes);
}

sensor_msgs::msg::LaserEcho& sensor_msgs::msg::LaserEcho::operator =(
        const LaserEcho& x)
{

    m_echoes = x.m_echoes;

    return *this;
}

sensor_msgs::msg::LaserEcho& sensor_msgs::msg::LaserEcho::operator =(
        LaserEcho&& x) noexcept
{

    m_echoes = std::move(x.m_echoes);

    return *this;
}

bool sensor_msgs::msg::LaserEcho::operator ==(
        const LaserEcho& x) const
{

    return (m_echoes == x.m_echoes);
}

bool sensor_msgs::msg::LaserEcho::operator !=(
        const LaserEcho& x) const
{
    return !(*this == x);
}

size_t sensor_msgs::msg::LaserEcho::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += (100 * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

size_t sensor_msgs::msg::LaserEcho::getCdrSerializedSize(
        const sensor_msgs::msg::LaserEcho& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.echoes().size() > 0)
    {
        current_alignment += (data.echoes().size() * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }



    return current_alignment - initial_alignment;
}

void sensor_msgs::msg::LaserEcho::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_echoes;
}

void sensor_msgs::msg::LaserEcho::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_echoes;}

/*!
 * @brief This function copies the value in member echoes
 * @param _echoes New value to be copied in member echoes
 */
void sensor_msgs::msg::LaserEcho::echoes(
        const std::vector<float>& _echoes)
{
    m_echoes = _echoes;
}

/*!
 * @brief This function moves the value in member echoes
 * @param _echoes New value to be moved in member echoes
 */
void sensor_msgs::msg::LaserEcho::echoes(
        std::vector<float>&& _echoes)
{
    m_echoes = std::move(_echoes);
}

/*!
 * @brief This function returns a constant reference to member echoes
 * @return Constant reference to member echoes
 */
const std::vector<float>& sensor_msgs::msg::LaserEcho::echoes() const
{
    return m_echoes;
}

/*!
 * @brief This function returns a reference to member echoes
 * @return Reference to member echoes
 */
std::vector<float>& sensor_msgs::msg::LaserEcho::echoes()
{
    return m_echoes;
}

size_t sensor_msgs::msg::LaserEcho::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;



    return current_align;
}

bool sensor_msgs::msg::LaserEcho::isKeyDefined()
{
    return false;
}

void sensor_msgs::msg::LaserEcho::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
     
}


