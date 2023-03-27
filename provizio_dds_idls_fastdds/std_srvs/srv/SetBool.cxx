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
 * @file SetBool.cpp
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

#include "SetBool.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define std_srvs_srv_SetBool_Response_max_cdr_typesize 264ULL;
#define std_srvs_srv_SetBool_Request_max_cdr_typesize 1ULL;
#define std_srvs_srv_SetBool_Response_max_key_cdr_typesize 0ULL;
#define std_srvs_srv_SetBool_Request_max_key_cdr_typesize 0ULL;

std_srvs::srv::SetBool_Request::SetBool_Request()
{
    // boolean m_data
    m_data = false;

}

std_srvs::srv::SetBool_Request::~SetBool_Request()
{
}

std_srvs::srv::SetBool_Request::SetBool_Request(
        const SetBool_Request& x)
{
    m_data = x.m_data;
}

std_srvs::srv::SetBool_Request::SetBool_Request(
        SetBool_Request&& x) noexcept 
{
    m_data = x.m_data;
}

std_srvs::srv::SetBool_Request& std_srvs::srv::SetBool_Request::operator =(
        const SetBool_Request& x)
{

    m_data = x.m_data;

    return *this;
}

std_srvs::srv::SetBool_Request& std_srvs::srv::SetBool_Request::operator =(
        SetBool_Request&& x) noexcept
{

    m_data = x.m_data;

    return *this;
}

bool std_srvs::srv::SetBool_Request::operator ==(
        const SetBool_Request& x) const
{

    return (m_data == x.m_data);
}

bool std_srvs::srv::SetBool_Request::operator !=(
        const SetBool_Request& x) const
{
    return !(*this == x);
}

size_t std_srvs::srv::SetBool_Request::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return std_srvs_srv_SetBool_Request_max_cdr_typesize;
}

size_t std_srvs::srv::SetBool_Request::getCdrSerializedSize(
        const std_srvs::srv::SetBool_Request& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    return current_alignment - initial_alignment;
}

void std_srvs::srv::SetBool_Request::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_data;

}

void std_srvs::srv::SetBool_Request::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_data;
}

/*!
 * @brief This function sets a value in member data
 * @param _data New value for member data
 */
void std_srvs::srv::SetBool_Request::data(
        bool _data)
{
    m_data = _data;
}

/*!
 * @brief This function returns the value of member data
 * @return Value of member data
 */
bool std_srvs::srv::SetBool_Request::data() const
{
    return m_data;
}

/*!
 * @brief This function returns a reference to member data
 * @return Reference to member data
 */
bool& std_srvs::srv::SetBool_Request::data()
{
    return m_data;
}



size_t std_srvs::srv::SetBool_Request::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return std_srvs_srv_SetBool_Request_max_key_cdr_typesize;
}

bool std_srvs::srv::SetBool_Request::isKeyDefined()
{
    return false;
}

void std_srvs::srv::SetBool_Request::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

std_srvs::srv::SetBool_Response::SetBool_Response()
{
    // boolean m_success
    m_success = false;
    // string m_message
    m_message ="";

}

std_srvs::srv::SetBool_Response::~SetBool_Response()
{


}

std_srvs::srv::SetBool_Response::SetBool_Response(
        const SetBool_Response& x)
{
    m_success = x.m_success;
    m_message = x.m_message;
}

std_srvs::srv::SetBool_Response::SetBool_Response(
        SetBool_Response&& x) noexcept 
{
    m_success = x.m_success;
    m_message = std::move(x.m_message);
}

std_srvs::srv::SetBool_Response& std_srvs::srv::SetBool_Response::operator =(
        const SetBool_Response& x)
{

    m_success = x.m_success;
    m_message = x.m_message;

    return *this;
}

std_srvs::srv::SetBool_Response& std_srvs::srv::SetBool_Response::operator =(
        SetBool_Response&& x) noexcept
{

    m_success = x.m_success;
    m_message = std::move(x.m_message);

    return *this;
}

bool std_srvs::srv::SetBool_Response::operator ==(
        const SetBool_Response& x) const
{

    return (m_success == x.m_success && m_message == x.m_message);
}

bool std_srvs::srv::SetBool_Response::operator !=(
        const SetBool_Response& x) const
{
    return !(*this == x);
}

size_t std_srvs::srv::SetBool_Response::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return std_srvs_srv_SetBool_Response_max_cdr_typesize;
}

size_t std_srvs::srv::SetBool_Response::getCdrSerializedSize(
        const std_srvs::srv::SetBool_Response& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.message().size() + 1;


    return current_alignment - initial_alignment;
}

void std_srvs::srv::SetBool_Response::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_success;
    scdr << m_message.c_str();

}

void std_srvs::srv::SetBool_Response::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_success;
    dcdr >> m_message;
}

/*!
 * @brief This function sets a value in member success
 * @param _success New value for member success
 */
void std_srvs::srv::SetBool_Response::success(
        bool _success)
{
    m_success = _success;
}

/*!
 * @brief This function returns the value of member success
 * @return Value of member success
 */
bool std_srvs::srv::SetBool_Response::success() const
{
    return m_success;
}

/*!
 * @brief This function returns a reference to member success
 * @return Reference to member success
 */
bool& std_srvs::srv::SetBool_Response::success()
{
    return m_success;
}

/*!
 * @brief This function copies the value in member message
 * @param _message New value to be copied in member message
 */
void std_srvs::srv::SetBool_Response::message(
        const std::string& _message)
{
    m_message = _message;
}

/*!
 * @brief This function moves the value in member message
 * @param _message New value to be moved in member message
 */
void std_srvs::srv::SetBool_Response::message(
        std::string&& _message)
{
    m_message = std::move(_message);
}

/*!
 * @brief This function returns a constant reference to member message
 * @return Constant reference to member message
 */
const std::string& std_srvs::srv::SetBool_Response::message() const
{
    return m_message;
}

/*!
 * @brief This function returns a reference to member message
 * @return Reference to member message
 */
std::string& std_srvs::srv::SetBool_Response::message()
{
    return m_message;
}


size_t std_srvs::srv::SetBool_Response::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return std_srvs_srv_SetBool_Response_max_key_cdr_typesize;
}

bool std_srvs::srv::SetBool_Response::isKeyDefined()
{
    return false;
}

void std_srvs::srv::SetBool_Response::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

