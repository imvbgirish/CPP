# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/UndoStack_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/UndoStack_autogen.dir/ParseCache.txt"
  "UndoStack_autogen"
  )
endif()
