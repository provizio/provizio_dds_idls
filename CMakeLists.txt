cmake_minimum_required(VERSION 3.0.0)
project(provizio_dds_idls VERSION 1.0.0)

if(NOT SKIP_CODE_GENERATION)
    # Provizio IDLS
    set(PROVIZIO_IDLS_DIR "${CMAKE_SOURCE_DIR}/provizio")
    file(GLOB_RECURSE PROVIZIO_IDLS "${PROVIZIO_IDLS_DIR}/*.idl")

    # ROS IDLS
    set(ROS_IDLS_DIR "${CMAKE_SOURCE_DIR}/ros")
    file(GLOB_RECURSE ROS_IDLS "${ROS_IDLS_DIR}/*.idl")

    # DDS Code Generation
    if(WIN32)
        set(FASTDDSGEN_COMMAND "fastddsgen.bat")
    else(WIN32)
        set(FASTDDSGEN_COMMAND "fastddsgen")
    endif(WIN32)

    set(GENERATED_CPP_DIR "${CMAKE_CURRENT_SOURCE_DIR}/${PROJECT_NAME}_fastdds_cpp")
    file(REMOVE_RECURSE "${GENERATED_CPP_DIR}")
    file(MAKE_DIRECTORY "${GENERATED_CPP_DIR}")
    set(GENERATED_PYTHON_DIR "${CMAKE_CURRENT_SOURCE_DIR}/${PROJECT_NAME}_fastdds_python")
    file(REMOVE_RECURSE "${GENERATED_PYTHON_DIR}")
    file(MAKE_DIRECTORY "${GENERATED_PYTHON_DIR}")

    # Generate C++
    set(TMP_CPP_DIR "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}_tmp_cpp")
    file(MAKE_DIRECTORY "${TMP_CPP_DIR}")
    execute_process(COMMAND
        "${FASTDDSGEN_COMMAND}" -I "${ROS_IDLS_DIR}" -I "${CMAKE_SOURCE_DIR}" -replace -typeros2 -cs -d "${TMP_CPP_DIR}" ${PROVIZIO_IDLS} ${ROS_IDLS}
    )

    # TODO: Generate Python (fastddsgen currently doesn't support modules for python types)

    # Copy Provizio artifacts to designated folders
    file(GLOB_RECURSE PROVIZIO_DIRS LIST_DIRECTORIES true RELATIVE "${CMAKE_SOURCE_DIR}" "${PROVIZIO_IDLS_DIR}/*")
    foreach(DIR ${PROVIZIO_DIRS})
        if(IS_DIRECTORY "${CMAKE_SOURCE_DIR}/${DIR}")
            set(OUT_DIR "${GENERATED_CPP_DIR}/${DIR}")
            file(MAKE_DIRECTORY "${OUT_DIR}")

            file(GLOB IDLS RELATIVE "${CMAKE_SOURCE_DIR}/${DIR}" "${CMAKE_SOURCE_DIR}/${DIR}/*.idl")
            foreach(IDL ${IDLS})
                string(REGEX REPLACE "\\.[^.]*$" "" IDL_NO_EXT ${IDL})
                set(BASE_FILE_NAME "${TMP_CPP_DIR}/${IDL_NO_EXT}")
                file(COPY "${BASE_FILE_NAME}.h" "${BASE_FILE_NAME}.cxx" DESTINATION "${OUT_DIR}")
                if(EXISTS "${BASE_FILE_NAME}PubSubTypes.h")
                    file(COPY "${BASE_FILE_NAME}PubSubTypes.h" "${BASE_FILE_NAME}PubSubTypes.cxx" DESTINATION "${OUT_DIR}")
                endif(EXISTS "${BASE_FILE_NAME}PubSubTypes.h")
            endforeach(IDL ${IDLS})
        endif(IS_DIRECTORY "${CMAKE_SOURCE_DIR}/${DIR}")
    endforeach(DIR ${ROS_DIRS})

    # Copy ROS artifacts to designated folders
    file(GLOB_RECURSE ROS_DIRS LIST_DIRECTORIES true RELATIVE "${ROS_IDLS_DIR}" "${ROS_IDLS_DIR}/*")
    foreach(DIR ${ROS_DIRS})
        if(IS_DIRECTORY "${ROS_IDLS_DIR}/${DIR}")
            set(OUT_DIR "${GENERATED_CPP_DIR}/${DIR}")
            file(MAKE_DIRECTORY "${OUT_DIR}")

            file(GLOB IDLS RELATIVE "${ROS_IDLS_DIR}/${DIR}" "${ROS_IDLS_DIR}/${DIR}/*.idl")
            foreach(IDL ${IDLS})
                string(REGEX REPLACE "\\.[^.]*$" "" IDL_NO_EXT ${IDL})
                set(BASE_FILE_NAME "${TMP_CPP_DIR}/${IDL_NO_EXT}")
                file(COPY "${BASE_FILE_NAME}.h" "${BASE_FILE_NAME}.cxx" "${BASE_FILE_NAME}PubSubTypes.h" "${BASE_FILE_NAME}PubSubTypes.cxx" DESTINATION "${OUT_DIR}")
            endforeach(IDL ${IDLS})
        endif(IS_DIRECTORY "${ROS_IDLS_DIR}/${DIR}")
    endforeach(DIR ${ROS_DIRS})
endif(NOT SKIP_CODE_GENERATION)
