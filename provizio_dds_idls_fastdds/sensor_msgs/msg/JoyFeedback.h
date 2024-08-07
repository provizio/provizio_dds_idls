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
 * @file JoyFeedback.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifndef _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_JOYFEEDBACK_H_
#define _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_JOYFEEDBACK_H_

#include <array>
#include <bitset>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

#include <fastcdr/cdr/fixed_size_string.hpp>
#include <fastcdr/xcdr/optional.hpp>



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
#if defined(JOYFEEDBACK_SOURCE)
#define JOYFEEDBACK_DllAPI __declspec( dllexport )
#else
#define JOYFEEDBACK_DllAPI __declspec( dllimport )
#endif // JOYFEEDBACK_SOURCE
#else
#define JOYFEEDBACK_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define JOYFEEDBACK_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
class CdrSizeCalculator;
} // namespace fastcdr
} // namespace eprosima



namespace sensor_msgs {
    namespace msg {
        namespace JoyFeedback_Constants {
            const uint8_t TYPE_LED = 0;
            const uint8_t TYPE_RUMBLE = 1;
            const uint8_t TYPE_BUZZER = 2;
        } // namespace JoyFeedback_Constants
        /*!
         * @brief This class represents the structure JoyFeedback defined by the user in the IDL file.
         * @ingroup JoyFeedback
         */
        class JoyFeedback
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport JoyFeedback();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~JoyFeedback();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object sensor_msgs::msg::JoyFeedback that will be copied.
             */
            eProsima_user_DllExport JoyFeedback(
                    const JoyFeedback& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object sensor_msgs::msg::JoyFeedback that will be copied.
             */
            eProsima_user_DllExport JoyFeedback(
                    JoyFeedback&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object sensor_msgs::msg::JoyFeedback that will be copied.
             */
            eProsima_user_DllExport JoyFeedback& operator =(
                    const JoyFeedback& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object sensor_msgs::msg::JoyFeedback that will be copied.
             */
            eProsima_user_DllExport JoyFeedback& operator =(
                    JoyFeedback&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x sensor_msgs::msg::JoyFeedback object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const JoyFeedback& x) const;

            /*!
             * @brief Comparison operator.
             * @param x sensor_msgs::msg::JoyFeedback object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const JoyFeedback& x) const;

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
             * @brief This function sets a value in member id
             * @param _id New value for member id
             */
            eProsima_user_DllExport void id(
                    uint8_t _id);

            /*!
             * @brief This function returns the value of member id
             * @return Value of member id
             */
            eProsima_user_DllExport uint8_t id() const;

            /*!
             * @brief This function returns a reference to member id
             * @return Reference to member id
             */
            eProsima_user_DllExport uint8_t& id();


            /*!
             * @brief This function sets a value in member intensity
             * @param _intensity New value for member intensity
             */
            eProsima_user_DllExport void intensity(
                    float _intensity);

            /*!
             * @brief This function returns the value of member intensity
             * @return Value of member intensity
             */
            eProsima_user_DllExport float intensity() const;

            /*!
             * @brief This function returns a reference to member intensity
             * @return Reference to member intensity
             */
            eProsima_user_DllExport float& intensity();

        private:

            uint8_t m_type{0};
            uint8_t m_id{0};
            float m_intensity{0.0};

        };
    } // namespace msg
} // namespace sensor_msgs

#endif // _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_JOYFEEDBACK_H_

