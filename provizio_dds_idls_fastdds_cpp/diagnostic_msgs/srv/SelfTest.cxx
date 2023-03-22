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
 * @file SelfTest.cpp
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

#include "SelfTest.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

diagnostic_msgs::srv::SelfTest_Request::SelfTest_Request()
{
    // m_structure_needs_at_least_one_member com.eprosima.idl.parser.typecode.PrimitiveTypeCode@3f191845
    m_structure_needs_at_least_one_member = 0;

}

diagnostic_msgs::srv::SelfTest_Request::~SelfTest_Request()
{
}

diagnostic_msgs::srv::SelfTest_Request::SelfTest_Request(
        const SelfTest_Request& x)
{
    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;
}

diagnostic_msgs::srv::SelfTest_Request::SelfTest_Request(
        SelfTest_Request&& x) noexcept 
{
    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;
}

diagnostic_msgs::srv::SelfTest_Request& diagnostic_msgs::srv::SelfTest_Request::operator =(
        const SelfTest_Request& x)
{

    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;

    return *this;
}

diagnostic_msgs::srv::SelfTest_Request& diagnostic_msgs::srv::SelfTest_Request::operator =(
        SelfTest_Request&& x) noexcept
{

    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;

    return *this;
}

bool diagnostic_msgs::srv::SelfTest_Request::operator ==(
        const SelfTest_Request& x) const
{

    return (m_structure_needs_at_least_one_member == x.m_structure_needs_at_least_one_member);
}

bool diagnostic_msgs::srv::SelfTest_Request::operator !=(
        const SelfTest_Request& x) const
{
    return !(*this == x);
}

size_t diagnostic_msgs::srv::SelfTest_Request::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    return current_alignment - initial_alignment;
}

size_t diagnostic_msgs::srv::SelfTest_Request::getCdrSerializedSize(
        const diagnostic_msgs::srv::SelfTest_Request& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    return current_alignment - initial_alignment;
}

void diagnostic_msgs::srv::SelfTest_Request::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_structure_needs_at_least_one_member;

}

void diagnostic_msgs::srv::SelfTest_Request::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_structure_needs_at_least_one_member;
}

/*!
 * @brief This function sets a value in member structure_needs_at_least_one_member
 * @param _structure_needs_at_least_one_member New value for member structure_needs_at_least_one_member
 */
void diagnostic_msgs::srv::SelfTest_Request::structure_needs_at_least_one_member(
        uint8_t _structure_needs_at_least_one_member)
{
    m_structure_needs_at_least_one_member = _structure_needs_at_least_one_member;
}

/*!
 * @brief This function returns the value of member structure_needs_at_least_one_member
 * @return Value of member structure_needs_at_least_one_member
 */
uint8_t diagnostic_msgs::srv::SelfTest_Request::structure_needs_at_least_one_member() const
{
    return m_structure_needs_at_least_one_member;
}

/*!
 * @brief This function returns a reference to member structure_needs_at_least_one_member
 * @return Reference to member structure_needs_at_least_one_member
 */
uint8_t& diagnostic_msgs::srv::SelfTest_Request::structure_needs_at_least_one_member()
{
    return m_structure_needs_at_least_one_member;
}


size_t diagnostic_msgs::srv::SelfTest_Request::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;



    return current_align;
}

bool diagnostic_msgs::srv::SelfTest_Request::isKeyDefined()
{
    return false;
}

void diagnostic_msgs::srv::SelfTest_Request::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
     
}

diagnostic_msgs::srv::SelfTest_Response::SelfTest_Response()
{
    // m_id com.eprosima.idl.parser.typecode.StringTypeCode@5f049ea1
    m_id ="";
    // m_passed com.eprosima.idl.parser.typecode.PrimitiveTypeCode@72035809
    m_passed = 0;
    // m_status com.eprosima.idl.parser.typecode.SequenceTypeCode@606e4010


}

diagnostic_msgs::srv::SelfTest_Response::~SelfTest_Response()
{



}

diagnostic_msgs::srv::SelfTest_Response::SelfTest_Response(
        const SelfTest_Response& x)
{
    m_id = x.m_id;
    m_passed = x.m_passed;
    m_status = x.m_status;
}

diagnostic_msgs::srv::SelfTest_Response::SelfTest_Response(
        SelfTest_Response&& x) noexcept 
{
    m_id = std::move(x.m_id);
    m_passed = x.m_passed;
    m_status = std::move(x.m_status);
}

