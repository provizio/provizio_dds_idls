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

    set(GENERATED_DIR "${CMAKE_CURRENT_SOURCE_DIR}/${PROJECT_NAME}_fastdds")
    file(REMOVE_RECURSE "${GENERATED_DIR}")
    file(MAKE_DIRECTORY "${GENERATED_DIR}")

    # Generate
    set(TMP_GEN_DIR "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}_tmp_gen")
    file(MAKE_DIRECTORY "${TMP_GEN_DIR}")
    execute_process(COMMAND
        "${FASTDDSGEN_COMMAND}" -I "${ROS_IDLS_DIR}" -I "${CMAKE_SOURCE_DIR}" -replace -typeros2 -cs -python -d "${TMP_GEN_DIR}" ${PROVIZIO_IDLS} ${ROS_IDLS}
    )

    # Copy artifacts to designated folders
    file(GLOB_RECURSE PROVIZIO_DIRS LIST_DIRECTORIES true RELATIVE "${CMAKE_SOURCE_DIR}" "${PROVIZIO_IDLS_DIR}/*")
    file(GLOB_RECURSE ROS_DIRS LIST_DIRECTORIES true RELATIVE "${ROS_IDLS_DIR}" "${ROS_IDLS_DIR}/*")
    set(IN_DIRS ${PROVIZIO_DIRS} ${ROS_DIRS})
    foreach(DIR ${IN_DIRS})
        if(IS_DIRECTORY "${CMAKE_SOURCE_DIR}/${DIR}" OR IS_DIRECTORY "${ROS_IDLS_DIR}/${DIR}")
            set(OUT_DIR "${GENERATED_DIR}/${DIR}")
            file(MAKE_DIRECTORY "${OUT_DIR}")

            file(GLOB IDLS RELATIVE "${CMAKE_SOURCE_DIR}/${DIR}" "${CMAKE_SOURCE_DIR}/${DIR}/*.idl")
            file(GLOB ROS_IDLS RELATIVE "${ROS_IDLS_DIR}/${DIR}" "${ROS_IDLS_DIR}/${DIR}/*.idl")
            foreach(IDL ${IDLS};${ROS_IDLS})
                string(REGEX REPLACE "\\.[^.]*$" "" IDL_NO_EXT ${IDL})
                set(BASE_FILE_NAME "${TMP_GEN_DIR}/${IDL_NO_EXT}")
                file(COPY "${BASE_FILE_NAME}.h" "${BASE_FILE_NAME}.cxx" "${BASE_FILE_NAME}PubSubTypes.h" "${BASE_FILE_NAME}PubSubTypes.cxx" "${BASE_FILE_NAME}.i" "${BASE_FILE_NAME}PubSubTypes.i" DESTINATION "${OUT_DIR}")
            endforeach(IDL ${IDLS})
        endif(IS_DIRECTORY "${CMAKE_SOURCE_DIR}/${DIR}" OR IS_DIRECTORY "${ROS_IDLS_DIR}/${DIR}")
    endforeach(DIR ${ROS_DIRS})
endif(NOT SKIP_CODE_GENERATION)
