cmake_minimum_required(VERSION 3.10)
project(InheritanceDemo)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

file(GLOB SRC_FILES src/*.cpp)

add_executable(InheritanceDemo main.cpp ${SRC_FILES})
