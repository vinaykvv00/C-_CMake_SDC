cmake_minimum_required(VERSION 3.10)
project(NewDeleteFullDemo)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(NewDelete
    main.cpp
    src/Student.cpp
    src/Classroom.cpp
)
