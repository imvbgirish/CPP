# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/appTextField_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/appTextField_autogen.dir/ParseCache.txt"
  "appTextField_autogen"
  )
endif()
