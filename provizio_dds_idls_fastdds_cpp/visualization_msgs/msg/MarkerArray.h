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
 * @file MarkerArray.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_VISUALIZATION_MSGS_MSG_MARKERARRAY_H_
#define _FAST_DDS_GENERATED_VISUALIZATION_MSGS_MSG_MARKERARRAY_H_

#include "Marker.h"

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
#if defined(MarkerArray_SOURCE)
#define MarkerArray_DllAPI __declspec( dllexport )
#else
#define MarkerArray_DllAPI __declspec( dllimport )
#endif // MarkerArray_SOURCE
#else
#define MarkerArray_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define MarkerArray_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace visualization_msgs {
    namespace msg {
        /*!
         * @brief This class represents the structure MarkerArray defined by the user in the IDL file.
         * @ingroup MARKERARRAY
         */
        class MarkerArray
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport MarkerArray();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~MarkerArray();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object visualization_msgs::msg::MarkerArray that will be copied.
             */
            eProsima_user_DllExport MarkerArray(
                    const MarkerArray& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object visualization_msgs::msg::MarkerArray that will be copied.
             */
            eProsima_user_DllExport MarkerArray(
                    MarkerArray&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object visualization_msgs::msg::MarkerArray that will be copied.
             */
            eProsima_user_DllExport MarkerArray& operator =(
                    const MarkerArray& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object visualization_msgs::msg::MarkerArray that will be copied.
             */
            eProsima_user_DllExport MarkerArray& operator =(
                    MarkerArray&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x visualization_msgs::msg::MarkerArray object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const MarkerArray& x) const;

            /*!
             * @brief Comparison operator.
             * @param x visualization_msgs::msg::MarkerArray object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const MarkerArray& x) const;

            /*!
             * @brief This function copies the value in member markers
             * @param _markers New value to be copied in member markers
             */
            eProsima_user_DllExport void markers(
                    const std::vector<visualization_msgs::msg::Marker>& _markers);

            /*!
             * @brief This function moves the value in member markers
             * @param _markers New value to be moved in member markers
             */
            eProsima_user_DllExport void markers(
                    std::vector<visualization_msgs::msg::Marker>&& _markers);

            /*!
             * @brief This function returns a constant reference to member markers
             * @return Constant reference to member markers
             */
            eProsima_user_DllExport const std::vector<visualization_msgs::msg::Marker>& markers() const;

            /*!
             * @brief This function returns a reference to member markers
             * @return Reference to member markers
             */
            eProsima_user_DllExport std::vector<visualization_msgs::msg::Marker>& markers();

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
                    const visualization_msgs::msg::MarkerArray& data,
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

            std::vector<visualization_msgs::msg::Marker> m_markers;
        };
    } // namespace msg
} // namespace visualization_msgs

#endif // _FAST_DDS_GENERATED_VISUALIZATION_MSGS_MSG_MARKERARRAY_H_