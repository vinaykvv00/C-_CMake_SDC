cmake_minimum_required(VERSION 3.10)
project(STLSetDemo)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(STLSetDemo
    main.cpp
    src/SetExample.cpp
)
