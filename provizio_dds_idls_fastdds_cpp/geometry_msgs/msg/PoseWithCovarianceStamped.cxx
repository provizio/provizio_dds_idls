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
 * @file PoseWithCovarianceStamped.cpp
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

#include "PoseWithCovarianceStamped.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

geometry_msgs::msg::PoseWithCovarianceStamped::PoseWithCovarianceStamped()
{
    // m_header com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@74c9e11

    // m_pose com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@9fe720a


}

geometry_msgs::msg::PoseWithCovarianceStamped::~PoseWithCovarianceStamped()
{


}

geometry_msgs::msg::PoseWithCovarianceStamped::PoseWithCovarianceStamped(
        const PoseWithCovarianceStamped& x)
{
    m_header = x.m_header;
    m_pose = x.m_pose;
}

geometry_msgs::msg::PoseWithCovarianceStamped::PoseWithCovarianceStamped(
        PoseWithCovarianceStamped&& x) noexcept 
{
    m_header = std::move(x.m_header);
    m_pose = std::move(x.m_pose);
}

geometry_msgs::msg::PoseWithCovarianceStamped& geometry_msgs::msg::PoseWithCovarianceStamped::operator =(
        const PoseWithCovarianceStamped& x)
{

    m_header = x.m_header;
    m_pose = x.m_pose;

    return *this;
}

geometry_msgs::msg::PoseWithCovarianceStamped& geometry_msgs::msg::PoseWithCovarianceStamped::operator =(
        PoseWithCovarianceStamped&& x) noexcept
{

    m_header = std::move(x.m_header);
    m_pose = std::move(x.m_pose);

    return *this;
}

bool geometry_msgs::msg::PoseWithCovarianceStamped::operator ==(
        const PoseWithCovarianceStamped& x) const
{

    return (m_header == x.m_header && m_pose == x.m_pose);
}

bool geometry_msgs::msg::PoseWithCovarianceStamped::operator !=(
        const PoseWithCovarianceStamped& x) const
{
    return !(*this == x);
}

size_t geometry_msgs::msg::PoseWithCovarianceStamped::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getMaxCdrSerializedSize(current_alignment);
    current_alignment += geometry_msgs::msg::PoseWithCovariance::getMaxCdrSerializedSize(current_alignment);

    return current_alignment - initial_alignment;
}

size_t geometry_msgs::msg::PoseWithCovarianceStamped::getCdrSerializedSize(
        const geometry_msgs::msg::PoseWithCovarianceStamped& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getCdrSerializedSize(data.header(), current_alignment);
    current_alignment += geometry_msgs::msg::PoseWithCovariance::getCdrSerializedSize(data.pose(), current_alignment);

    return current_alignment - initial_alignment;
}

void geometry_msgs::msg::PoseWithCovarianceStamped::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_header;
    scdr << m_pose;

}

void geometry_msgs::msg::PoseWithCovarianceStamped::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_header;
    dcdr >> m_pose;
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void geometry_msgs::msg::PoseWithCovarianceStamped::header(
        const std_msgs::msg::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void geometry_msgs::msg::PoseWithCovarianceStamped::header(
        std_msgs::msg::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const std_msgs::msg::Header& geometry_msgs::msg::PoseWithCovarianceStamped::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
std_msgs::msg::Header& geometry_msgs::msg::PoseWithCovarianceStamped::header()
{
    return m_header;
}
/*!
 * @brief This function copies the value in member pose
 * @param _pose New value to be copied in member pose
 */
void geometry_msgs::msg::PoseWithCovarianceStamped::pose(
        const geometry_msgs::msg::PoseWithCovariance& _pose)
{
    m_pose = _pose;
}

/*!
 * @brief This function moves the value in member pose
 * @param _pose New value to be moved in member pose
 */
void geometry_msgs::msg::PoseWithCovarianceStamped::pose(
        geometry_msgs::msg::PoseWithCovariance&& _pose)
{
    m_pose = std::move(_pose);
}

/*!
 * @brief This function returns a constant reference to member pose
 * @return Constant reference to member pose
 */
const geometry_msgs::msg::PoseWithCovariance& geometry_msgs::msg::PoseWithCovarianceStamped::pose() const
{
    return m_pose;
}

/*!
 * @brief This function returns a reference to member pose
 * @return Reference to member pose
 */
geometry_msgs::msg::PoseWithCovariance& geometry_msgs::msg::PoseWithCovarianceStamped::pose()
{
    return m_pose;
}

size_t geometry_msgs::msg::PoseWithCovarianceStamped::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;





    return current_align;
}

bool geometry_msgs::msg::PoseWithCovarianceStamped::isKeyDefined()
{
    return false;
}

void geometry_msgs::msg::PoseWithCovarianceStamped::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
      
}


