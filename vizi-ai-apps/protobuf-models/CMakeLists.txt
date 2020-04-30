cmake_minimum_required(VERSION 2.8.0)

project(vision_protobuf_data_models)
enable_language(CXX)

if (WIN32)
    set(CMAKE_INSTALL_PREFIX C:/dist/adlink)
	set(PROTOBUF_HOME C:/dist/protobuf)
endif (WIN32)
if (UNIX)
    set(CMAKE_INSTALL_PREFIX /opt/adlink/dist)
	set(PROTOBUF_HOME /opt/oasys/protobuf)
endif (UNIX)

# Find source files
if (WIN32)
    file(GLOB SOURCES src/*.cc)
endif (WIN32)
if (UNIX)
    file(GLOB SOURCES src/*.cpp)
endif (UNIX)

# Environments
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Include header files
include_directories(include)
include_directories(include/vision-protobuf-data-models)
include_directories(${PROTOBUF_HOME}/include)
# Build Options
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if (WIN32)
    set(CompilerFlags
            CMAKE_CXX_FLAGS
            CMAKE_CXX_FLAGS_DEBUG
            CMAKE_CXX_FLAGS_RELEASE
            CMAKE_CXX_FLAGS_MINSIZEREL
            CMAKE_CXX_FLAGS_RELWITHDEBINFO
            CMAKE_C_FLAGS
            CMAKE_C_FLAGS_DEBUG
            CMAKE_C_FLAGS_RELEASE
            CMAKE_C_FLAGS_MINSIZEREL
            CMAKE_C_FLAGS_RELWITHDEBINFO
            )
    foreach(CompilerFlag ${CompilerFlags})
        string(REPLACE "/MD" "/MT" ${CompilerFlag} "${${CompilerFlag}}")
        set(${CompilerFlag} "${${CompilerFlag}}" CACHE STRING "msvc compiler flags" FORCE)
        message("MSVC flags: ${CompilerFlag}:${${CompilerFlag}}")
    endforeach()
endif (WIN32)

# LIBPATH
link_directories(/opt/oasys/protobuf/lib)
link_directories(/opt/oasys/gstreamer/lib)

# Create shared library
if (WIN32)
    add_library(${PROJECT_NAME} STATIC ${SOURCES})
endif (WIN32)
if (UNIX)
    add_library(${PROJECT_NAME} SHARED ${SOURCES})
    set_target_properties(${PROJECT_NAME} PROPERTIES LINKER_LANGUAGE CXX)
endif (UNIX)

# Linking
target_link_libraries(${PROJECT_NAME} protobuf)
target_link_libraries(${PROJECT_NAME} z)

# Install library
install(TARGETS ${PROJECT_NAME} DESTINATION lib)

# Install library headers
string(REPLACE "_" "-" PROJECT_HEADER_NAME ${PROJECT_NAME})
file(GLOB HEADERS include/${PROJECT_HEADER_NAME}/*.h)
install(FILES ${HEADERS} DESTINATION include/${PROJECT_HEADER_NAME})
