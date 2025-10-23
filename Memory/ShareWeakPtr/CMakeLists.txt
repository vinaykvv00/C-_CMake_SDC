cmake_minimum_required(VERSION 3.10)
project(SmartPointerDemo)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

add_executable(SmartPointerDemo
    main.cpp
    src/Demo.cpp
    src/Holder.cpp
)
