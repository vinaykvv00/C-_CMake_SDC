cmake_minimum_required(VERSION 3.10)
project(CppConceptsDemo)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(CppConceptsDemo
    main.cpp
    src/ConstInlineExplicit.cpp
    src/StaticConstexprAuto.cpp
)
