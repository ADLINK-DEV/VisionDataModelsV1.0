cmake_minimum_required(VERSION 2.8.0)

project(vision_data_river)

if (WIN32)
    set(CMAKE_INSTALL_PREFIX C:/dist/adlink)
endif (WIN32)
if (UNIX)
    set(CMAKE_INSTALL_PREFIX /opt/adlink/dist)
endif (UNIX)

install(FILES thing-data-configs.h DESTINATION include/vision-data-river)
install(FILES thing-data-configs-linux.h DESTINATION include/vision-data-river)
install(FILES thing-data-configs-win.h DESTINATION include/vision-data-river)
install(FILES DataRiver.xml DESTINATION etc/vision-data-river/config)
install(DIRECTORY config DESTINATION etc/vision-data-river)
install(DIRECTORY definitions DESTINATION etc/vision-data-river)
