cmake_minimum_required(VERSION 3.10)
project(DeepCopyDemo)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(DeepCopyDemo
    main.cpp
    src/Deep.cpp
)
