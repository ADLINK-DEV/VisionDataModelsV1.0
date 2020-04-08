cmake_minimum_required(VERSION 2.8.0)

project(vision_data_river_config_gen)

if (WIN32)
    set(CMAKE_INSTALL_PREFIX C:/dist/adlink)
endif (WIN32)
if (UNIX)
    set(CMAKE_INSTALL_PREFIX /opt/adlink/dist)
endif (UNIX)

install(DIRECTORY scripts DESTINATION etc/vision-data-river)
