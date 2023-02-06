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
 * @file TransitionEvent.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_LIFECYCLE_MSGS_MSG_TRANSITIONEVENT_H_
#define _FAST_DDS_GENERATED_LIFECYCLE_MSGS_MSG_TRANSITIONEVENT_H_

#include "State.h"
#include "Transition.h"

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
#if defined(TransitionEvent_SOURCE)
#define TransitionEvent_DllAPI __declspec( dllexport )
#else
#define TransitionEvent_DllAPI __declspec( dllimport )
#endif // TransitionEvent_SOURCE
#else
#define TransitionEvent_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define TransitionEvent_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace lifecycle_msgs {
    namespace msg {
        /*!
         * @brief This class represents the structure TransitionEvent defined by the user in the IDL file.
         * @ingroup TRANSITIONEVENT
         */
        class TransitionEvent
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport TransitionEvent();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~TransitionEvent();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object lifecycle_msgs::msg::TransitionEvent that will be copied.
             */
            eProsima_user_DllExport TransitionEvent(
                    const TransitionEvent& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object lifecycle_msgs::msg::TransitionEvent that will be copied.
             */
            eProsima_user_DllExport TransitionEvent(
                    TransitionEvent&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object lifecycle_msgs::msg::TransitionEvent that will be copied.
             */
            eProsima_user_DllExport TransitionEvent& operator =(
                    const TransitionEvent& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object lifecycle_msgs::msg::TransitionEvent that will be copied.
             */
            eProsima_user_DllExport TransitionEvent& operator =(
                    TransitionEvent&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x lifecycle_msgs::msg::TransitionEvent object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const TransitionEvent& x) const;

            /*!
             * @brief Comparison operator.
             * @param x lifecycle_msgs::msg::TransitionEvent object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const TransitionEvent& x) const;

            /*!
             * @brief This function sets a value in member timestamp
             * @param _timestamp New value for member timestamp
             */
            eProsima_user_DllExport void timestamp(
                    uint64_t _timestamp);

            /*!
             * @brief This function returns the value of member timestamp
             * @return Value of member timestamp
             */
            eProsima_user_DllExport uint64_t timestamp() const;

            /*!
             * @brief This function returns a reference to member timestamp
             * @return Reference to member timestamp
             */
            eProsima_user_DllExport uint64_t& timestamp();

            /*!
             * @brief This function copies the value in member transition
             * @param _transition New value to be copied in member transition
             */
            eProsima_user_DllExport void transition(
                    const lifecycle_msgs::msg::Transition& _transition);

            /*!
             * @brief This function moves the value in member transition
             * @param _transition New value to be moved in member transition
             */
            eProsima_user_DllExport void transition(
                    lifecycle_msgs::msg::Transition&& _transition);

            /*!
             * @brief This function returns a constant reference to member transition
             * @return Constant reference to member transition
             */
            eProsima_user_DllExport const lifecycle_msgs::msg::Transition& transition() const;

            /*!
             * @brief This function returns a reference to member transition
             * @return Reference to member transition
             */
            eProsima_user_DllExport lifecycle_msgs::msg::Transition& transition();
            /*!
             * @brief This function copies the value in member start_state
             * @param _start_state New value to be copied in member start_state
             */
            eProsima_user_DllExport void start_state(
                    const lifecycle_msgs::msg::State& _start_state);

            /*!
             * @brief This function moves the value in member start_state
             * @param _start_state New value to be moved in member start_state
             */
            eProsima_user_DllExport void start_state(
                    lifecycle_msgs::msg::State&& _start_state);

            /*!
             * @brief This function returns a constant reference to member start_state
             * @return Constant reference to member start_state
             */
            eProsima_user_DllExport const lifecycle_msgs::msg::State& start_state() const;

            /*!
             * @brief This function returns a reference to member start_state
             * @return Reference to member start_state
             */
            eProsima_user_DllExport lifecycle_msgs::msg::State& start_state();
            /*!
             * @brief This function copies the value in member goal_state
             * @param _goal_state New value to be copied in member goal_state
             */
            eProsima_user_DllExport void goal_state(
                    const lifecycle_msgs::msg::State& _goal_state);

            /*!
             * @brief This function moves the value in member goal_state
             * @param _goal_state New value to be moved in member goal_state
             */
            eProsima_user_DllExport void goal_state(
                    lifecycle_msgs::msg::State&& _goal_state);

            /*!
             * @brief This function returns a constant reference to member goal_state
             * @return Constant reference to member goal_state
             */
            eProsima_user_DllExport const lifecycle_msgs::msg::State& goal_state() const;

            /*!
             * @brief This function returns a reference to member goal_state
             * @return Reference to member goal_state
             */
            eProsima_user_DllExport lifecycle_msgs::msg::State& goal_state();

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
                    const lifecycle_msgs::msg::TransitionEvent& data,
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

            uint64_t m_timestamp;
            lifecycle_msgs::msg::Transition m_transition;
            lifecycle_msgs::msg::State m_start_state;
            lifecycle_msgs::msg::State m_goal_state;
        };
    } // namespace msg
} // namespace lifecycle_msgs

#endif // _FAST_DDS_GENERATED_LIFECYCLE_MSGS_MSG_TRANSITIONEVENT_H_