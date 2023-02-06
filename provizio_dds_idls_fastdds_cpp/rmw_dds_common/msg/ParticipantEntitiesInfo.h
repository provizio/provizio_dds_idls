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
 * @file ParticipantEntitiesInfo.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_RMW_DDS_COMMON_MSG_PARTICIPANTENTITIESINFO_H_
#define _FAST_DDS_GENERATED_RMW_DDS_COMMON_MSG_PARTICIPANTENTITIESINFO_H_

#include "Gid.h"
#include "NodeEntitiesInfo.h"

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
#if defined(ParticipantEntitiesInfo_SOURCE)
#define ParticipantEntitiesInfo_DllAPI __declspec( dllexport )
#else
#define ParticipantEntitiesInfo_DllAPI __declspec( dllimport )
#endif // ParticipantEntitiesInfo_SOURCE
#else
#define ParticipantEntitiesInfo_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define ParticipantEntitiesInfo_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace rmw_dds_common {
    namespace msg {
        /*!
         * @brief This class represents the structure ParticipantEntitiesInfo defined by the user in the IDL file.
         * @ingroup PARTICIPANTENTITIESINFO
         */
        class ParticipantEntitiesInfo
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport ParticipantEntitiesInfo();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~ParticipantEntitiesInfo();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object rmw_dds_common::msg::ParticipantEntitiesInfo that will be copied.
             */
            eProsima_user_DllExport ParticipantEntitiesInfo(
                    const ParticipantEntitiesInfo& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object rmw_dds_common::msg::ParticipantEntitiesInfo that will be copied.
             */
            eProsima_user_DllExport ParticipantEntitiesInfo(
                    ParticipantEntitiesInfo&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object rmw_dds_common::msg::ParticipantEntitiesInfo that will be copied.
             */
            eProsima_user_DllExport ParticipantEntitiesInfo& operator =(
                    const ParticipantEntitiesInfo& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object rmw_dds_common::msg::ParticipantEntitiesInfo that will be copied.
             */
            eProsima_user_DllExport ParticipantEntitiesInfo& operator =(
                    ParticipantEntitiesInfo&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x rmw_dds_common::msg::ParticipantEntitiesInfo object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const ParticipantEntitiesInfo& x) const;

            /*!
             * @brief Comparison operator.
             * @param x rmw_dds_common::msg::ParticipantEntitiesInfo object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const ParticipantEntitiesInfo& x) const;

            /*!
             * @brief This function copies the value in member gid
             * @param _gid New value to be copied in member gid
             */
            eProsima_user_DllExport void gid(
                    const rmw_dds_common::msg::Gid& _gid);

            /*!
             * @brief This function moves the value in member gid
             * @param _gid New value to be moved in member gid
             */
            eProsima_user_DllExport void gid(
                    rmw_dds_common::msg::Gid&& _gid);

            /*!
             * @brief This function returns a constant reference to member gid
             * @return Constant reference to member gid
             */
            eProsima_user_DllExport const rmw_dds_common::msg::Gid& gid() const;

            /*!
             * @brief This function returns a reference to member gid
             * @return Reference to member gid
             */
            eProsima_user_DllExport rmw_dds_common::msg::Gid& gid();
            /*!
             * @brief This function copies the value in member node_entities_info_seq
             * @param _node_entities_info_seq New value to be copied in member node_entities_info_seq
             */
            eProsima_user_DllExport void node_entities_info_seq(
                    const std::vector<rmw_dds_common::msg::NodeEntitiesInfo>& _node_entities_info_seq);

            /*!
             * @brief This function moves the value in member node_entities_info_seq
             * @param _node_entities_info_seq New value to be moved in member node_entities_info_seq
             */
            eProsima_user_DllExport void node_entities_info_seq(
                    std::vector<rmw_dds_common::msg::NodeEntitiesInfo>&& _node_entities_info_seq);

            /*!
             * @brief This function returns a constant reference to member node_entities_info_seq
             * @return Constant reference to member node_entities_info_seq
             */
            eProsima_user_DllExport const std::vector<rmw_dds_common::msg::NodeEntitiesInfo>& node_entities_info_seq() const;

            /*!
             * @brief This function returns a reference to member node_entities_info_seq
             * @return Reference to member node_entities_info_seq
             */
            eProsima_user_DllExport std::vector<rmw_dds_common::msg::NodeEntitiesInfo>& node_entities_info_seq();

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
                    const rmw_dds_common::msg::ParticipantEntitiesInfo& data,
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

            rmw_dds_common::msg::Gid m_gid;
            std::vector<rmw_dds_common::msg::NodeEntitiesInfo> m_node_entities_info_seq;
        };
    } // namespace msg
} // namespace rmw_dds_common

#endif // _FAST_DDS_GENERATED_RMW_DDS_COMMON_MSG_PARTICIPANTENTITIESINFO_H_