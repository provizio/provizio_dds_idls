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
 * @file TransitionDescription.cpp
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

#include "TransitionDescription.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

lifecycle_msgs::msg::TransitionDescription::TransitionDescription()
{
    // m_transition com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@3520963d

    // m_start_state com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@388d14e

    // m_goal_state com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@388d14e


}

lifecycle_msgs::msg::TransitionDescription::~TransitionDescription()
{



}

lifecycle_msgs::msg::TransitionDescription::TransitionDescription(
        const TransitionDescription& x)
{
    m_transition = x.m_transition;
    m_start_state = x.m_start_state;
    m_goal_state = x.m_goal_state;
}

lifecycle_msgs::msg::TransitionDescription::TransitionDescription(
        TransitionDescription&& x) noexcept 
{
    m_transition = std::move(x.m_transition);
    m_start_state = std::move(x.m_start_state);
    m_goal_state = std::move(x.m_goal_state);
}

lifecycle_msgs::msg::TransitionDescription& lifecycle_msgs::msg::TransitionDescription::operator =(
        const TransitionDescription& x)
{

    m_transition = x.m_transition;
    m_start_state = x.m_start_state;
    m_goal_state = x.m_goal_state;

    return *this;
}

lifecycle_msgs::msg::TransitionDescription& lifecycle_msgs::msg::TransitionDescription::operator =(
        TransitionDescription&& x) noexcept
{

    m_transition = std::move(x.m_transition);
    m_start_state = std::move(x.m_start_state);
    m_goal_state = std::move(x.m_goal_state);

    return *this;
}

bool lifecycle_msgs::msg::TransitionDescription::operator ==(
        const TransitionDescription& x) const
{

    return (m_transition == x.m_transition && m_start_state == x.m_start_state && m_goal_state == x.m_goal_state);
}

bool lifecycle_msgs::msg::TransitionDescription::operator !=(
        const TransitionDescription& x) const
{
    return !(*this == x);
}

size_t lifecycle_msgs::msg::TransitionDescription::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += lifecycle_msgs::msg::Transition::getMaxCdrSerializedSize(current_alignment);
    current_alignment += lifecycle_msgs::msg::State::getMaxCdrSerializedSize(current_alignment);
    current_alignment += lifecycle_msgs::msg::State::getMaxCdrSerializedSize(current_alignment);

    return current_alignment - initial_alignment;
}

size_t lifecycle_msgs::msg::TransitionDescription::getCdrSerializedSize(
        const lifecycle_msgs::msg::TransitionDescription& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += lifecycle_msgs::msg::Transition::getCdrSerializedSize(data.transition(), current_alignment);
    current_alignment += lifecycle_msgs::msg::State::getCdrSerializedSize(data.start_state(), current_alignment);
    current_alignment += lifecycle_msgs::msg::State::getCdrSerializedSize(data.goal_state(), current_alignment);

    return current_alignment - initial_alignment;
}

void lifecycle_msgs::msg::TransitionDescription::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_transition;
    scdr << m_start_state;
    scdr << m_goal_state;

}

void lifecycle_msgs::msg::TransitionDescription::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_transition;
    dcdr >> m_start_state;
    dcdr >> m_goal_state;
}

/*!
 * @brief This function copies the value in member transition
 * @param _transition New value to be copied in member transition
 */
void lifecycle_msgs::msg::TransitionDescription::transition(
        const lifecycle_msgs::msg::Transition& _transition)
{
    m_transition = _transition;
}

/*!
 * @brief This function moves the value in member transition
 * @param _transition New value to be moved in member transition
 */
void lifecycle_msgs::msg::TransitionDescription::transition(
        lifecycle_msgs::msg::Transition&& _transition)
{
    m_transition = std::move(_transition);
}

/*!
 * @brief This function returns a constant reference to member transition
 * @return Constant reference to member transition
 */
const lifecycle_msgs::msg::Transition& lifecycle_msgs::msg::TransitionDescription::transition() const
{
    return m_transition;
}

/*!
 * @brief This function returns a reference to member transition
 * @return Reference to member transition
 */
lifecycle_msgs::msg::Transition& lifecycle_msgs::msg::TransitionDescription::transition()
{
    return m_transition;
}
/*!
 * @brief This function copies the value in member start_state
 * @param _start_state New value to be copied in member start_state
 */
void lifecycle_msgs::msg::TransitionDescription::start_state(
        const lifecycle_msgs::msg::State& _start_state)
{
    m_start_state = _start_state;
}

/*!
 * @brief This function moves the value in member start_state
 * @param _start_state New value to be moved in member start_state
 */
void lifecycle_msgs::msg::TransitionDescription::start_state(
        lifecycle_msgs::msg::State&& _start_state)
{
    m_start_state = std::move(_start_state);
}

/*!
 * @brief This function returns a constant reference to member start_state
 * @return Constant reference to member start_state
 */
const lifecycle_msgs::msg::State& lifecycle_msgs::msg::TransitionDescription::start_state() const
{
    return m_start_state;
}

/*!
 * @brief This function returns a reference to member start_state
 * @return Reference to member start_state
 */
lifecycle_msgs::msg::State& lifecycle_msgs::msg::TransitionDescription::start_state()
{
    return m_start_state;
}
/*!
 * @brief This function copies the value in member goal_state
 * @param _goal_state New value to be copied in member goal_state
 */
void lifecycle_msgs::msg::TransitionDescription::goal_state(
        const lifecycle_msgs::msg::State& _goal_state)
{
    m_goal_state = _goal_state;
}

/*!
 * @brief This function moves the value in member goal_state
 * @param _goal_state New value to be moved in member goal_state
 */
void lifecycle_msgs::msg::TransitionDescription::goal_state(
        lifecycle_msgs::msg::State&& _goal_state)
{
    m_goal_state = std::move(_goal_state);
}

/*!
 * @brief This function returns a constant reference to member goal_state
 * @return Constant reference to member goal_state
 */
const lifecycle_msgs::msg::State& lifecycle_msgs::msg::TransitionDescription::goal_state() const
{
    return m_goal_state;
}

/*!
 * @brief This function returns a reference to member goal_state
 * @return Reference to member goal_state
 */
lifecycle_msgs::msg::State& lifecycle_msgs::msg::TransitionDescription::goal_state()
{
    return m_goal_state;
}

size_t lifecycle_msgs::msg::TransitionDescription::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;






    return current_align;
}

bool lifecycle_msgs::msg::TransitionDescription::isKeyDefined()
{
    return false;
}

void lifecycle_msgs::msg::TransitionDescription::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
       
}


