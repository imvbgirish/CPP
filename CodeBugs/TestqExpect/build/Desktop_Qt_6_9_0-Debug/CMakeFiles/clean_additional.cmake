# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "BugReproTest_autogen"
  "CMakeFiles/BugReproTest_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/BugReproTest_autogen.dir/ParseCache.txt"
  )
endif()
