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
 * @file Range.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_RANGE_H_
#define _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_RANGE_H_

#include "std_msgs/msg/Header.h"

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
#if defined(Range_SOURCE)
#define Range_DllAPI __declspec( dllexport )
#else
#define Range_DllAPI __declspec( dllimport )
#endif // Range_SOURCE
#else
#define Range_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define Range_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace sensor_msgs {
    namespace msg {
        namespace Range_Constants {
            const uint8_t ULTRASOUND = 0;
            const uint8_t INFRARED = 1;
        } // namespace Range_Constants
        /*!
         * @brief This class represents the structure Range defined by the user in the IDL file.
         * @ingroup RANGE
         */
        class Range
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport Range();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~Range();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object sensor_msgs::msg::Range that will be copied.
             */
            eProsima_user_DllExport Range(
                    const Range& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object sensor_msgs::msg::Range that will be copied.
             */
            eProsima_user_DllExport Range(
                    Range&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object sensor_msgs::msg::Range that will be copied.
             */
            eProsima_user_DllExport Range& operator =(
                    const Range& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object sensor_msgs::msg::Range that will be copied.
             */
            eProsima_user_DllExport Range& operator =(
                    Range&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x sensor_msgs::msg::Range object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const Range& x) const;

            /*!
             * @brief Comparison operator.
             * @param x sensor_msgs::msg::Range object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const Range& x) const;

            /*!
             * @brief This function copies the value in member header
             * @param _header New value to be copied in member header
             */
            eProsima_user_DllExport void header(
                    const std_msgs::msg::Header& _header);

            /*!
             * @brief This function moves the value in member header
             * @param _header New value to be moved in member header
             */
            eProsima_user_DllExport void header(
                    std_msgs::msg::Header&& _header);

            /*!
             * @brief This function returns a constant reference to member header
             * @return Constant reference to member header
             */
            eProsima_user_DllExport const std_msgs::msg::Header& header() const;

            /*!
             * @brief This function returns a reference to member header
             * @return Reference to member header
             */
            eProsima_user_DllExport std_msgs::msg::Header& header();
            /*!
             * @brief This function sets a value in member radiation_type
             * @param _radiation_type New value for member radiation_type
             */
            eProsima_user_DllExport void radiation_type(
                    uint8_t _radiation_type);

            /*!
             * @brief This function returns the value of member radiation_type
             * @return Value of member radiation_type
             */
            eProsima_user_DllExport uint8_t radiation_type() const;

            /*!
             * @brief This function returns a reference to member radiation_type
             * @return Reference to member radiation_type
             */
            eProsima_user_DllExport uint8_t& radiation_type();

            /*!
             * @brief This function sets a value in member field_of_view
             * @param _field_of_view New value for member field_of_view
             */
            eProsima_user_DllExport void field_of_view(
                    float _field_of_view);

            /*!
             * @brief This function returns the value of member field_of_view
             * @return Value of member field_of_view
             */
            eProsima_user_DllExport float field_of_view() const;

            /*!
             * @brief This function returns a reference to member field_of_view
             * @return Reference to member field_of_view
             */
            eProsima_user_DllExport float& field_of_view();

            /*!
             * @brief This function sets a value in member min_range
             * @param _min_range New value for member min_range
             */
            eProsima_user_DllExport void min_range(
                    float _min_range);

            /*!
             * @brief This function returns the value of member min_range
             * @return Value of member min_range
             */
            eProsima_user_DllExport float min_range() const;

            /*!
             * @brief This function returns a reference to member min_range
             * @return Reference to member min_range
             */
            eProsima_user_DllExport float& min_range();

            /*!
             * @brief This function sets a value in member max_range
             * @param _max_range New value for member max_range
             */
            eProsima_user_DllExport void max_range(
                    float _max_range);

            /*!
             * @brief This function returns the value of member max_range
             * @return Value of member max_range
             */
            eProsima_user_DllExport float max_range() const;

            /*!
             * @brief This function returns a reference to member max_range
             * @return Reference to member max_range
             */
            eProsima_user_DllExport float& max_range();

            /*!
             * @brief This function sets a value in member range
             * @param _range New value for member range
             */
            eProsima_user_DllExport void range(
                    float _range);

            /*!
             * @brief This function returns the value of member range
             * @return Value of member range
             */
            eProsima_user_DllExport float range() const;

            /*!
             * @brief This function returns a reference to member range
             * @return Reference to member range
             */
            eProsima_user_DllExport float& range();


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
                    const sensor_msgs::msg::Range& data,
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

            std_msgs::msg::Header m_header;
            uint8_t m_radiation_type;
            float m_field_of_view;
            float m_min_range;
            float m_max_range;
            float m_range;
        };
    } // namespace msg
} // namespace sensor_msgs

#endif // _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_RANGE_H_