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
 * @file JoyFeedbackArray.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifndef _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_JOYFEEDBACKARRAY_H_
#define _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_JOYFEEDBACKARRAY_H_

#include <array>
#include <bitset>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

#include <fastcdr/cdr/fixed_size_string.hpp>
#include <fastcdr/xcdr/optional.hpp>

#include "JoyFeedback.h"


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
#if defined(JOYFEEDBACKARRAY_SOURCE)
#define JOYFEEDBACKARRAY_DllAPI __declspec( dllexport )
#else
#define JOYFEEDBACKARRAY_DllAPI __declspec( dllimport )
#endif // JOYFEEDBACKARRAY_SOURCE
#else
#define JOYFEEDBACKARRAY_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define JOYFEEDBACKARRAY_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
class CdrSizeCalculator;
} // namespace fastcdr
} // namespace eprosima



namespace sensor_msgs {
    namespace msg {
        /*!
         * @brief This class represents the structure JoyFeedbackArray defined by the user in the IDL file.
         * @ingroup JoyFeedbackArray
         */
        class JoyFeedbackArray
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport JoyFeedbackArray();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~JoyFeedbackArray();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object sensor_msgs::msg::JoyFeedbackArray that will be copied.
             */
            eProsima_user_DllExport JoyFeedbackArray(
                    const JoyFeedbackArray& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object sensor_msgs::msg::JoyFeedbackArray that will be copied.
             */
            eProsima_user_DllExport JoyFeedbackArray(
                    JoyFeedbackArray&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object sensor_msgs::msg::JoyFeedbackArray that will be copied.
             */
            eProsima_user_DllExport JoyFeedbackArray& operator =(
                    const JoyFeedbackArray& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object sensor_msgs::msg::JoyFeedbackArray that will be copied.
             */
            eProsima_user_DllExport JoyFeedbackArray& operator =(
                    JoyFeedbackArray&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x sensor_msgs::msg::JoyFeedbackArray object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const JoyFeedbackArray& x) const;

            /*!
             * @brief Comparison operator.
             * @param x sensor_msgs::msg::JoyFeedbackArray object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const JoyFeedbackArray& x) const;

            /*!
             * @brief This function copies the value in member array
             * @param _array New value to be copied in member array
             */
            eProsima_user_DllExport void array(
                    const std::vector<sensor_msgs::msg::JoyFeedback>& _array);

            /*!
             * @brief This function moves the value in member array
             * @param _array New value to be moved in member array
             */
            eProsima_user_DllExport void array(
                    std::vector<sensor_msgs::msg::JoyFeedback>&& _array);

            /*!
             * @brief This function returns a constant reference to member array
             * @return Constant reference to member array
             */
            eProsima_user_DllExport const std::vector<sensor_msgs::msg::JoyFeedback>& array() const;

            /*!
             * @brief This function returns a reference to member array
             * @return Reference to member array
             */
            eProsima_user_DllExport std::vector<sensor_msgs::msg::JoyFeedback>& array();

        private:

            std::vector<sensor_msgs::msg::JoyFeedback> m_array;

        };
    } // namespace msg
} // namespace sensor_msgs

#endif // _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_JOYFEEDBACKARRAY_H_

