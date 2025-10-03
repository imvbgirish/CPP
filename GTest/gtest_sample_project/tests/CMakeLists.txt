
add_executable(unit_tests math_utils_test.cpp fixture_test.cpp param_test.cpp)
target_link_libraries(unit_tests PRIVATE gtest_main math_utils)
include(GoogleTest)
gtest_discover_tests(unit_tests)
