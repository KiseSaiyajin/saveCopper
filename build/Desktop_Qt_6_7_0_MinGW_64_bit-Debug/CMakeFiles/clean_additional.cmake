# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\saveCopper_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\saveCopper_autogen.dir\\ParseCache.txt"
  "saveCopper_autogen"
  )
endif()
