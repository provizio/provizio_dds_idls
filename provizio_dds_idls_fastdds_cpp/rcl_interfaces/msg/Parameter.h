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
 * @file Parameter.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_RCL_INTERFACES_MSG_PARAMETER_H_
#define _FAST_DDS_GENERATED_RCL_INTERFACES_MSG_PARAMETER_H_

#include "ParameterValue.h"

#include <fastrtps/utils/fixed_size_string.hpp>

#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(Parameter_SOURCE)
#define Parameter_DllAPI __declspec( dllexport )
#else
#define Parameter_DllAPI __declspec( dllimport )
#endif // Parameter_SOURCE
#else
#define Parameter_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define Parameter_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace rcl_interfaces {
    namespace msg {
        /*!
         * @brief This class represents the structure Parameter defined by the user in the IDL file.
         * @ingroup PARAMETER
         */
        class Parameter
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport Parameter();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~Parameter();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object rcl_interfaces::msg::Parameter that will be copied.
             */
            eProsima_user_DllExport Parameter(
                    const Parameter& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object rcl_interfaces::msg::Parameter that will be copied.
             */
            eProsima_user_DllExport Parameter(
                    Parameter&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object rcl_interfaces::msg::Parameter that will be copied.
             */
            eProsima_user_DllExport Parameter& operator =(
                    const Parameter& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object rcl_interfaces::msg::Parameter that will be copied.
             */
            eProsima_user_DllExport Parameter& operator =(
                    Parameter&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x rcl_interfaces::msg::Parameter object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const Parameter& x) const;

            /*!
             * @brief Comparison operator.
             * @param x rcl_interfaces::msg::Parameter object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const Parameter& x) const;

            /*!
             * @brief This function copies the value in member name
             * @param _name New value to be copied in member name
             */
            eProsima_user_DllExport void name(
                    const std::string& _name);

            /*!
             * @brief This function moves the value in member name
             * @param _name New value to be moved in member name
             */
            eProsima_user_DllExport void name(
                    std::string&& _name);

            /*!
             * @brief This function returns a constant reference to member name
             * @return Constant reference to member name
             */
            eProsima_user_DllExport const std::string& name() const;

            /*!
             * @brief This function returns a reference to member name
             * @return Reference to member name
             */
            eProsima_user_DllExport std::string& name();
            /*!
             * @brief This function copies the value in member value
             * @param _value New value to be copied in member value
             */
            eProsima_user_DllExport void value(
                    const rcl_interfaces::msg::ParameterValue& _value);

            /*!
             * @brief This function moves the value in member value
             * @param _value New value to be moved in member value
             */
            eProsima_user_DllExport void value(
                    rcl_interfaces::msg::ParameterValue&& _value);

            /*!
             * @brief This function returns a constant reference to member value
             * @return Constant reference to member value
             */
            eProsima_user_DllExport const rcl_interfaces::msg::ParameterValue& value() const;

            /*!
             * @brief This function returns a reference to member value
             * @return Reference to member value
             */
            eProsima_user_DllExport rcl_interfaces::msg::ParameterValue& value();

            /*!
             * @brief This function returns the maximum serialized size of an object
             * depending on the buffer alignment.
             * @param current_alignment Buffer alignment.
             * @return Maximum serialized size.
             */
            eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
                    size_t current_alignment = 0);

            /*!
             * @brief This function returns the serialized size of a data depending on the buffer alignment.
             * @param data Data which is calculated its serialized size.
             * @param current_alignment Buffer alignment.
             * @return Serialized size.
             */
            eProsima_user_DllExport static size_t getCdrSerializedSize(
                    const rcl_interfaces::msg::Parameter& data,
                    size_t current_alignment = 0);


            /*!
             * @brief This function serializes an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void serialize(
                    eprosima::fastcdr::Cdr& cdr) const;

            /*!
             * @brief This function deserializes an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void deserialize(
                    eprosima::fastcdr::Cdr& cdr);



            /*!
             * @brief This function returns the maximum serialized size of the Key of an object
             * depending on the buffer alignment.
             * @param current_alignment Buffer alignment.
             * @return Maximum serialized size.
             */
            eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
                    size_t current_alignment = 0);

            /*!
             * @brief This function tells you if the Key has been defined for this type
             */
            eProsima_user_DllExport static bool isKeyDefined();

            /*!
             * @brief This function serializes the key members of an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void serializeKey(
                    eprosima::fastcdr::Cdr& cdr) const;

        private:

            std::string m_name;
            rcl_interfaces::msg::ParameterValue m_value;
        };
    } // namespace msg
} // namespace rcl_interfaces

#endif // _FAST_DDS_GENERATED_RCL_INTERFACES_MSG_PARAMETER_H_