diagnostic_msgs::srv::SelfTest_Response& diagnostic_msgs::srv::SelfTest_Response::operator =(
        const SelfTest_Response& x)
{

    m_id = x.m_id;
    m_passed = x.m_passed;
    m_status = x.m_status;

    return *this;
}

diagnostic_msgs::srv::SelfTest_Response& diagnostic_msgs::srv::SelfTest_Response::operator =(
        SelfTest_Response&& x) noexcept
{

    m_id = std::move(x.m_id);
    m_passed = x.m_passed;
    m_status = std::move(x.m_status);

    return *this;
}

bool diagnostic_msgs::srv::SelfTest_Response::operator ==(
        const SelfTest_Response& x) const
{

    return (m_id == x.m_id && m_passed == x.m_passed && m_status == x.m_status);
}

bool diagnostic_msgs::srv::SelfTest_Response::operator !=(
        const SelfTest_Response& x) const
{
    return !(*this == x);
}

size_t diagnostic_msgs::srv::SelfTest_Response::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < 100; ++a)
    {
        current_alignment += diagnostic_msgs::msg::DiagnosticStatus::getMaxCdrSerializedSize(current_alignment);}


    return current_alignment - initial_alignment;
}

size_t diagnostic_msgs::srv::SelfTest_Response::getCdrSerializedSize(
        const diagnostic_msgs::srv::SelfTest_Response& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.id().size() + 1;

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.status().size(); ++a)
    {
        current_alignment += diagnostic_msgs::msg::DiagnosticStatus::getCdrSerializedSize(data.status().at(a), current_alignment);}


    return current_alignment - initial_alignment;
}

void diagnostic_msgs::srv::SelfTest_Response::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_id.c_str();
    scdr << m_passed;
    scdr << m_status;

}

void diagnostic_msgs::srv::SelfTest_Response::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_id;
    dcdr >> m_passed;
    dcdr >> m_status;
}

/*!
 * @brief This function copies the value in member id
 * @param _id New value to be copied in member id
 */
void diagnostic_msgs::srv::SelfTest_Response::id(
        const std::string& _id)
{
    m_id = _id;
}

/*!
 * @brief This function moves the value in member id
 * @param _id New value to be moved in member id
 */
void diagnostic_msgs::srv::SelfTest_Response::id(
        std::string&& _id)
{
    m_id = std::move(_id);
}

/*!
 * @brief This function returns a constant reference to member id
 * @return Constant reference to member id
 */
const std::string& diagnostic_msgs::srv::SelfTest_Response::id() const
{
    return m_id;
}

/*!
 * @brief This function returns a reference to member id
 * @return Reference to member id
 */
std::string& diagnostic_msgs::srv::SelfTest_Response::id()
{
    return m_id;
}
/*!
 * @brief This function sets a value in member passed
 * @param _passed New value for member passed
 */
void diagnostic_msgs::srv::SelfTest_Response::passed(
        uint8_t _passed)
{
    m_passed = _passed;
}

/*!
 * @brief This function returns the value of member passed
 * @return Value of member passed
 */
uint8_t diagnostic_msgs::srv::SelfTest_Response::passed() const
{
    return m_passed;
}

/*!
 * @brief This function returns a reference to member passed
 * @return Reference to member passed
 */
uint8_t& diagnostic_msgs::srv::SelfTest_Response::passed()
{
    return m_passed;
}

/*!
 * @brief This function copies the value in member status
 * @param _status New value to be copied in member status
 */
void diagnostic_msgs::srv::SelfTest_Response::status(
        const std::vector<diagnostic_msgs::msg::DiagnosticStatus>& _status)
{
    m_status = _status;
}

/*!
 * @brief This function moves the value in member status
 * @param _status New value to be moved in member status
 */
void diagnostic_msgs::srv::SelfTest_Response::status(
        std::vector<diagnostic_msgs::msg::DiagnosticStatus>&& _status)
{
    m_status = std::move(_status);
}

/*!
 * @brief This function returns a constant reference to member status
 * @return Constant reference to member status
 */
const std::vector<diagnostic_msgs::msg::DiagnosticStatus>& diagnostic_msgs::srv::SelfTest_Response::status() const
{
    return m_status;
}

/*!
 * @brief This function returns a reference to member status
 * @return Reference to member status
 */
std::vector<diagnostic_msgs::msg::DiagnosticStatus>& diagnostic_msgs::srv::SelfTest_Response::status()
{
    return m_status;
}

size_t diagnostic_msgs::srv::SelfTest_Response::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;






    return current_align;
}

bool diagnostic_msgs::srv::SelfTest_Response::isKeyDefined()
{
    return false;
}

void diagnostic_msgs::srv::SelfTest_Response::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
       
}


