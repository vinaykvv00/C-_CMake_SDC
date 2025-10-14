cmake_minimum_required(VERSION 3.10)
project(FunctionOverloadingExample)

set(CMAKE_CXX_STANDARD 17)

# Include directories
include_directories(include)

# Add executable
add_executable(FunctionOverloadingExample
    main.cpp
    src/Calculator.cpp
)
