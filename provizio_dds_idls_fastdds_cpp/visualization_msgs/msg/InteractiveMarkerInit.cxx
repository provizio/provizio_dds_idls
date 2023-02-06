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
 * @file InteractiveMarkerInit.cpp
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

#include "InteractiveMarkerInit.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

visualization_msgs::msg::InteractiveMarkerInit::InteractiveMarkerInit()
{
    // m_server_id com.eprosima.idl.parser.typecode.StringTypeCode@7e1f584d
    m_server_id ="";
    // m_seq_num com.eprosima.idl.parser.typecode.PrimitiveTypeCode@7dff6d05
    m_seq_num = 0;
    // m_markers com.eprosima.idl.parser.typecode.SequenceTypeCode@45d64d27


}

visualization_msgs::msg::InteractiveMarkerInit::~InteractiveMarkerInit()
{



}

visualization_msgs::msg::InteractiveMarkerInit::InteractiveMarkerInit(
        const InteractiveMarkerInit& x)
{
    m_server_id = x.m_server_id;
    m_seq_num = x.m_seq_num;
    m_markers = x.m_markers;
}

visualization_msgs::msg::InteractiveMarkerInit::InteractiveMarkerInit(
        InteractiveMarkerInit&& x) noexcept 
{
    m_server_id = std::move(x.m_server_id);
    m_seq_num = x.m_seq_num;
    m_markers = std::move(x.m_markers);
}

visualization_msgs::msg::InteractiveMarkerInit& visualization_msgs::msg::InteractiveMarkerInit::operator =(
        const InteractiveMarkerInit& x)
{

    m_server_id = x.m_server_id;
    m_seq_num = x.m_seq_num;
    m_markers = x.m_markers;

    return *this;
}

visualization_msgs::msg::InteractiveMarkerInit& visualization_msgs::msg::InteractiveMarkerInit::operator =(
        InteractiveMarkerInit&& x) noexcept
{

    m_server_id = std::move(x.m_server_id);
    m_seq_num = x.m_seq_num;
    m_markers = std::move(x.m_markers);

    return *this;
}

bool visualization_msgs::msg::InteractiveMarkerInit::operator ==(
        const InteractiveMarkerInit& x) const
{

    return (m_server_id == x.m_server_id && m_seq_num == x.m_seq_num && m_markers == x.m_markers);
}

bool visualization_msgs::msg::InteractiveMarkerInit::operator !=(
        const InteractiveMarkerInit& x) const
{
    return !(*this == x);
}

size_t visualization_msgs::msg::InteractiveMarkerInit::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < 100; ++a)
    {
        current_alignment += visualization_msgs::msg::InteractiveMarker::getMaxCdrSerializedSize(current_alignment);}


    return current_alignment - initial_alignment;
}

size_t visualization_msgs::msg::InteractiveMarkerInit::getCdrSerializedSize(
        const visualization_msgs::msg::InteractiveMarkerInit& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.server_id().size() + 1;

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.markers().size(); ++a)
    {
        current_alignment += visualization_msgs::msg::InteractiveMarker::getCdrSerializedSize(data.markers().at(a), current_alignment);}


    return current_alignment - initial_alignment;
}

void visualization_msgs::msg::InteractiveMarkerInit::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_server_id.c_str();
    scdr << m_seq_num;
    scdr << m_markers;

}

void visualization_msgs::msg::InteractiveMarkerInit::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_server_id;
    dcdr >> m_seq_num;
    dcdr >> m_markers;
}

/*!
 * @brief This function copies the value in member server_id
 * @param _server_id New value to be copied in member server_id
 */
void visualization_msgs::msg::InteractiveMarkerInit::server_id(
        const std::string& _server_id)
{
    m_server_id = _server_id;
}

/*!
 * @brief This function moves the value in member server_id
 * @param _server_id New value to be moved in member server_id
 */
void visualization_msgs::msg::InteractiveMarkerInit::server_id(
        std::string&& _server_id)
{
    m_server_id = std::move(_server_id);
}

/*!
 * @brief This function returns a constant reference to member server_id
 * @return Constant reference to member server_id
 */
const std::string& visualization_msgs::msg::InteractiveMarkerInit::server_id() const
{
    return m_server_id;
}

/*!
 * @brief This function returns a reference to member server_id
 * @return Reference to member server_id
 */
std::string& visualization_msgs::msg::InteractiveMarkerInit::server_id()
{
    return m_server_id;
}
/*!
 * @brief This function sets a value in member seq_num
 * @param _seq_num New value for member seq_num
 */
void visualization_msgs::msg::InteractiveMarkerInit::seq_num(
        uint64_t _seq_num)
{
    m_seq_num = _seq_num;
}

/*!
 * @brief This function returns the value of member seq_num
 * @return Value of member seq_num
 */
uint64_t visualization_msgs::msg::InteractiveMarkerInit::seq_num() const
{
    return m_seq_num;
}

/*!
 * @brief This function returns a reference to member seq_num
 * @return Reference to member seq_num
 */
uint64_t& visualization_msgs::msg::InteractiveMarkerInit::seq_num()
{
    return m_seq_num;
}

/*!
 * @brief This function copies the value in member markers
 * @param _markers New value to be copied in member markers
 */
void visualization_msgs::msg::InteractiveMarkerInit::markers(
        const std::vector<visualization_msgs::msg::InteractiveMarker>& _markers)
{
    m_markers = _markers;
}

/*!
 * @brief This function moves the value in member markers
 * @param _markers New value to be moved in member markers
 */
void visualization_msgs::msg::InteractiveMarkerInit::markers(
        std::vector<visualization_msgs::msg::InteractiveMarker>&& _markers)
{
    m_markers = std::move(_markers);
}

/*!
 * @brief This function returns a constant reference to member markers
 * @return Constant reference to member markers
 */
const std::vector<visualization_msgs::msg::InteractiveMarker>& visualization_msgs::msg::InteractiveMarkerInit::markers() const
{
    return m_markers;
}

/*!
 * @brief This function returns a reference to member markers
 * @return Reference to member markers
 */
std::vector<visualization_msgs::msg::InteractiveMarker>& visualization_msgs::msg::InteractiveMarkerInit::markers()
{
    return m_markers;
}

size_t visualization_msgs::msg::InteractiveMarkerInit::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;






    return current_align;
}

bool visualization_msgs::msg::InteractiveMarkerInit::isKeyDefined()
{
    return false;
}

void visualization_msgs::msg::InteractiveMarkerInit::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
       
}


