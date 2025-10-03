cmake_minimum_required(VERSION 3.16)

project(CalculatorTest LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(CalculatorTest main.cpp
    calculator.h calculator.cpp
    tst_addfunction.cpp)

# Include system headers
target_include_directories(CalculatorTest PRIVATE /usr/include/gtest /usr/include/gmock)

# Link libraries
target_link_libraries(CalculatorTest PRIVATE gtest gtest_main gmock pthread)

include(GNUInstallDirs)
install(TARGETS CalculatorTest
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
