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
 * @file TransformStamped.cpp
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

#include "TransformStamped.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

geometry_msgs::msg::TransformStamped::TransformStamped()
{
    // m_header com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@667a467f

    // m_child_frame_id com.eprosima.idl.parser.typecode.StringTypeCode@324e8baa
    m_child_frame_id ="";
    // m_transform com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@1488a861


}

geometry_msgs::msg::TransformStamped::~TransformStamped()
{



}

geometry_msgs::msg::TransformStamped::TransformStamped(
        const TransformStamped& x)
{
    m_header = x.m_header;
    m_child_frame_id = x.m_child_frame_id;
    m_transform = x.m_transform;
}

geometry_msgs::msg::TransformStamped::TransformStamped(
        TransformStamped&& x) noexcept 
{
    m_header = std::move(x.m_header);
    m_child_frame_id = std::move(x.m_child_frame_id);
    m_transform = std::move(x.m_transform);
}

geometry_msgs::msg::TransformStamped& geometry_msgs::msg::TransformStamped::operator =(
        const TransformStamped& x)
{

    m_header = x.m_header;
    m_child_frame_id = x.m_child_frame_id;
    m_transform = x.m_transform;

    return *this;
}

geometry_msgs::msg::TransformStamped& geometry_msgs::msg::TransformStamped::operator =(
        TransformStamped&& x) noexcept
{

    m_header = std::move(x.m_header);
    m_child_frame_id = std::move(x.m_child_frame_id);
    m_transform = std::move(x.m_transform);

    return *this;
}

bool geometry_msgs::msg::TransformStamped::operator ==(
        const TransformStamped& x) const
{

    return (m_header == x.m_header && m_child_frame_id == x.m_child_frame_id && m_transform == x.m_transform);
}

bool geometry_msgs::msg::TransformStamped::operator !=(
        const TransformStamped& x) const
{
    return !(*this == x);
}

size_t geometry_msgs::msg::TransformStamped::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getMaxCdrSerializedSize(current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += geometry_msgs::msg::Transform::getMaxCdrSerializedSize(current_alignment);

    return current_alignment - initial_alignment;
}

size_t geometry_msgs::msg::TransformStamped::getCdrSerializedSize(
        const geometry_msgs::msg::TransformStamped& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getCdrSerializedSize(data.header(), current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.child_frame_id().size() + 1;

    current_alignment += geometry_msgs::msg::Transform::getCdrSerializedSize(data.transform(), current_alignment);

    return current_alignment - initial_alignment;
}

void geometry_msgs::msg::TransformStamped::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_header;
    scdr << m_child_frame_id.c_str();
    scdr << m_transform;

}

void geometry_msgs::msg::TransformStamped::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_header;
    dcdr >> m_child_frame_id;
    dcdr >> m_transform;
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void geometry_msgs::msg::TransformStamped::header(
        const std_msgs::msg::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void geometry_msgs::msg::TransformStamped::header(
        std_msgs::msg::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const std_msgs::msg::Header& geometry_msgs::msg::TransformStamped::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
std_msgs::msg::Header& geometry_msgs::msg::TransformStamped::header()
{
    return m_header;
}
/*!
 * @brief This function copies the value in member child_frame_id
 * @param _child_frame_id New value to be copied in member child_frame_id
 */
void geometry_msgs::msg::TransformStamped::child_frame_id(
        const std::string& _child_frame_id)
{
    m_child_frame_id = _child_frame_id;
}

/*!
 * @brief This function moves the value in member child_frame_id
 * @param _child_frame_id New value to be moved in member child_frame_id
 */
void geometry_msgs::msg::TransformStamped::child_frame_id(
        std::string&& _child_frame_id)
{
    m_child_frame_id = std::move(_child_frame_id);
}

/*!
 * @brief This function returns a constant reference to member child_frame_id
 * @return Constant reference to member child_frame_id
 */
const std::string& geometry_msgs::msg::TransformStamped::child_frame_id() const
{
    return m_child_frame_id;
}

/*!
 * @brief This function returns a reference to member child_frame_id
 * @return Reference to member child_frame_id
 */
std::string& geometry_msgs::msg::TransformStamped::child_frame_id()
{
    return m_child_frame_id;
}
/*!
 * @brief This function copies the value in member transform
 * @param _transform New value to be copied in member transform
 */
void geometry_msgs::msg::TransformStamped::transform(
        const geometry_msgs::msg::Transform& _transform)
{
    m_transform = _transform;
}

/*!
 * @brief This function moves the value in member transform
 * @param _transform New value to be moved in member transform
 */
void geometry_msgs::msg::TransformStamped::transform(
        geometry_msgs::msg::Transform&& _transform)
{
    m_transform = std::move(_transform);
}

/*!
 * @brief This function returns a constant reference to member transform
 * @return Constant reference to member transform
 */
const geometry_msgs::msg::Transform& geometry_msgs::msg::TransformStamped::transform() const
{
    return m_transform;
}

/*!
 * @brief This function returns a reference to member transform
 * @return Reference to member transform
 */
geometry_msgs::msg::Transform& geometry_msgs::msg::TransformStamped::transform()
{
    return m_transform;
}

size_t geometry_msgs::msg::TransformStamped::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;






    return current_align;
}

bool geometry_msgs::msg::TransformStamped::isKeyDefined()
{
    return false;
}

void geometry_msgs::msg::TransformStamped::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
       
}


