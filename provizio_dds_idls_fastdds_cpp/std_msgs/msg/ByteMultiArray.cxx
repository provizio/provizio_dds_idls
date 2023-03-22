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
 * @file ByteMultiArray.cpp
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

#include "ByteMultiArray.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

std_msgs::msg::ByteMultiArray::ByteMultiArray()
{
    // m_layout com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@7b44b63d

    // m_data com.eprosima.idl.parser.typecode.SequenceTypeCode@4a699efa


}

std_msgs::msg::ByteMultiArray::~ByteMultiArray()
{


}

std_msgs::msg::ByteMultiArray::ByteMultiArray(
        const ByteMultiArray& x)
{
    m_layout = x.m_layout;
    m_data = x.m_data;
}

std_msgs::msg::ByteMultiArray::ByteMultiArray(
        ByteMultiArray&& x) noexcept 
{
    m_layout = std::move(x.m_layout);
    m_data = std::move(x.m_data);
}

std_msgs::msg::ByteMultiArray& std_msgs::msg::ByteMultiArray::operator =(
        const ByteMultiArray& x)
{

    m_layout = x.m_layout;
    m_data = x.m_data;

    return *this;
}

std_msgs::msg::ByteMultiArray& std_msgs::msg::ByteMultiArray::operator =(
        ByteMultiArray&& x) noexcept
{

    m_layout = std::move(x.m_layout);
    m_data = std::move(x.m_data);

    return *this;
}

bool std_msgs::msg::ByteMultiArray::operator ==(
        const ByteMultiArray& x) const
{

    return (m_layout == x.m_layout && m_data == x.m_data);
}

bool std_msgs::msg::ByteMultiArray::operator !=(
        const ByteMultiArray& x) const
{
    return !(*this == x);
}

size_t std_msgs::msg::ByteMultiArray::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::MultiArrayLayout::getMaxCdrSerializedSize(current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += (100 * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);




    return current_alignment - initial_alignment;
}

size_t std_msgs::msg::ByteMultiArray::getCdrSerializedSize(
        const std_msgs::msg::ByteMultiArray& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::MultiArrayLayout::getCdrSerializedSize(data.layout(), current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.data().size() > 0)
    {
        current_alignment += (data.data().size() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }




    return current_alignment - initial_alignment;
}

void std_msgs::msg::ByteMultiArray::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_layout;
    scdr << m_data;

}

void std_msgs::msg::ByteMultiArray::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_layout;
    dcdr >> m_data;
}

/*!
 * @brief This function copies the value in member layout
 * @param _layout New value to be copied in member layout
 */
void std_msgs::msg::ByteMultiArray::layout(
        const std_msgs::msg::MultiArrayLayout& _layout)
{
    m_layout = _layout;
}

/*!
 * @brief This function moves the value in member layout
 * @param _layout New value to be moved in member layout
 */
void std_msgs::msg::ByteMultiArray::layout(
        std_msgs::msg::MultiArrayLayout&& _layout)
{
    m_layout = std::move(_layout);
}

/*!
 * @brief This function returns a constant reference to member layout
 * @return Constant reference to member layout
 */
const std_msgs::msg::MultiArrayLayout& std_msgs::msg::ByteMultiArray::layout() const
{
    return m_layout;
}

/*!
 * @brief This function returns a reference to member layout
 * @return Reference to member layout
 */
std_msgs::msg::MultiArrayLayout& std_msgs::msg::ByteMultiArray::layout()
{
    return m_layout;
}
/*!
 * @brief This function copies the value in member data
 * @param _data New value to be copied in member data
 */
void std_msgs::msg::ByteMultiArray::data(
        const std::vector<uint8_t>& _data)
{
    m_data = _data;
}

/*!
 * @brief This function moves the value in member data
 * @param _data New value to be moved in member data
 */
void std_msgs::msg::ByteMultiArray::data(
        std::vector<uint8_t>&& _data)
{
    m_data = std::move(_data);
}

/*!
 * @brief This function returns a constant reference to member data
 * @return Constant reference to member data
 */
const std::vector<uint8_t>& std_msgs::msg::ByteMultiArray::data() const
{
    return m_data;
}

/*!
 * @brief This function returns a reference to member data
 * @return Reference to member data
 */
std::vector<uint8_t>& std_msgs::msg::ByteMultiArray::data()
{
    return m_data;
}

size_t std_msgs::msg::ByteMultiArray::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;





    return current_align;
}

bool std_msgs::msg::ByteMultiArray::isKeyDefined()
{
    return false;
}

void std_msgs::msg::ByteMultiArray::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
      
}


