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
 * @file PointField.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifndef _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_POINTFIELD_H_
#define _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_POINTFIELD_H_

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
#if defined(POINTFIELD_SOURCE)
#define POINTFIELD_DllAPI __declspec( dllexport )
#else
#define POINTFIELD_DllAPI __declspec( dllimport )
#endif // POINTFIELD_SOURCE
#else
#define POINTFIELD_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define POINTFIELD_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
class CdrSizeCalculator;
} // namespace fastcdr
} // namespace eprosima



namespace sensor_msgs {
    namespace msg {
        namespace PointField_Constants {
            const uint8_t INT8 = 1;
            const uint8_t UINT8 = 2;
            const uint8_t INT16 = 3;
            const uint8_t UINT16 = 4;
            const uint8_t INT32 = 5;
            const uint8_t UINT32 = 6;
            const uint8_t FLOAT32 = 7;
            const uint8_t FLOAT64 = 8;
        } // namespace PointField_Constants
        /*!
         * @brief This class represents the structure PointField defined by the user in the IDL file.
         * @ingroup PointField
         */
        class PointField
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport PointField();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~PointField();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object sensor_msgs::msg::PointField that will be copied.
             */
            eProsima_user_DllExport PointField(
                    const PointField& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object sensor_msgs::msg::PointField that will be copied.
             */
            eProsima_user_DllExport PointField(
                    PointField&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object sensor_msgs::msg::PointField that will be copied.
             */
            eProsima_user_DllExport PointField& operator =(
                    const PointField& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object sensor_msgs::msg::PointField that will be copied.
             */
            eProsima_user_DllExport PointField& operator =(
                    PointField&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x sensor_msgs::msg::PointField object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const PointField& x) const;

            /*!
             * @brief Comparison operator.
             * @param x sensor_msgs::msg::PointField object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const PointField& x) const;

            /*!
             * @brief This function copies the value in member name
             * @param _name New value to be copied in member name
             */
            eProsima_user_DllExport void name(
                    const std::string& _name);

            /*!
             * @brief This function moves the value in member name
             * @param _name New value to be moved in member name
             */
            eProsima_user_DllExport void name(
                    std::string&& _name);

            /*!
             * @brief This function returns a constant reference to member name
             * @return Constant reference to member name
             */
            eProsima_user_DllExport const std::string& name() const;

            /*!
             * @brief This function returns a reference to member name
             * @return Reference to member name
             */
            eProsima_user_DllExport std::string& name();


            /*!
             * @brief This function sets a value in member offset
             * @param _offset New value for member offset
             */
            eProsima_user_DllExport void offset(
                    uint32_t _offset);

            /*!
             * @brief This function returns the value of member offset
             * @return Value of member offset
             */
            eProsima_user_DllExport uint32_t offset() const;

            /*!
             * @brief This function returns a reference to member offset
             * @return Reference to member offset
             */
            eProsima_user_DllExport uint32_t& offset();


            /*!
             * @brief This function sets a value in member datatype
             * @param _datatype New value for member datatype
             */
            eProsima_user_DllExport void datatype(
                    uint8_t _datatype);

            /*!
             * @brief This function returns the value of member datatype
             * @return Value of member datatype
             */
            eProsima_user_DllExport uint8_t datatype() const;

            /*!
             * @brief This function returns a reference to member datatype
             * @return Reference to member datatype
             */
            eProsima_user_DllExport uint8_t& datatype();


            /*!
             * @brief This function sets a value in member count
             * @param _count New value for member count
             */
            eProsima_user_DllExport void count(
                    uint32_t _count);

            /*!
             * @brief This function returns the value of member count
             * @return Value of member count
             */
            eProsima_user_DllExport uint32_t count() const;

            /*!
             * @brief This function returns a reference to member count
             * @return Reference to member count
             */
            eProsima_user_DllExport uint32_t& count();

        private:

            std::string m_name;
            uint32_t m_offset{0};
            uint8_t m_datatype{0};
            uint32_t m_count{0};

        };
    } // namespace msg
} // namespace sensor_msgs

#endif // _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_POINTFIELD_H_

