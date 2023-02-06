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
 * @file GetAvailableStates.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_LIFECYCLE_MSGS_SRV_GETAVAILABLESTATES_H_
#define _FAST_DDS_GENERATED_LIFECYCLE_MSGS_SRV_GETAVAILABLESTATES_H_

#include "lifecycle_msgs/msg/State.h"

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
#if defined(GetAvailableStates_SOURCE)
#define GetAvailableStates_DllAPI __declspec( dllexport )
#else
#define GetAvailableStates_DllAPI __declspec( dllimport )
#endif // GetAvailableStates_SOURCE
#else
#define GetAvailableStates_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define GetAvailableStates_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace lifecycle_msgs {
    namespace srv {
        /*!
         * @brief This class represents the structure GetAvailableStates_Request defined by the user in the IDL file.
         * @ingroup GETAVAILABLESTATES
         */
        class GetAvailableStates_Request
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport GetAvailableStates_Request();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~GetAvailableStates_Request();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object lifecycle_msgs::srv::GetAvailableStates_Request that will be copied.
             */
            eProsima_user_DllExport GetAvailableStates_Request(
                    const GetAvailableStates_Request& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object lifecycle_msgs::srv::GetAvailableStates_Request that will be copied.
             */
            eProsima_user_DllExport GetAvailableStates_Request(
                    GetAvailableStates_Request&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object lifecycle_msgs::srv::GetAvailableStates_Request that will be copied.
             */
            eProsima_user_DllExport GetAvailableStates_Request& operator =(
                    const GetAvailableStates_Request& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object lifecycle_msgs::srv::GetAvailableStates_Request that will be copied.
             */
            eProsima_user_DllExport GetAvailableStates_Request& operator =(
                    GetAvailableStates_Request&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x lifecycle_msgs::srv::GetAvailableStates_Request object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const GetAvailableStates_Request& x) const;

            /*!
             * @brief Comparison operator.
             * @param x lifecycle_msgs::srv::GetAvailableStates_Request object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const GetAvailableStates_Request& x) const;

            /*!
             * @brief This function sets a value in member structure_needs_at_least_one_member
             * @param _structure_needs_at_least_one_member New value for member structure_needs_at_least_one_member
             */
            eProsima_user_DllExport void structure_needs_at_least_one_member(
                    uint8_t _structure_needs_at_least_one_member);

            /*!
             * @brief This function returns the value of member structure_needs_at_least_one_member
             * @return Value of member structure_needs_at_least_one_member
             */
            eProsima_user_DllExport uint8_t structure_needs_at_least_one_member() const;

            /*!
             * @brief This function returns a reference to member structure_needs_at_least_one_member
             * @return Reference to member structure_needs_at_least_one_member
             */
            eProsima_user_DllExport uint8_t& structure_needs_at_least_one_member();


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
                    const lifecycle_msgs::srv::GetAvailableStates_Request& data,
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

            uint8_t m_structure_needs_at_least_one_member;
        };
        /*!
         * @brief This class represents the structure GetAvailableStates_Response defined by the user in the IDL file.
         * @ingroup GETAVAILABLESTATES
         */
        class GetAvailableStates_Response
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport GetAvailableStates_Response();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~GetAvailableStates_Response();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object lifecycle_msgs::srv::GetAvailableStates_Response that will be copied.
             */
            eProsima_user_DllExport GetAvailableStates_Response(
                    const GetAvailableStates_Response& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object lifecycle_msgs::srv::GetAvailableStates_Response that will be copied.
             */
            eProsima_user_DllExport GetAvailableStates_Response(
                    GetAvailableStates_Response&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object lifecycle_msgs::srv::GetAvailableStates_Response that will be copied.
             */
            eProsima_user_DllExport GetAvailableStates_Response& operator =(
                    const GetAvailableStates_Response& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object lifecycle_msgs::srv::GetAvailableStates_Response that will be copied.
             */
            eProsima_user_DllExport GetAvailableStates_Response& operator =(
                    GetAvailableStates_Response&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x lifecycle_msgs::srv::GetAvailableStates_Response object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const GetAvailableStates_Response& x) const;

            /*!
             * @brief Comparison operator.
             * @param x lifecycle_msgs::srv::GetAvailableStates_Response object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const GetAvailableStates_Response& x) const;

            /*!
             * @brief This function copies the value in member available_states
             * @param _available_states New value to be copied in member available_states
             */
            eProsima_user_DllExport void available_states(
                    const std::vector<lifecycle_msgs::msg::State>& _available_states);

            /*!
             * @brief This function moves the value in member available_states
             * @param _available_states New value to be moved in member available_states
             */
            eProsima_user_DllExport void available_states(
                    std::vector<lifecycle_msgs::msg::State>&& _available_states);

            /*!
             * @brief This function returns a constant reference to member available_states
             * @return Constant reference to member available_states
             */
            eProsima_user_DllExport const std::vector<lifecycle_msgs::msg::State>& available_states() const;

            /*!
             * @brief This function returns a reference to member available_states
             * @return Reference to member available_states
             */
            eProsima_user_DllExport std::vector<lifecycle_msgs::msg::State>& available_states();

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
                    const lifecycle_msgs::srv::GetAvailableStates_Response& data,
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

            std::vector<lifecycle_msgs::msg::State> m_available_states;
        };
    } // namespace srv
} // namespace lifecycle_msgs

#endif // _FAST_DDS_GENERATED_LIFECYCLE_MSGS_SRV_GETAVAILABLESTATES_H_