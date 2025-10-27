cmake_minimum_required(VERSION 3.16)
project(SchoolManagement)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(SchoolManagement
    main.cpp
    src/Person.cpp
    src/Student.cpp
    src/Teacher.cpp
    src/Course.cpp
    src/Department.cpp
)
