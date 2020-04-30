cmake_minimum_required(VERSION 2.8.0)

project(vision_protobuf_models)

if (WIN32)
    set(CMAKE_INSTALL_PREFIX C:/dist/adlink)
endif (WIN32)
if (UNIX)
    set(CMAKE_INSTALL_PREFIX /opt/adlink/dist)
endif (UNIX)

string(REPLACE "_" "-" PROJECT_INSTALL_NAME ${PROJECT_NAME})
file(GLOB PROTO ${CMAKE_CURRENT_SOURCE_DIR}/*.proto)
install(FILES ${PROTO} DESTINATION etc/${PROJECT_INSTALL_NAME})
