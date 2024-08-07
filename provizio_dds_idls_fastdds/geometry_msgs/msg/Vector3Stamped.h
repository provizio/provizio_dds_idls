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
 * @file Vector3Stamped.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifndef _FAST_DDS_GENERATED_GEOMETRY_MSGS_MSG_VECTOR3STAMPED_H_
#define _FAST_DDS_GENERATED_GEOMETRY_MSGS_MSG_VECTOR3STAMPED_H_

#include <array>
#include <bitset>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

#include <fastcdr/cdr/fixed_size_string.hpp>
#include <fastcdr/xcdr/optional.hpp>

#include "std_msgs/msg/Header.h"
#include "Vector3.h"


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
#if defined(VECTOR3STAMPED_SOURCE)
#define VECTOR3STAMPED_DllAPI __declspec( dllexport )
#else
#define VECTOR3STAMPED_DllAPI __declspec( dllimport )
#endif // VECTOR3STAMPED_SOURCE
#else
#define VECTOR3STAMPED_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define VECTOR3STAMPED_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
class CdrSizeCalculator;
} // namespace fastcdr
} // namespace eprosima



namespace geometry_msgs {
    namespace msg {
        /*!
         * @brief This class represents the structure Vector3Stamped defined by the user in the IDL file.
         * @ingroup Vector3Stamped
         */
        class Vector3Stamped
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport Vector3Stamped();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~Vector3Stamped();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object geometry_msgs::msg::Vector3Stamped that will be copied.
             */
            eProsima_user_DllExport Vector3Stamped(
                    const Vector3Stamped& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object geometry_msgs::msg::Vector3Stamped that will be copied.
             */
            eProsima_user_DllExport Vector3Stamped(
                    Vector3Stamped&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object geometry_msgs::msg::Vector3Stamped that will be copied.
             */
            eProsima_user_DllExport Vector3Stamped& operator =(
                    const Vector3Stamped& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object geometry_msgs::msg::Vector3Stamped that will be copied.
             */
            eProsima_user_DllExport Vector3Stamped& operator =(
                    Vector3Stamped&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x geometry_msgs::msg::Vector3Stamped object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const Vector3Stamped& x) const;

            /*!
             * @brief Comparison operator.
             * @param x geometry_msgs::msg::Vector3Stamped object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const Vector3Stamped& x) const;

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
             * @brief This function copies the value in member vector
             * @param _vector New value to be copied in member vector
             */
            eProsima_user_DllExport void vector(
                    const geometry_msgs::msg::Vector3& _vector);

            /*!
             * @brief This function moves the value in member vector
             * @param _vector New value to be moved in member vector
             */
            eProsima_user_DllExport void vector(
                    geometry_msgs::msg::Vector3&& _vector);

            /*!
             * @brief This function returns a constant reference to member vector
             * @return Constant reference to member vector
             */
            eProsima_user_DllExport const geometry_msgs::msg::Vector3& vector() const;

            /*!
             * @brief This function returns a reference to member vector
             * @return Reference to member vector
             */
            eProsima_user_DllExport geometry_msgs::msg::Vector3& vector();

        private:

            std_msgs::msg::Header m_header;
            geometry_msgs::msg::Vector3 m_vector;

        };
    } // namespace msg
} // namespace geometry_msgs

#endif // _FAST_DDS_GENERATED_GEOMETRY_MSGS_MSG_VECTOR3STAMPED_H_

