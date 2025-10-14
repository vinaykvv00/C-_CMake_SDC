cmake_minimum_required(VERSION 3.10)
project(NamespaceDemo)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(NamespaceDemo
    main.cpp
    src/MathCalculator.cpp
    src/PhysicsCalculator.cpp
)
