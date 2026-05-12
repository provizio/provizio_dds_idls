cmake_minimum_required(VERSION 3.5)
project(provizio_dds_idls VERSION 2.0.0)

if(NOT SKIP_CODE_GENERATION)
    # The pipeline is currently Linux-only: install_dependencies.sh is bash,
    # the PYTHONPATH construction below globs /opt/ros/* and joins with ':',
    # and rosidl_adapter ships only on ROS 2 Linux distros. Codegen on
    # Windows would silently miss every ROS .msg/.srv input and emit nothing
    # for them; bail out early with a clear message instead.
    if(WIN32)
        message(FATAL_ERROR
            "Code generation is not supported on Windows in this repository "
            "(rosidl_adapter pipeline assumes Linux paths and the bash "
            "install_dependencies.sh script). Pass -DSKIP_CODE_GENERATION=ON "
            "to consume the committed provizio_dds_idls_fastdds/ tree.")
    endif(WIN32)

    if(NOT ROS_PACKAGES)
        set(ROS_PACKAGES
            builtin_interfaces
            sensor_msgs
            std_msgs
            std_srvs
            nav_msgs
            geometry_msgs
            unique_identifier_msgs
        )
    endif(NOT ROS_PACKAGES)

    # Provizio types are now defined in ROS 2 .msg/.srv form and go through
    # the same pipeline as the stock ROS packages — see pipeline/idl_pipeline.py
    # and the PROCESSED_ROS_IDLS_DIR section below for details. PROVIZIO_IDLS
    # is populated after the pipeline runs (further down) by globbing the
    # cleaned output the pipeline emits for the "provizio" package.
    set(PROVIZIO_SOURCES_DIR "${CMAKE_SOURCE_DIR}/provizio")

    # ROS IDLs are derived from upstream ROS2 .msg/.srv source files via
    # rosidl_adapter, followed by six post-process passes (strip @verbatim,
    # fix case-collision fields for PascalCase types, fix keyword-collision
    # fields for primitive types, escape IDL-keyword struct names, uniquify
    # primitive-array typedefs, add include guards). The output of that
    # pipeline is what fastddsgen actually consumes; the committed `ros/`
    # source tree contains only the .msg/.srv mirrors of upstream, untouched.
    # See pipeline/idl_pipeline.py for the full pass description.
    set(ROS_SOURCES_DIR "${CMAKE_SOURCE_DIR}/ros")
    set(PROCESSED_ROS_IDLS_DIR "${CMAKE_CURRENT_BINARY_DIR}/processed_ros_idls")

    find_package(Python3 REQUIRED COMPONENTS Interpreter)

    set(_PIPELINE_PACKAGE_ARGS)
    foreach(ROS_PACKAGE ${ROS_PACKAGES})
        list(APPEND _PIPELINE_PACKAGE_ARGS
            "--package" "${ROS_PACKAGE}=${ROS_SOURCES_DIR}/${ROS_PACKAGE}")
    endforeach(ROS_PACKAGE ${ROS_PACKAGES})
    # Provizio types use the same pipeline.
    list(APPEND _PIPELINE_PACKAGE_ARGS
        "--package" "provizio=${PROVIZIO_SOURCES_DIR}")

    # rosidl_adapter is installed by the ROS 2 apt package and lives under
    # /opt/ros/<distro>/lib/python*/site-packages. empy (its templating
    # backend) is python3-empy from Debian and lives at /usr/lib/python3/
    # dist-packages. Neither of those is on the python3.12 default sys.path
    # on a vanilla Ubuntu, so we splice them via PYTHONPATH when launching
    # the pipeline. Every /opt/ros/* distro found on the host is added in
    # GLOB order; Python's import resolution picks the first directory that
    # provides each module. rosidl_adapter is functionally equivalent across
    # distros for our use (it's a build-time .msg/.srv -> .idl converter,
    # not a runtime library), so the choice between multiple distros is
    # benign — any one that satisfies the import is sufficient.
    set(_ROS_PYTHON_PATHS)
    file(GLOB _ROS_DISTRO_DIRS "/opt/ros/*")
    foreach(_DIR ${_ROS_DISTRO_DIRS})
        if(IS_DIRECTORY "${_DIR}")
            file(GLOB _SP "${_DIR}/lib/python*/site-packages")
            list(APPEND _ROS_PYTHON_PATHS ${_SP})
        endif()
    endforeach()
    list(APPEND _ROS_PYTHON_PATHS "/usr/lib/python3/dist-packages")
    set(_PIPELINE_PYTHONPATH "$ENV{PYTHONPATH}")
    foreach(_PATH ${_ROS_PYTHON_PATHS})
        if(_PIPELINE_PYTHONPATH STREQUAL "")
            set(_PIPELINE_PYTHONPATH "${_PATH}")
        else()
            set(_PIPELINE_PYTHONPATH "${_PIPELINE_PYTHONPATH}:${_PATH}")
        endif()
    endforeach()

    execute_process(
        COMMAND "${CMAKE_COMMAND}" -E env "PYTHONPATH=${_PIPELINE_PYTHONPATH}"
            "${Python3_EXECUTABLE}"
            "${CMAKE_CURRENT_SOURCE_DIR}/pipeline/idl_pipeline.py"
            --output-dir "${PROCESSED_ROS_IDLS_DIR}"
            ${_PIPELINE_PACKAGE_ARGS}
        RESULT_VARIABLE _PIPELINE_RESULT
    )
    if(_PIPELINE_RESULT)
        message(FATAL_ERROR
            "ros .msg/.srv -> .idl pipeline failed. Make sure rosidl_adapter "
            "and empy are importable. The codegen workflow installs them via "
            ".github/workflows/install_dependencies.sh; locally, install the "
            "ROS 2 distro's rosidl-adapter package (e.g. "
            "`apt install ros-jazzy-rosidl-adapter python3-empy`) or source "
            "/opt/ros/<distro>/setup.bash before invoking cmake.")
    endif(_PIPELINE_RESULT)

    set(ROS_IDLS_DIR "${PROCESSED_ROS_IDLS_DIR}")
    set(ROS_IDLS)
    foreach(ROS_PACKAGE ${ROS_PACKAGES})
        file(GLOB_RECURSE _ROS_IDLS "${ROS_IDLS_DIR}/${ROS_PACKAGE}/*.idl")
        list(APPEND ROS_IDLS ${_ROS_IDLS})
    endforeach(ROS_PACKAGE ${ROS_PACKAGES})

    # Collect the cleaned Provizio IDLs from the pipeline output. They share
    # the same post-processing as ROS types (which means @verbatim stripping,
    # cross-type field-name escape, etc.) — see pipeline/idl_pipeline.py.
    set(PROVIZIO_IDLS_DIR "${PROCESSED_ROS_IDLS_DIR}/provizio")
    file(GLOB_RECURSE PROVIZIO_IDLS "${PROVIZIO_IDLS_DIR}/*.idl")

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
    # Fast-DDS-Gen v4 (paired with Fast-DDS 3.x) emits .hpp instead of .h, plus
    # *TypeObjectSupport.hpp/.cxx files (XTypes 1.3 type registry). The -typeros2
    # flag preserves the legacy "<package>::msg::dds_::<Type>_" topic-type name,
    # so wire compatibility with ROS2 publishers and pre-3.x Provizio firmware
    # is maintained.
    execute_process(COMMAND
        "${FASTDDSGEN_COMMAND}" -I "${ROS_IDLS_DIR}" -I "${CMAKE_SOURCE_DIR}" -de final -replace -typeros2 -python -d "${TMP_GEN_DIR}" ${PROVIZIO_IDLS} ${ROS_IDLS}
        RESULT_VARIABLE FASTDDSGEN_RESULT
    )

    if(FASTDDSGEN_RESULT)
        message(FATAL_ERROR "code generation failed!")
    endif(FASTDDSGEN_RESULT)

    # Mirror the cleaned .idl tree back into the source layout so downstream
    # consumers (e.g. apt_gui's MCAP omgidl schema map generator) can read the
    # IDL text without having to run rosidl_adapter themselves. Same gating
    # as the rest of codegen: re-emitted only when SKIP_CODE_GENERATION is off,
    # consumed via the committed copy otherwise.
    set(_PROCESSED_IDLS_SRC_DIR "${CMAKE_SOURCE_DIR}/processed_idls")
    file(REMOVE_RECURSE "${_PROCESSED_IDLS_SRC_DIR}")
    file(MAKE_DIRECTORY "${_PROCESSED_IDLS_SRC_DIR}")
    file(GLOB_RECURSE _PROCESSED_IDLS_REL RELATIVE "${PROCESSED_ROS_IDLS_DIR}"
        "${PROCESSED_ROS_IDLS_DIR}/*.idl")
    foreach(_REL ${_PROCESSED_IDLS_REL})
        get_filename_component(_SUBDIR "${_REL}" DIRECTORY)
        file(MAKE_DIRECTORY "${_PROCESSED_IDLS_SRC_DIR}/${_SUBDIR}")
        file(COPY "${PROCESSED_ROS_IDLS_DIR}/${_REL}"
            DESTINATION "${_PROCESSED_IDLS_SRC_DIR}/${_SUBDIR}")
    endforeach()

    # fastddsgen mirrors the include-path-relative source layout in its output:
    # because our ROS .idl inputs live under ${PROCESSED_ROS_IDLS_DIR} and are
    # also reachable through "-I ${PROCESSED_ROS_IDLS_DIR}", every generated
    # .hpp/.cxx for a ROS type ends up nested under
    # ${TMP_GEN_DIR}/processed_ros_idls/<pkg>/<subdir>/. The downstream copy
    # loop here expects flat output (e.g. ${TMP_GEN_DIR}/Header.hpp), as
    # produced for the absolute-path Provizio inputs. Flatten the nested
    # tree by moving every file up to ${TMP_GEN_DIR} preserving only filenames.
    # Basename collisions across the nested tree (e.g., a Provizio type and a
    # ROS type sharing a stem, as previously happened with set_radar_range)
    # would silently overwrite — fail loudly instead so the conflict surfaces
    # at codegen time rather than producing a corrupted output tree.
    set(_NESTED_ROOT "${TMP_GEN_DIR}/processed_ros_idls")
    if(IS_DIRECTORY "${_NESTED_ROOT}")
        file(GLOB_RECURSE _NESTED_FILES LIST_DIRECTORIES false
            "${_NESTED_ROOT}/*")
        foreach(_F ${_NESTED_FILES})
            get_filename_component(_BASENAME "${_F}" NAME)
            set(_DEST "${TMP_GEN_DIR}/${_BASENAME}")
            if(EXISTS "${_DEST}")
                message(FATAL_ERROR
                    "Flatten step: basename collision on ${_BASENAME} "
                    "(would overwrite ${_DEST} with ${_F}). Two source IDLs "
                    "share a filename stem across packages — rename one of "
                    "them, or extend the flatten step to namespace by package.")
            endif()
            file(RENAME "${_F}" "${_DEST}")
        endforeach()
        file(REMOVE_RECURSE "${_NESTED_ROOT}")
    endif()

    # Post-codegen: fix five fastddsgen v4.x bugs in *TypeObjectSupport.cxx output:
    # (1) typedef PlacementKindValue doesn't exist in Fast-DDS 3.x — use enum class PlacementKind
    # (2) bare BEFORE_DECLARATION etc. need PlacementKind:: scoping
    # (3) @verbatim string literals get an extra leading double-quote in C++ source
    # (4) @verbatim text strings containing escaped quotes are mis-terminated.
    #     Since these are documentation metadata (not functional for type
    #     registration), replace all text_X / language_X assignments with empty
    #     strings to avoid the fastddsgen string-escaping bug entirely.
    file(GLOB_RECURSE _GENERATED_TOS "${TMP_GEN_DIR}/*TypeObjectSupport.cxx")
    foreach(_TOS_FILE ${_GENERATED_TOS})
        file(READ "${_TOS_FILE}" _TOS_CONTENT)
        string(REPLACE "PlacementKindValue" "PlacementKind" _TOS_CONTENT "${_TOS_CONTENT}")
        foreach(_KIND BEFORE_DECLARATION AFTER_DECLARATION BEGIN_FILE END_FILE)
            string(REGEX REPLACE "([^:_A-Za-z0-9])${_KIND}([^_A-Za-z0-9])"
                "\\1PlacementKind::${_KIND}\\2" _TOS_CONTENT "${_TOS_CONTENT}")
        endforeach()
        string(REPLACE "\"\"" "\"" _TOS_CONTENT "${_TOS_CONTENT}")
        # Replace all (text|language)_<NAME> = "..."; assignments with empty strings.
        # MULTILINE-aware regex via [^;\n]* to stay on one line.
        string(REGEX REPLACE "([ \t]+)((text|language)_[A-Za-z0-9_]+)([ \t]*)=[^;]*;"
            "\\1\\2\\4= \"\";" _TOS_CONTENT "${_TOS_CONTENT}")
        # (5) fastddsgen emits register_<typename>_type_identifier with external
        # linkage, but for typedef arrays of primitives (e.g., double[9] in
        # NavSatFix's position_covariance and CameraInfo's K matrix) the same
        # function name appears across multiple TUs, causing multiple-
        # definition link errors. Mark only those primitive-array registrations
        # inline; leave message-type registrations with external linkage so
        # they remain exported from the resulting shared library.
        string(REGEX REPLACE "(^|\n)void register_(double|float|int8|int16|int32|int64|uint8|uint16|uint32|uint64|boolean|octet|long|short|char|wchar|string|wstring)__([0-9_]+)_type_identifier\\("
            "\\1inline void register_\\2__\\3_type_identifier(" _TOS_CONTENT "${_TOS_CONTENT}")
        file(WRITE "${_TOS_FILE}" "${_TOS_CONTENT}")
    endforeach()

    # Copy generated artifacts to their <pkg>/<sub>/ destinations under
    # provizio_dds_idls_fastdds/. Driven by the pipeline's .idl output tree:
    # every .idl under ${PROCESSED_ROS_IDLS_DIR} has a matching set of nine
    # fastddsgen output files in ${TMP_GEN_DIR} (flattened above), and we
    # mirror the .idl's relative subdirectory into the destination.
    file(GLOB_RECURSE _ALL_IDLS_REL RELATIVE "${PROCESSED_ROS_IDLS_DIR}"
        "${PROCESSED_ROS_IDLS_DIR}/*.idl")
    foreach(_REL ${_ALL_IDLS_REL})
        get_filename_component(_SUBDIR "${_REL}" DIRECTORY)
        get_filename_component(_BASENAME "${_REL}" NAME_WE)
        set(_OUT_DIR "${GENERATED_DIR}/${_SUBDIR}")
        file(MAKE_DIRECTORY "${_OUT_DIR}")
        set(_BASE "${TMP_GEN_DIR}/${_BASENAME}")
        file(COPY
            "${_BASE}.hpp"
            "${_BASE}PubSubTypes.hpp"
            "${_BASE}PubSubTypes.cxx"
            "${_BASE}TypeObjectSupport.hpp"
            "${_BASE}TypeObjectSupport.cxx"
            "${_BASE}.i"
            "${_BASE}PubSubTypes.i"
            "${_BASE}CdrAux.hpp"
            "${_BASE}CdrAux.ipp"
            DESTINATION "${_OUT_DIR}")
    endforeach()
endif(NOT SKIP_CODE_GENERATION)
