cmake_minimum_required(VERSION 3.16)
project(SchoolManagement)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(SMS
    main.cpp
    src/Person1.cpp
    src/Student1.cpp
    src/Teacher1.cpp
    src/Course1.cpp
    src/Department1.cpp
)
