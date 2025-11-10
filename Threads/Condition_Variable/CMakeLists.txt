cmake_minimum_required(VERSION 3.16)

project(Condition_Variable LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Condition_Variable main.cpp)

include(GNUInstallDirs)
install(TARGETS Condition_Variable
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
