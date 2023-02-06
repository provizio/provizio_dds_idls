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
 * @file Mesh.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_SHAPE_MSGS_MSG_MESH_H_
#define _FAST_DDS_GENERATED_SHAPE_MSGS_MSG_MESH_H_

#include "MeshTriangle.h"
#include "geometry_msgs/msg/Point.h"

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
#if defined(Mesh_SOURCE)
#define Mesh_DllAPI __declspec( dllexport )
#else
#define Mesh_DllAPI __declspec( dllimport )
#endif // Mesh_SOURCE
#else
#define Mesh_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define Mesh_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace shape_msgs {
    namespace msg {
        /*!
         * @brief This class represents the structure Mesh defined by the user in the IDL file.
         * @ingroup MESH
         */
        class Mesh
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport Mesh();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~Mesh();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object shape_msgs::msg::Mesh that will be copied.
             */
            eProsima_user_DllExport Mesh(
                    const Mesh& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object shape_msgs::msg::Mesh that will be copied.
             */
            eProsima_user_DllExport Mesh(
                    Mesh&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object shape_msgs::msg::Mesh that will be copied.
             */
            eProsima_user_DllExport Mesh& operator =(
                    const Mesh& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object shape_msgs::msg::Mesh that will be copied.
             */
            eProsima_user_DllExport Mesh& operator =(
                    Mesh&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x shape_msgs::msg::Mesh object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const Mesh& x) const;

            /*!
             * @brief Comparison operator.
             * @param x shape_msgs::msg::Mesh object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const Mesh& x) const;

            /*!
             * @brief This function copies the value in member triangles
             * @param _triangles New value to be copied in member triangles
             */
            eProsima_user_DllExport void triangles(
                    const std::vector<shape_msgs::msg::MeshTriangle>& _triangles);

            /*!
             * @brief This function moves the value in member triangles
             * @param _triangles New value to be moved in member triangles
             */
            eProsima_user_DllExport void triangles(
                    std::vector<shape_msgs::msg::MeshTriangle>&& _triangles);

            /*!
             * @brief This function returns a constant reference to member triangles
             * @return Constant reference to member triangles
             */
            eProsima_user_DllExport const std::vector<shape_msgs::msg::MeshTriangle>& triangles() const;

            /*!
             * @brief This function returns a reference to member triangles
             * @return Reference to member triangles
             */
            eProsima_user_DllExport std::vector<shape_msgs::msg::MeshTriangle>& triangles();
            /*!
             * @brief This function copies the value in member vertices
             * @param _vertices New value to be copied in member vertices
             */
            eProsima_user_DllExport void vertices(
                    const std::vector<geometry_msgs::msg::Point>& _vertices);

            /*!
             * @brief This function moves the value in member vertices
             * @param _vertices New value to be moved in member vertices
             */
            eProsima_user_DllExport void vertices(
                    std::vector<geometry_msgs::msg::Point>&& _vertices);

            /*!
             * @brief This function returns a constant reference to member vertices
             * @return Constant reference to member vertices
             */
            eProsima_user_DllExport const std::vector<geometry_msgs::msg::Point>& vertices() const;

            /*!
             * @brief This function returns a reference to member vertices
             * @return Reference to member vertices
             */
            eProsima_user_DllExport std::vector<geometry_msgs::msg::Point>& vertices();

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
                    const shape_msgs::msg::Mesh& data,
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

            std::vector<shape_msgs::msg::MeshTriangle> m_triangles;
            std::vector<geometry_msgs::msg::Point> m_vertices;
        };
    } // namespace msg
} // namespace shape_msgs

#endif // _FAST_DDS_GENERATED_SHAPE_MSGS_MSG_MESH_H_