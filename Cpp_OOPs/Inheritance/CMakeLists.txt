cmake_minimum_required(VERSION 3.10)
project(InheritanceProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(src)

add_executable(InheritanceDemo main.cpp)
target_link_libraries(InheritanceDemo PRIVATE AnimalLib)
target_include_directories(InheritanceDemo PRIVATE ${PROJECT_SOURCE_DIR}/include)