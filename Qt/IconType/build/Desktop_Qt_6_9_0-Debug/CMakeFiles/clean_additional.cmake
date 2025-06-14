# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/appIconType_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/appIconType_autogen.dir/ParseCache.txt"
  "appIconType_autogen"
  )
endif()
