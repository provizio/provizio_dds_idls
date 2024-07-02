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
 * @file Quaternion.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifndef _FAST_DDS_GENERATED_GEOMETRY_MSGS_MSG_QUATERNION_H_
#define _FAST_DDS_GENERATED_GEOMETRY_MSGS_MSG_QUATERNION_H_

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
#if defined(QUATERNION_SOURCE)
#define QUATERNION_DllAPI __declspec( dllexport )
#else
#define QUATERNION_DllAPI __declspec( dllimport )
#endif // QUATERNION_SOURCE
#else
#define QUATERNION_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define QUATERNION_DllAPI
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
         * @brief This class represents the structure Quaternion defined by the user in the IDL file.
         * @ingroup Quaternion
         */
        class Quaternion
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport Quaternion();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~Quaternion();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object geometry_msgs::msg::Quaternion that will be copied.
             */
            eProsima_user_DllExport Quaternion(
                    const Quaternion& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object geometry_msgs::msg::Quaternion that will be copied.
             */
            eProsima_user_DllExport Quaternion(
                    Quaternion&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object geometry_msgs::msg::Quaternion that will be copied.
             */
            eProsima_user_DllExport Quaternion& operator =(
                    const Quaternion& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object geometry_msgs::msg::Quaternion that will be copied.
             */
            eProsima_user_DllExport Quaternion& operator =(
                    Quaternion&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x geometry_msgs::msg::Quaternion object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const Quaternion& x) const;

            /*!
             * @brief Comparison operator.
             * @param x geometry_msgs::msg::Quaternion object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const Quaternion& x) const;

            /*!
             * @brief This function sets a value in member x
             * @param _x New value for member x
             */
            eProsima_user_DllExport void x(
                    double _x);

            /*!
             * @brief This function returns the value of member x
             * @return Value of member x
             */
            eProsima_user_DllExport double x() const;

            /*!
             * @brief This function returns a reference to member x
             * @return Reference to member x
             */
            eProsima_user_DllExport double& x();


            /*!
             * @brief This function sets a value in member y
             * @param _y New value for member y
             */
            eProsima_user_DllExport void y(
                    double _y);

            /*!
             * @brief This function returns the value of member y
             * @return Value of member y
             */
            eProsima_user_DllExport double y() const;

            /*!
             * @brief This function returns a reference to member y
             * @return Reference to member y
             */
            eProsima_user_DllExport double& y();


            /*!
             * @brief This function sets a value in member z
             * @param _z New value for member z
             */
            eProsima_user_DllExport void z(
                    double _z);

            /*!
             * @brief This function returns the value of member z
             * @return Value of member z
             */
            eProsima_user_DllExport double z() const;

            /*!
             * @brief This function returns a reference to member z
             * @return Reference to member z
             */
            eProsima_user_DllExport double& z();


            /*!
             * @brief This function sets a value in member w
             * @param _w New value for member w
             */
            eProsima_user_DllExport void w(
                    double _w);

            /*!
             * @brief This function returns the value of member w
             * @return Value of member w
             */
            eProsima_user_DllExport double w() const;

            /*!
             * @brief This function returns a reference to member w
             * @return Reference to member w
             */
            eProsima_user_DllExport double& w();

        private:

            double m_x{0.0};
            double m_y{0.0};
            double m_z{0.0};
            double m_w{1.0};

        };
    } // namespace msg
} // namespace geometry_msgs

#endif // _FAST_DDS_GENERATED_GEOMETRY_MSGS_MSG_QUATERNION_H_

