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
 * @file ReadSplitEvent.cpp
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

#include "ReadSplitEvent.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define rosbag2_interfaces_msg_ReadSplitEvent_max_cdr_typesize 520ULL;
#define rosbag2_interfaces_msg_ReadSplitEvent_max_key_cdr_typesize 0ULL;

rosbag2_interfaces::msg::ReadSplitEvent::ReadSplitEvent()
{
    // string m_closed_file
    m_closed_file ="";
    // string m_opened_file
    m_opened_file ="";

}

rosbag2_interfaces::msg::ReadSplitEvent::~ReadSplitEvent()
{


}

rosbag2_interfaces::msg::ReadSplitEvent::ReadSplitEvent(
        const ReadSplitEvent& x)
{
    m_closed_file = x.m_closed_file;
    m_opened_file = x.m_opened_file;
}

rosbag2_interfaces::msg::ReadSplitEvent::ReadSplitEvent(
        ReadSplitEvent&& x) noexcept 
{
    m_closed_file = std::move(x.m_closed_file);
    m_opened_file = std::move(x.m_opened_file);
}

rosbag2_interfaces::msg::ReadSplitEvent& rosbag2_interfaces::msg::ReadSplitEvent::operator =(
        const ReadSplitEvent& x)
{

    m_closed_file = x.m_closed_file;
    m_opened_file = x.m_opened_file;

    return *this;
}

rosbag2_interfaces::msg::ReadSplitEvent& rosbag2_interfaces::msg::ReadSplitEvent::operator =(
        ReadSplitEvent&& x) noexcept
{

    m_closed_file = std::move(x.m_closed_file);
    m_opened_file = std::move(x.m_opened_file);

    return *this;
}

bool rosbag2_interfaces::msg::ReadSplitEvent::operator ==(
        const ReadSplitEvent& x) const
{

    return (m_closed_file == x.m_closed_file && m_opened_file == x.m_opened_file);
}

bool rosbag2_interfaces::msg::ReadSplitEvent::operator !=(
        const ReadSplitEvent& x) const
{
    return !(*this == x);
}

size_t rosbag2_interfaces::msg::ReadSplitEvent::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return rosbag2_interfaces_msg_ReadSplitEvent_max_cdr_typesize;
}

size_t rosbag2_interfaces::msg::ReadSplitEvent::getCdrSerializedSize(
        const rosbag2_interfaces::msg::ReadSplitEvent& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.closed_file().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.opened_file().size() + 1;


    return current_alignment - initial_alignment;
}

void rosbag2_interfaces::msg::ReadSplitEvent::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_closed_file.c_str();
    scdr << m_opened_file.c_str();

}

void rosbag2_interfaces::msg::ReadSplitEvent::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_closed_file;
    dcdr >> m_opened_file;
}

/*!
 * @brief This function copies the value in member closed_file
 * @param _closed_file New value to be copied in member closed_file
 */
void rosbag2_interfaces::msg::ReadSplitEvent::closed_file(
        const std::string& _closed_file)
{
    m_closed_file = _closed_file;
}

/*!
 * @brief This function moves the value in member closed_file
 * @param _closed_file New value to be moved in member closed_file
 */
void rosbag2_interfaces::msg::ReadSplitEvent::closed_file(
        std::string&& _closed_file)
{
    m_closed_file = std::move(_closed_file);
}

/*!
 * @brief This function returns a constant reference to member closed_file
 * @return Constant reference to member closed_file
 */
const std::string& rosbag2_interfaces::msg::ReadSplitEvent::closed_file() const
{
    return m_closed_file;
}

/*!
 * @brief This function returns a reference to member closed_file
 * @return Reference to member closed_file
 */
std::string& rosbag2_interfaces::msg::ReadSplitEvent::closed_file()
{
    return m_closed_file;
}
/*!
 * @brief This function copies the value in member opened_file
 * @param _opened_file New value to be copied in member opened_file
 */
void rosbag2_interfaces::msg::ReadSplitEvent::opened_file(
        const std::string& _opened_file)
{
    m_opened_file = _opened_file;
}

/*!
 * @brief This function moves the value in member opened_file
 * @param _opened_file New value to be moved in member opened_file
 */
void rosbag2_interfaces::msg::ReadSplitEvent::opened_file(
        std::string&& _opened_file)
{
    m_opened_file = std::move(_opened_file);
}

/*!
 * @brief This function returns a constant reference to member opened_file
 * @return Constant reference to member opened_file
 */
const std::string& rosbag2_interfaces::msg::ReadSplitEvent::opened_file() const
{
    return m_opened_file;
}

/*!
 * @brief This function returns a reference to member opened_file
 * @return Reference to member opened_file
 */
std::string& rosbag2_interfaces::msg::ReadSplitEvent::opened_file()
{
    return m_opened_file;
}


size_t rosbag2_interfaces::msg::ReadSplitEvent::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return rosbag2_interfaces_msg_ReadSplitEvent_max_key_cdr_typesize;
}

bool rosbag2_interfaces::msg::ReadSplitEvent::isKeyDefined()
{
    return false;
}

void rosbag2_interfaces::msg::ReadSplitEvent::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

