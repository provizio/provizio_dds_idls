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
 * @file Int8.cpp
 * This source file contains the implementation of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "Int8.h"
#include <fastcdr/Cdr.h>


#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>


std_msgs::msg::Int8::Int8()
{

}

std_msgs::msg::Int8::~Int8()
{
}

std_msgs::msg::Int8::Int8(
        const Int8& x)
{
    m_data = x.m_data;
}

std_msgs::msg::Int8::Int8(
        Int8&& x) noexcept
{
    m_data = x.m_data;
}

std_msgs::msg::Int8& std_msgs::msg::Int8::operator =(
        const Int8& x)
{

    m_data = x.m_data;

    return *this;
}

std_msgs::msg::Int8& std_msgs::msg::Int8::operator =(
        Int8&& x) noexcept
{

    m_data = x.m_data;

    return *this;
}

bool std_msgs::msg::Int8::operator ==(
        const Int8& x) const
{
    return (m_data == x.m_data);
}

bool std_msgs::msg::Int8::operator !=(
        const Int8& x) const
{
    return !(*this == x);
}

/*!
 * @brief This function sets a value in member data
 * @param _data New value for member data
 */
void std_msgs::msg::Int8::data(
        int8_t _data)
{
    m_data = _data;
}

/*!
 * @brief This function returns the value of member data
 * @return Value of member data
 */
int8_t std_msgs::msg::Int8::data() const
{
    return m_data;
}

/*!
 * @brief This function returns a reference to member data
 * @return Reference to member data
 */
int8_t& std_msgs::msg::Int8::data()
{
    return m_data;
}




// Include auxiliary functions like for serializing/deserializing.
#include "Int8CdrAux.ipp"
