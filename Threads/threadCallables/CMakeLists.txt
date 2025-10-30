cmake_minimum_required(VERSION 3.16)

project(threadCallables LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(threadCallables main.cpp)

include(GNUInstallDirs)
install(TARGETS threadCallables
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
