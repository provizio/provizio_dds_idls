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
 * @file Int16MultiArray.cpp
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

#include "Int16MultiArray.h"
#include <fastcdr/Cdr.h>


#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>


std_msgs::msg::Int16MultiArray::Int16MultiArray()
{

}

std_msgs::msg::Int16MultiArray::~Int16MultiArray()
{
}

std_msgs::msg::Int16MultiArray::Int16MultiArray(
        const Int16MultiArray& x)
{
    m_layout = x.m_layout;
    m_data = x.m_data;
}

std_msgs::msg::Int16MultiArray::Int16MultiArray(
        Int16MultiArray&& x) noexcept
{
    m_layout = std::move(x.m_layout);
    m_data = std::move(x.m_data);
}

std_msgs::msg::Int16MultiArray& std_msgs::msg::Int16MultiArray::operator =(
        const Int16MultiArray& x)
{

    m_layout = x.m_layout;
    m_data = x.m_data;

    return *this;
}

std_msgs::msg::Int16MultiArray& std_msgs::msg::Int16MultiArray::operator =(
        Int16MultiArray&& x) noexcept
{

    m_layout = std::move(x.m_layout);
    m_data = std::move(x.m_data);

    return *this;
}

bool std_msgs::msg::Int16MultiArray::operator ==(
        const Int16MultiArray& x) const
{
    return (m_layout == x.m_layout &&
           m_data == x.m_data);
}

bool std_msgs::msg::Int16MultiArray::operator !=(
        const Int16MultiArray& x) const
{
    return !(*this == x);
}

/*!
 * @brief This function copies the value in member layout
 * @param _layout New value to be copied in member layout
 */
void std_msgs::msg::Int16MultiArray::layout(
        const std_msgs::msg::MultiArrayLayout& _layout)
{
    m_layout = _layout;
}

/*!
 * @brief This function moves the value in member layout
 * @param _layout New value to be moved in member layout
 */
void std_msgs::msg::Int16MultiArray::layout(
        std_msgs::msg::MultiArrayLayout&& _layout)
{
    m_layout = std::move(_layout);
}

/*!
 * @brief This function returns a constant reference to member layout
 * @return Constant reference to member layout
 */
const std_msgs::msg::MultiArrayLayout& std_msgs::msg::Int16MultiArray::layout() const
{
    return m_layout;
}

/*!
 * @brief This function returns a reference to member layout
 * @return Reference to member layout
 */
std_msgs::msg::MultiArrayLayout& std_msgs::msg::Int16MultiArray::layout()
{
    return m_layout;
}


/*!
 * @brief This function copies the value in member data
 * @param _data New value to be copied in member data
 */
void std_msgs::msg::Int16MultiArray::data(
        const std::vector<int16_t>& _data)
{
    m_data = _data;
}

/*!
 * @brief This function moves the value in member data
 * @param _data New value to be moved in member data
 */
void std_msgs::msg::Int16MultiArray::data(
        std::vector<int16_t>&& _data)
{
    m_data = std::move(_data);
}

/*!
 * @brief This function returns a constant reference to member data
 * @return Constant reference to member data
 */
const std::vector<int16_t>& std_msgs::msg::Int16MultiArray::data() const
{
    return m_data;
}

/*!
 * @brief This function returns a reference to member data
 * @return Reference to member data
 */
std::vector<int16_t>& std_msgs::msg::Int16MultiArray::data()
{
    return m_data;
}




// Include auxiliary functions like for serializing/deserializing.
#include "Int16MultiArrayCdrAux.ipp"
