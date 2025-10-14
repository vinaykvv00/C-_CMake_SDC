cmake_minimum_required(VERSION 3.10)
project(OperatorOverloadingExample)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(OperatorOverloadingExample
    main.cpp
    src/ComplexNumber.cpp
)
