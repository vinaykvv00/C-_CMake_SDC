cmake_minimum_required(VERSION 3.10)
project(StructAndClassDemo)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(StructAndClassDemo
    main.cpp
    src/Point.cpp
    src/Circle.cpp
)
