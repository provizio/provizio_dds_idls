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

#include "SetBool.h"
#include <fastcdr/Cdr.h>


#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>


std_srvs::srv::SetBool_Request::SetBool_Request()
{

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


std_srvs::srv::SetBool_Response::SetBool_Response()
{

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
    return (m_success == x.m_success &&
           m_message == x.m_message);
}

bool std_srvs::srv::SetBool_Response::operator !=(
        const SetBool_Response& x) const
{
    return !(*this == x);
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




// Include auxiliary functions like for serializing/deserializing.
#include "SetBoolCdrAux.ipp"
