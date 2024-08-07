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
 * @file JoyFeedbackPubSubTypes.h
 * This header file contains the declaration of the serialization functions.
 *
 * This file was generated by the tool fastddsgen.
 */


#ifndef _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_JOYFEEDBACK_PUBSUBTYPES_H_
#define _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_JOYFEEDBACK_PUBSUBTYPES_H_

#include <fastdds/dds/core/policy/QosPolicies.hpp>
#include <fastdds/dds/topic/TopicDataType.hpp>
#include <fastdds/rtps/common/InstanceHandle.h>
#include <fastdds/rtps/common/SerializedPayload.h>
#include <fastrtps/utils/md5.h>

#include "JoyFeedback.h"


#if !defined(GEN_API_VER) || (GEN_API_VER != 2)
#error \
    Generated JoyFeedback is not compatible with current installed Fast DDS. Please, regenerate it with fastddsgen.
#endif  // GEN_API_VER

namespace sensor_msgs
{
    namespace msg
    {
        namespace JoyFeedback_Constants
        {
        }

        #ifndef SWIG
        namespace detail {

        template<typename Tag, typename Tag::type M>
        struct JoyFeedback_rob
        {
            friend constexpr typename Tag::type get(
                    Tag)
            {
                return M;
            }

        };

        struct JoyFeedback_f
        {
            typedef float JoyFeedback::* type;
            friend constexpr type get(
                    JoyFeedback_f);
        };

        template struct JoyFeedback_rob<JoyFeedback_f, &JoyFeedback::m_intensity>;

        template <typename T, typename Tag>
        inline size_t constexpr JoyFeedback_offset_of()
        {
            return ((::size_t) &reinterpret_cast<char const volatile&>((((T*)0)->*get(Tag()))));
        }

        } // namespace detail
        #endif // ifndef SWIG


        /*!
         * @brief This class represents the TopicDataType of the type JoyFeedback defined by the user in the IDL file.
         * @ingroup JoyFeedback
         */
        class JoyFeedbackPubSubType : public eprosima::fastdds::dds::TopicDataType
        {
        public:

            typedef JoyFeedback type;

            eProsima_user_DllExport JoyFeedbackPubSubType();

            eProsima_user_DllExport ~JoyFeedbackPubSubType() override;

            eProsima_user_DllExport bool serialize(
                    void* data,
                    eprosima::fastrtps::rtps::SerializedPayload_t* payload) override
            {
                return serialize(data, payload, eprosima::fastdds::dds::DEFAULT_DATA_REPRESENTATION);
            }

            eProsima_user_DllExport bool serialize(
                    void* data,
                    eprosima::fastrtps::rtps::SerializedPayload_t* payload,
                    eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

            eProsima_user_DllExport bool deserialize(
                    eprosima::fastrtps::rtps::SerializedPayload_t* payload,
                    void* data) override;

            eProsima_user_DllExport std::function<uint32_t()> getSerializedSizeProvider(
                    void* data) override
            {
                return getSerializedSizeProvider(data, eprosima::fastdds::dds::DEFAULT_DATA_REPRESENTATION);
            }

            eProsima_user_DllExport std::function<uint32_t()> getSerializedSizeProvider(
                    void* data,
                    eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

            eProsima_user_DllExport bool getKey(
                    void* data,
                    eprosima::fastrtps::rtps::InstanceHandle_t* ihandle,
                    bool force_md5 = false) override;

            eProsima_user_DllExport void* createData() override;

            eProsima_user_DllExport void deleteData(
                    void* data) override;

        #ifdef TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED
            eProsima_user_DllExport inline bool is_bounded() const override
            {
                return true;
            }

        #endif  // TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED

        #ifdef TOPIC_DATA_TYPE_API_HAS_IS_PLAIN
            eProsima_user_DllExport inline bool is_plain() const override
            {
                return is_plain_xcdrv1_impl();
            }

            eProsima_user_DllExport inline bool is_plain(
                eprosima::fastdds::dds::DataRepresentationId_t data_representation) const override
            {
                if(data_representation == eprosima::fastdds::dds::DataRepresentationId_t::XCDR2_DATA_REPRESENTATION)
                {
                    return is_plain_xcdrv2_impl();
                }
                else
                {
                    return is_plain_xcdrv1_impl();
                }
            }

        #endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

        #ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
            eProsima_user_DllExport inline bool construct_sample(
                    void* memory) const override
            {
                new (memory) JoyFeedback();
                return true;
            }

        #endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

            MD5 m_md5;
            unsigned char* m_keyBuffer;

        private:

            static constexpr bool is_plain_xcdrv1_impl()
            {
                return 8ULL ==
                       (detail::JoyFeedback_offset_of<JoyFeedback, detail::JoyFeedback_f>() +
                       sizeof(float));
            }

            static constexpr bool is_plain_xcdrv2_impl()
            {
                return 8ULL ==
                       (detail::JoyFeedback_offset_of<JoyFeedback, detail::JoyFeedback_f>() +
                       sizeof(float));
            }

        };
    }
}

#endif // _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_JOYFEEDBACK_PUBSUBTYPES_H_

