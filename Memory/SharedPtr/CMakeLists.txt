cmake_minimum_required(VERSION 3.10)
project(SharedPointerClassroomDemo)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)
add_executable(SharedPointerClassroomDemo main.cpp src/Student.cpp src/Classroom.cpp)
