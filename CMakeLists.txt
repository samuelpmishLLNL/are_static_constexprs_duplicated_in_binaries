cmake_minimum_required(VERSION 3.16)
project(proj LANGUAGES C CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS 1)
set(CMAKE_CXX_STANDARD 11)

add_library(foo foo.cpp)
add_library(bar bar.cpp)
add_library(both foo.cpp bar.cpp)
