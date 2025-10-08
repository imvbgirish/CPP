cmake_minimum_required(VERSION 3.16)

project(WithoutObjectHeapAllocation LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(WithoutObjectHeapAllocation main.cpp)

include(GNUInstallDirs)
install(TARGETS WithoutObjectHeapAllocation
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
