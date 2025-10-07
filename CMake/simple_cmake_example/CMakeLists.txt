cmake_minimum_required(VERSION 3.10)
project(SimpleCmakeExample)

add_subdirectory(include)
add_subdirectory(src)

option(BUILD_EXAMPLE "Build OR NOT TO the example executable" ON)

if(BUILD_EXAMPLE)
    message(STATUS "Building the example executable....")
    add_subdirectory(example)
endif()
    