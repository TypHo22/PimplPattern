cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

add_definitions(-std=c++14)

set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")

project(pimpl_pattern)
include_directories(src)
# Executable for create matrix exercise
add_executable (pimpl_pattern src/main.cpp src/Implementation.cpp)

