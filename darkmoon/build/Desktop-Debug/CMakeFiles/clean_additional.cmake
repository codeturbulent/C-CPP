# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/appdarkmoon_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/appdarkmoon_autogen.dir/ParseCache.txt"
  "appdarkmoon_autogen"
  )
endif()
