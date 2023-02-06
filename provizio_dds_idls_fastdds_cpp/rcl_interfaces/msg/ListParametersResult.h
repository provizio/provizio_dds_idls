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
 * @file ListParametersResult.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_RCL_INTERFACES_MSG_LISTPARAMETERSRESULT_H_
#define _FAST_DDS_GENERATED_RCL_INTERFACES_MSG_LISTPARAMETERSRESULT_H_


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
#if defined(ListParametersResult_SOURCE)
#define ListParametersResult_DllAPI __declspec( dllexport )
#else
#define ListParametersResult_DllAPI __declspec( dllimport )
#endif // ListParametersResult_SOURCE
#else
#define ListParametersResult_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define ListParametersResult_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace rcl_interfaces {
    namespace msg {
        /*!
         * @brief This class represents the structure ListParametersResult defined by the user in the IDL file.
         * @ingroup LISTPARAMETERSRESULT
         */
        class ListParametersResult
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport ListParametersResult();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~ListParametersResult();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object rcl_interfaces::msg::ListParametersResult that will be copied.
             */
            eProsima_user_DllExport ListParametersResult(
                    const ListParametersResult& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object rcl_interfaces::msg::ListParametersResult that will be copied.
             */
            eProsima_user_DllExport ListParametersResult(
                    ListParametersResult&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object rcl_interfaces::msg::ListParametersResult that will be copied.
             */
            eProsima_user_DllExport ListParametersResult& operator =(
                    const ListParametersResult& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object rcl_interfaces::msg::ListParametersResult that will be copied.
             */
            eProsima_user_DllExport ListParametersResult& operator =(
                    ListParametersResult&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x rcl_interfaces::msg::ListParametersResult object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const ListParametersResult& x) const;

            /*!
             * @brief Comparison operator.
             * @param x rcl_interfaces::msg::ListParametersResult object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const ListParametersResult& x) const;

            /*!
             * @brief This function copies the value in member names
             * @param _names New value to be copied in member names
             */
            eProsima_user_DllExport void names(
                    const std::vector<std::string>& _names);

            /*!
             * @brief This function moves the value in member names
             * @param _names New value to be moved in member names
             */
            eProsima_user_DllExport void names(
                    std::vector<std::string>&& _names);

            /*!
             * @brief This function returns a constant reference to member names
             * @return Constant reference to member names
             */
            eProsima_user_DllExport const std::vector<std::string>& names() const;

            /*!
             * @brief This function returns a reference to member names
             * @return Reference to member names
             */
            eProsima_user_DllExport std::vector<std::string>& names();
            /*!
             * @brief This function copies the value in member prefixes
             * @param _prefixes New value to be copied in member prefixes
             */
            eProsima_user_DllExport void prefixes(
                    const std::vector<std::string>& _prefixes);

            /*!
             * @brief This function moves the value in member prefixes
             * @param _prefixes New value to be moved in member prefixes
             */
            eProsima_user_DllExport void prefixes(
                    std::vector<std::string>&& _prefixes);

            /*!
             * @brief This function returns a constant reference to member prefixes
             * @return Constant reference to member prefixes
             */
            eProsima_user_DllExport const std::vector<std::string>& prefixes() const;

            /*!
             * @brief This function returns a reference to member prefixes
             * @return Reference to member prefixes
             */
            eProsima_user_DllExport std::vector<std::string>& prefixes();

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
                    const rcl_interfaces::msg::ListParametersResult& data,
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

            std::vector<std::string> m_names;
            std::vector<std::string> m_prefixes;
        };
    } // namespace msg
} // namespace rcl_interfaces

#endif // _FAST_DDS_GENERATED_RCL_INTERFACES_MSG_LISTPARAMETERSRESULT_H_