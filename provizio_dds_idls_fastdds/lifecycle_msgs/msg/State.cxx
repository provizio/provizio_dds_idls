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
 * @file State.cpp
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

#include "State.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define lifecycle_msgs_msg_State_max_cdr_typesize 264ULL;
#define lifecycle_msgs_msg_State_max_key_cdr_typesize 0ULL;













lifecycle_msgs::msg::State::State()
{
    // uint8 m_id
    m_id = 0;
    // string m_label
    m_label ="";

}

lifecycle_msgs::msg::State::~State()
{


}

lifecycle_msgs::msg::State::State(
        const State& x)
{
    m_id = x.m_id;
    m_label = x.m_label;
}

lifecycle_msgs::msg::State::State(
        State&& x) noexcept 
{
    m_id = x.m_id;
    m_label = std::move(x.m_label);
}

lifecycle_msgs::msg::State& lifecycle_msgs::msg::State::operator =(
        const State& x)
{

    m_id = x.m_id;
    m_label = x.m_label;

    return *this;
}

lifecycle_msgs::msg::State& lifecycle_msgs::msg::State::operator =(
        State&& x) noexcept
{

    m_id = x.m_id;
    m_label = std::move(x.m_label);

    return *this;
}

bool lifecycle_msgs::msg::State::operator ==(
        const State& x) const
{

    return (m_id == x.m_id && m_label == x.m_label);
}

bool lifecycle_msgs::msg::State::operator !=(
        const State& x) const
{
    return !(*this == x);
}

size_t lifecycle_msgs::msg::State::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return lifecycle_msgs_msg_State_max_cdr_typesize;
}

size_t lifecycle_msgs::msg::State::getCdrSerializedSize(
        const lifecycle_msgs::msg::State& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.label().size() + 1;


    return current_alignment - initial_alignment;
}

void lifecycle_msgs::msg::State::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_id;
    scdr << m_label.c_str();

}

void lifecycle_msgs::msg::State::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_id;
    dcdr >> m_label;
}

/*!
 * @brief This function sets a value in member id
 * @param _id New value for member id
 */
void lifecycle_msgs::msg::State::id(
        uint8_t _id)
{
    m_id = _id;
}

/*!
 * @brief This function returns the value of member id
 * @return Value of member id
 */
uint8_t lifecycle_msgs::msg::State::id() const
{
    return m_id;
}

/*!
 * @brief This function returns a reference to member id
 * @return Reference to member id
 */
uint8_t& lifecycle_msgs::msg::State::id()
{
    return m_id;
}

/*!
 * @brief This function copies the value in member label
 * @param _label New value to be copied in member label
 */
void lifecycle_msgs::msg::State::label(
        const std::string& _label)
{
    m_label = _label;
}

/*!
 * @brief This function moves the value in member label
 * @param _label New value to be moved in member label
 */
void lifecycle_msgs::msg::State::label(
        std::string&& _label)
{
    m_label = std::move(_label);
}

/*!
 * @brief This function returns a constant reference to member label
 * @return Constant reference to member label
 */
const std::string& lifecycle_msgs::msg::State::label() const
{
    return m_label;
}

/*!
 * @brief This function returns a reference to member label
 * @return Reference to member label
 */
std::string& lifecycle_msgs::msg::State::label()
{
    return m_label;
}


size_t lifecycle_msgs::msg::State::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return lifecycle_msgs_msg_State_max_key_cdr_typesize;
}

bool lifecycle_msgs::msg::State::isKeyDefined()
{
    return false;
}

void lifecycle_msgs::msg::State::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

