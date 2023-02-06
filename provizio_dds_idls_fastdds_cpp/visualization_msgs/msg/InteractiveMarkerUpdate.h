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
 * @file InteractiveMarkerUpdate.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_VISUALIZATION_MSGS_MSG_INTERACTIVEMARKERUPDATE_H_
#define _FAST_DDS_GENERATED_VISUALIZATION_MSGS_MSG_INTERACTIVEMARKERUPDATE_H_

#include "InteractiveMarker.h"
#include "InteractiveMarkerPose.h"

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
#if defined(InteractiveMarkerUpdate_SOURCE)
#define InteractiveMarkerUpdate_DllAPI __declspec( dllexport )
#else
#define InteractiveMarkerUpdate_DllAPI __declspec( dllimport )
#endif // InteractiveMarkerUpdate_SOURCE
#else
#define InteractiveMarkerUpdate_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define InteractiveMarkerUpdate_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace visualization_msgs {
    namespace msg {
        namespace InteractiveMarkerUpdate_Constants {
            const uint8_t KEEP_ALIVE = 0;
            const uint8_t UPDATE = 1;
        } // namespace InteractiveMarkerUpdate_Constants
        /*!
         * @brief This class represents the structure InteractiveMarkerUpdate defined by the user in the IDL file.
         * @ingroup INTERACTIVEMARKERUPDATE
         */
        class InteractiveMarkerUpdate
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport InteractiveMarkerUpdate();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~InteractiveMarkerUpdate();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object visualization_msgs::msg::InteractiveMarkerUpdate that will be copied.
             */
            eProsima_user_DllExport InteractiveMarkerUpdate(
                    const InteractiveMarkerUpdate& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object visualization_msgs::msg::InteractiveMarkerUpdate that will be copied.
             */
            eProsima_user_DllExport InteractiveMarkerUpdate(
                    InteractiveMarkerUpdate&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object visualization_msgs::msg::InteractiveMarkerUpdate that will be copied.
             */
            eProsima_user_DllExport InteractiveMarkerUpdate& operator =(
                    const InteractiveMarkerUpdate& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object visualization_msgs::msg::InteractiveMarkerUpdate that will be copied.
             */
            eProsima_user_DllExport InteractiveMarkerUpdate& operator =(
                    InteractiveMarkerUpdate&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x visualization_msgs::msg::InteractiveMarkerUpdate object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const InteractiveMarkerUpdate& x) const;

            /*!
             * @brief Comparison operator.
             * @param x visualization_msgs::msg::InteractiveMarkerUpdate object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const InteractiveMarkerUpdate& x) const;

            /*!
             * @brief This function copies the value in member server_id
             * @param _server_id New value to be copied in member server_id
             */
            eProsima_user_DllExport void server_id(
                    const std::string& _server_id);

            /*!
             * @brief This function moves the value in member server_id
             * @param _server_id New value to be moved in member server_id
             */
            eProsima_user_DllExport void server_id(
                    std::string&& _server_id);

            /*!
             * @brief This function returns a constant reference to member server_id
             * @return Constant reference to member server_id
             */
            eProsima_user_DllExport const std::string& server_id() const;

            /*!
             * @brief This function returns a reference to member server_id
             * @return Reference to member server_id
             */
            eProsima_user_DllExport std::string& server_id();
            /*!
             * @brief This function sets a value in member seq_num
             * @param _seq_num New value for member seq_num
             */
            eProsima_user_DllExport void seq_num(
                    uint64_t _seq_num);

            /*!
             * @brief This function returns the value of member seq_num
             * @return Value of member seq_num
             */
            eProsima_user_DllExport uint64_t seq_num() const;

            /*!
             * @brief This function returns a reference to member seq_num
             * @return Reference to member seq_num
             */
            eProsima_user_DllExport uint64_t& seq_num();

            /*!
             * @brief This function sets a value in member type
             * @param _type New value for member type
             */
            eProsima_user_DllExport void type(
                    uint8_t _type);

            /*!
             * @brief This function returns the value of member type
             * @return Value of member type
             */
            eProsima_user_DllExport uint8_t type() const;

            /*!
             * @brief This function returns a reference to member type
             * @return Reference to member type
             */
            eProsima_user_DllExport uint8_t& type();

            /*!
             * @brief This function copies the value in member markers
             * @param _markers New value to be copied in member markers
             */
            eProsima_user_DllExport void markers(
                    const std::vector<visualization_msgs::msg::InteractiveMarker>& _markers);

            /*!
             * @brief This function moves the value in member markers
             * @param _markers New value to be moved in member markers
             */
            eProsima_user_DllExport void markers(
                    std::vector<visualization_msgs::msg::InteractiveMarker>&& _markers);

            /*!
             * @brief This function returns a constant reference to member markers
             * @return Constant reference to member markers
             */
            eProsima_user_DllExport const std::vector<visualization_msgs::msg::InteractiveMarker>& markers() const;

            /*!
             * @brief This function returns a reference to member markers
             * @return Reference to member markers
             */
            eProsima_user_DllExport std::vector<visualization_msgs::msg::InteractiveMarker>& markers();
            /*!
             * @brief This function copies the value in member poses
             * @param _poses New value to be copied in member poses
             */
            eProsima_user_DllExport void poses(
                    const std::vector<visualization_msgs::msg::InteractiveMarkerPose>& _poses);

            /*!
             * @brief This function moves the value in member poses
             * @param _poses New value to be moved in member poses
             */
            eProsima_user_DllExport void poses(
                    std::vector<visualization_msgs::msg::InteractiveMarkerPose>&& _poses);

            /*!
             * @brief This function returns a constant reference to member poses
             * @return Constant reference to member poses
             */
            eProsima_user_DllExport const std::vector<visualization_msgs::msg::InteractiveMarkerPose>& poses() const;

            /*!
             * @brief This function returns a reference to member poses
             * @return Reference to member poses
             */
            eProsima_user_DllExport std::vector<visualization_msgs::msg::InteractiveMarkerPose>& poses();
            /*!
             * @brief This function copies the value in member erases
             * @param _erases New value to be copied in member erases
             */
            eProsima_user_DllExport void erases(
                    const std::vector<std::string>& _erases);

            /*!
             * @brief This function moves the value in member erases
             * @param _erases New value to be moved in member erases
             */
            eProsima_user_DllExport void erases(
                    std::vector<std::string>&& _erases);

            /*!
             * @brief This function returns a constant reference to member erases
             * @return Constant reference to member erases
             */
            eProsima_user_DllExport const std::vector<std::string>& erases() const;

            /*!
             * @brief This function returns a reference to member erases
             * @return Reference to member erases
             */
            eProsima_user_DllExport std::vector<std::string>& erases();

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
                    const visualization_msgs::msg::InteractiveMarkerUpdate& data,
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

            std::string m_server_id;
            uint64_t m_seq_num;
            uint8_t m_type;
            std::vector<visualization_msgs::msg::InteractiveMarker> m_markers;
            std::vector<visualization_msgs::msg::InteractiveMarkerPose> m_poses;
            std::vector<std::string> m_erases;
        };
    } // namespace msg
} // namespace visualization_msgs

#endif // _FAST_DDS_GENERATED_VISUALIZATION_MSGS_MSG_INTERACTIVEMARKERUPDATE_H_