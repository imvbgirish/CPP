cmake_minimum_required(VERSION 3.16)

project(CallFuncWithoutObj LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(CallFuncWithoutObj main.cpp
    myclass.h myclass.cpp)

include(GNUInstallDirs)
install(TARGETS CallFuncWithoutObj
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
