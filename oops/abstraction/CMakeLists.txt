cmake_minimum_required(VERSION 3.10)
project(AbstractionExample)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add executable
add_executable(main 
    main.cpp
    circle.cpp
    rectangle.cpp
)
