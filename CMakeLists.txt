cmake_minimum_required(VERSION 2.8)

project("l4")

if(UNIX)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-invalid-offsetof  -g -std=c++11")
endif()

include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include")

add_subdirectory("src")

install(DIRECTORY include/state DESTINATION include)


