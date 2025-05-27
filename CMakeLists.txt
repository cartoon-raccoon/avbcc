cmake_minimum_required(VERSION 3.10)
project(avbcc)

set(CMAKE_EXPORT_COMPILE_COMMANDS True)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

file(GLOB_RECURSE DRIVER_SRC "driver/*.cpp")
file(GLOB_RECURSE COMPILER_SRC "compiler/*.cpp")

add_executable(avbcc ${DRIVER_SRC} ${COMPILER_SRC})

target_include_directories(avbcc PUBLIC include)