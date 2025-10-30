cmake_minimum_required(VERSION 3.16)

project(race_condition LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(race_condition main.cpp)

include(GNUInstallDirs)
install(TARGETS race_condition
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
