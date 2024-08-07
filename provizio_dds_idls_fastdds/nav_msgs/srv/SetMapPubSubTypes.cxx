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
 * @file SetMapPubSubTypes.cpp
 * This header file contains the implementation of the serialization functions.
 *
 * This file was generated by the tool fastddsgen.
 */


#include <fastcdr/FastBuffer.h>
#include <fastcdr/Cdr.h>
#include <fastcdr/CdrSizeCalculator.hpp>

#include "SetMapPubSubTypes.h"
#include "SetMapCdrAux.hpp"

using SerializedPayload_t = eprosima::fastrtps::rtps::SerializedPayload_t;
using InstanceHandle_t = eprosima::fastrtps::rtps::InstanceHandle_t;
using DataRepresentationId_t = eprosima::fastdds::dds::DataRepresentationId_t;

namespace nav_msgs {
    namespace srv {
        SetMap_RequestPubSubType::SetMap_RequestPubSubType()
        {
            setName("nav_msgs::srv::dds_::SetMap_Request_");
            uint32_t type_size = nav_msgs_srv_SetMap_Request_max_cdr_typesize;
            type_size += static_cast<uint32_t>(eprosima::fastcdr::Cdr::alignment(type_size, 4)); /* possible submessage alignment */
            m_typeSize = type_size + 4; /*encapsulation*/
            m_isGetKeyDefined = false;
            uint32_t keyLength = nav_msgs_srv_SetMap_Request_max_key_cdr_typesize > 16 ? nav_msgs_srv_SetMap_Request_max_key_cdr_typesize : 16;
            m_keyBuffer = reinterpret_cast<unsigned char*>(malloc(keyLength));
            memset(m_keyBuffer, 0, keyLength);
        }

        SetMap_RequestPubSubType::~SetMap_RequestPubSubType()
        {
            if (m_keyBuffer != nullptr)
            {
                free(m_keyBuffer);
            }
        }

        bool SetMap_RequestPubSubType::serialize(
                void* data,
                SerializedPayload_t* payload,
                DataRepresentationId_t data_representation)
        {
            SetMap_Request* p_type = static_cast<SetMap_Request*>(data);

            // Object that manages the raw buffer.
            eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->max_size);
            // Object that serializes the data.
            eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN,
                    data_representation == DataRepresentationId_t::XCDR_DATA_REPRESENTATION ?
                    eprosima::fastcdr::CdrVersion::XCDRv1 : eprosima::fastcdr::CdrVersion::XCDRv2);
            payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
            ser.set_encoding_flag(
                data_representation == DataRepresentationId_t::XCDR_DATA_REPRESENTATION ?
                eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR  :
                eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR2);

            try
            {
                // Serialize encapsulation
                ser.serialize_encapsulation();
                // Serialize the object.
                ser << *p_type;
            }
            catch (eprosima::fastcdr::exception::Exception& /*exception*/)
            {
                return false;
            }

