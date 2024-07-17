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
 * @file UInt16MultiArray.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifndef _FAST_DDS_GENERATED_STD_MSGS_MSG_UINT16MULTIARRAY_H_
#define _FAST_DDS_GENERATED_STD_MSGS_MSG_UINT16MULTIARRAY_H_

#include <array>
#include <bitset>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

#include <fastcdr/cdr/fixed_size_string.hpp>
#include <fastcdr/xcdr/optional.hpp>

#include "MultiArrayLayout.h"


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
#if defined(UINT16MULTIARRAY_SOURCE)
#define UINT16MULTIARRAY_DllAPI __declspec( dllexport )
#else
#define UINT16MULTIARRAY_DllAPI __declspec( dllimport )
#endif // UINT16MULTIARRAY_SOURCE
#else
#define UINT16MULTIARRAY_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define UINT16MULTIARRAY_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
class CdrSizeCalculator;
} // namespace fastcdr
} // namespace eprosima



namespace std_msgs {
    namespace msg {
        /*!
         * @brief This class represents the structure UInt16MultiArray defined by the user in the IDL file.
         * @ingroup UInt16MultiArray
         */
        class UInt16MultiArray
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport UInt16MultiArray();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~UInt16MultiArray();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object std_msgs::msg::UInt16MultiArray that will be copied.
             */
            eProsima_user_DllExport UInt16MultiArray(
                    const UInt16MultiArray& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object std_msgs::msg::UInt16MultiArray that will be copied.
             */
            eProsima_user_DllExport UInt16MultiArray(
                    UInt16MultiArray&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object std_msgs::msg::UInt16MultiArray that will be copied.
             */
            eProsima_user_DllExport UInt16MultiArray& operator =(
                    const UInt16MultiArray& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object std_msgs::msg::UInt16MultiArray that will be copied.
             */
            eProsima_user_DllExport UInt16MultiArray& operator =(
                    UInt16MultiArray&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x std_msgs::msg::UInt16MultiArray object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const UInt16MultiArray& x) const;

            /*!
             * @brief Comparison operator.
             * @param x std_msgs::msg::UInt16MultiArray object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const UInt16MultiArray& x) const;

            /*!
             * @brief This function copies the value in member layout
             * @param _layout New value to be copied in member layout
             */
            eProsima_user_DllExport void layout(
                    const std_msgs::msg::MultiArrayLayout& _layout);

            /*!
             * @brief This function moves the value in member layout
             * @param _layout New value to be moved in member layout
             */
            eProsima_user_DllExport void layout(
                    std_msgs::msg::MultiArrayLayout&& _layout);

            /*!
             * @brief This function returns a constant reference to member layout
             * @return Constant reference to member layout
             */
            eProsima_user_DllExport const std_msgs::msg::MultiArrayLayout& layout() const;

            /*!
             * @brief This function returns a reference to member layout
             * @return Reference to member layout
             */
            eProsima_user_DllExport std_msgs::msg::MultiArrayLayout& layout();


            /*!
             * @brief This function copies the value in member data
             * @param _data New value to be copied in member data
             */
            eProsima_user_DllExport void data(
                    const std::vector<uint16_t>& _data);

            /*!
             * @brief This function moves the value in member data
             * @param _data New value to be moved in member data
             */
            eProsima_user_DllExport void data(
                    std::vector<uint16_t>&& _data);

            /*!
             * @brief This function returns a constant reference to member data
             * @return Constant reference to member data
             */
            eProsima_user_DllExport const std::vector<uint16_t>& data() const;

            /*!
             * @brief This function returns a reference to member data
             * @return Reference to member data
             */
            eProsima_user_DllExport std::vector<uint16_t>& data();

        private:

            std_msgs::msg::MultiArrayLayout m_layout;
            std::vector<uint16_t> m_data;

        };
    } // namespace msg
} // namespace std_msgs

#endif // _FAST_DDS_GENERATED_STD_MSGS_MSG_UINT16MULTIARRAY_H_

