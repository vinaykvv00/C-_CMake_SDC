cmake_minimum_required(VERSION 3.10)
project(SegmentationFaultDemo)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(SegmentationFaultDemo
    main.cpp
    src/UnsafeExample.cpp
    src/SafeExample.cpp
)