            // Get the serialized length
            payload->length = static_cast<uint32_t>(ser.get_serialized_data_length());
            return true;
        }

        bool SetMap_RequestPubSubType::deserialize(
                SerializedPayload_t* payload,
                void* data)
        {
            try
            {
                // Convert DATA to pointer of your type
                SetMap_Request* p_type = static_cast<SetMap_Request*>(data);

                // Object that manages the raw buffer.
                eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->length);

                // Object that deserializes the data.
                eprosima::fastcdr::Cdr deser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN);

                // Deserialize encapsulation.
                deser.read_encapsulation();
                payload->encapsulation = deser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;

                // Deserialize the object.
                deser >> *p_type;
            }
            catch (eprosima::fastcdr::exception::Exception& /*exception*/)
            {
                return false;
            }

            return true;
        }

        std::function<uint32_t()> SetMap_RequestPubSubType::getSerializedSizeProvider(
                void* data,
                DataRepresentationId_t data_representation)
        {
            return [data, data_representation]() -> uint32_t
                   {
                       eprosima::fastcdr::CdrSizeCalculator calculator(
                           data_representation == DataRepresentationId_t::XCDR_DATA_REPRESENTATION ?
                           eprosima::fastcdr::CdrVersion::XCDRv1 :eprosima::fastcdr::CdrVersion::XCDRv2);
                       size_t current_alignment {0};
                       return static_cast<uint32_t>(calculator.calculate_serialized_size(
                                   *static_cast<SetMap_Request*>(data), current_alignment)) +
                               4u /*encapsulation*/;
                   };
        }

        void* SetMap_RequestPubSubType::createData()
        {
            return reinterpret_cast<void*>(new SetMap_Request());
        }

        void SetMap_RequestPubSubType::deleteData(
                void* data)
        {
            delete(reinterpret_cast<SetMap_Request*>(data));
        }

        bool SetMap_RequestPubSubType::getKey(
                void* data,
                InstanceHandle_t* handle,
                bool force_md5)
        {
            if (!m_isGetKeyDefined)
            {
                return false;
            }

            SetMap_Request* p_type = static_cast<SetMap_Request*>(data);

            // Object that manages the raw buffer.
            eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(m_keyBuffer),
                    nav_msgs_srv_SetMap_Request_max_key_cdr_typesize);

            // Object that serializes the data.
            eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS);
            eprosima::fastcdr::serialize_key(ser, *p_type);
            if (force_md5 || nav_msgs_srv_SetMap_Request_max_key_cdr_typesize > 16)
            {
                m_md5.init();
                m_md5.update(m_keyBuffer, static_cast<unsigned int>(ser.get_serialized_data_length()));
                m_md5.finalize();
                for (uint8_t i = 0; i < 16; ++i)
                {
                    handle->value[i] = m_md5.digest[i];
                }
            }
            else
            {
                for (uint8_t i = 0; i < 16; ++i)
                {
                    handle->value[i] = m_keyBuffer[i];
                }
            }
            return true;
        }

        SetMap_ResponsePubSubType::SetMap_ResponsePubSubType()
        {
            setName("nav_msgs::srv::dds_::SetMap_Response_");
            uint32_t type_size = nav_msgs_srv_SetMap_Response_max_cdr_typesize;
            type_size += static_cast<uint32_t>(eprosima::fastcdr::Cdr::alignment(type_size, 4)); /* possible submessage alignment */
            m_typeSize = type_size + 4; /*encapsulation*/
            m_isGetKeyDefined = false;
            uint32_t keyLength = nav_msgs_srv_SetMap_Response_max_key_cdr_typesize > 16 ? nav_msgs_srv_SetMap_Response_max_key_cdr_typesize : 16;
            m_keyBuffer = reinterpret_cast<unsigned char*>(malloc(keyLength));
            memset(m_keyBuffer, 0, keyLength);
        }

        SetMap_ResponsePubSubType::~SetMap_ResponsePubSubType()
        {
            if (m_keyBuffer != nullptr)
            {
                free(m_keyBuffer);
            }
        }

        bool SetMap_ResponsePubSubType::serialize(
                void* data,
                SerializedPayload_t* payload,
                DataRepresentationId_t data_representation)
        {
            SetMap_Response* p_type = static_cast<SetMap_Response*>(data);

            // Object that manages the raw buffer.
            eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->max_size);
            // Object that serializes the data.
            eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN,
                    data_representation == DataRepresentationId_t::XCDR_DATA_REPRESENTATION ?
                    eprosima::fastcdr::CdrVersion::XCDRv1 : eprosima::fastcdr::CdrVersion::XCDRv2);
            payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
            ser.set_encoding_flag(
                data_representation == DataRepresentationId_t::XCDR_DATA_REPRESENTATION ?
                eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR  :
                eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR2);

            try
            {
                // Serialize encapsulation
                ser.serialize_encapsulation();
                // Serialize the object.
                ser << *p_type;
            }
            catch (eprosima::fastcdr::exception::Exception& /*exception*/)
            {
                return false;
            }

            // Get the serialized length
            payload->length = static_cast<uint32_t>(ser.get_serialized_data_length());
            return true;
        }

        bool SetMap_ResponsePubSubType::deserialize(
                SerializedPayload_t* payload,
                void* data)
        {
            try
            {
                // Convert DATA to pointer of your type
                SetMap_Response* p_type = static_cast<SetMap_Response*>(data);

                // Object that manages the raw buffer.
                eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->length);

                // Object that deserializes the data.
                eprosima::fastcdr::Cdr deser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN);

                // Deserialize encapsulation.
                deser.read_encapsulation();
                payload->encapsulation = deser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;

                // Deserialize the object.
                deser >> *p_type;
            }
            catch (eprosima::fastcdr::exception::Exception& /*exception*/)
            {
                return false;
            }

            return true;
        }

        std::function<uint32_t()> SetMap_ResponsePubSubType::getSerializedSizeProvider(
                void* data,
                DataRepresentationId_t data_representation)
        {
            return [data, data_representation]() -> uint32_t
                   {
                       eprosima::fastcdr::CdrSizeCalculator calculator(
                           data_representation == DataRepresentationId_t::XCDR_DATA_REPRESENTATION ?
                           eprosima::fastcdr::CdrVersion::XCDRv1 :eprosima::fastcdr::CdrVersion::XCDRv2);
                       size_t current_alignment {0};
                       return static_cast<uint32_t>(calculator.calculate_serialized_size(
                                   *static_cast<SetMap_Response*>(data), current_alignment)) +
                               4u /*encapsulation*/;
                   };
        }

        void* SetMap_ResponsePubSubType::createData()
        {
            return reinterpret_cast<void*>(new SetMap_Response());
        }

        void SetMap_ResponsePubSubType::deleteData(
                void* data)
        {
            delete(reinterpret_cast<SetMap_Response*>(data));
        }

        bool SetMap_ResponsePubSubType::getKey(
                void* data,
                InstanceHandle_t* handle,
                bool force_md5)
        {
            if (!m_isGetKeyDefined)
            {
                return false;
            }

            SetMap_Response* p_type = static_cast<SetMap_Response*>(data);

            // Object that manages the raw buffer.
            eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(m_keyBuffer),
                    nav_msgs_srv_SetMap_Response_max_key_cdr_typesize);

            // Object that serializes the data.
            eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS);
            eprosima::fastcdr::serialize_key(ser, *p_type);
            if (force_md5 || nav_msgs_srv_SetMap_Response_max_key_cdr_typesize > 16)
            {
                m_md5.init();
                m_md5.update(m_keyBuffer, static_cast<unsigned int>(ser.get_serialized_data_length()));
                m_md5.finalize();
                for (uint8_t i = 0; i < 16; ++i)
                {
                    handle->value[i] = m_md5.digest[i];
                }
            }
            else
            {
                for (uint8_t i = 0; i < 16; ++i)
                {
                    handle->value[i] = m_keyBuffer[i];
                }
            }
            return true;
        }


    } //End of namespace srv


} //End of namespace nav_msgs

