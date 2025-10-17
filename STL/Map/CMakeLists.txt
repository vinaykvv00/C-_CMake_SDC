cmake_minimum_required(VERSION 3.10)
project(MapDemo)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

add_executable(MapDemo
    main.cpp
    src/MapExample.cpp
)
