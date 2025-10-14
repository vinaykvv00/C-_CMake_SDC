cmake_minimum_required(VERSION 3.10)
project(EncapsulationProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(src)

add_executable(EncapsulationDemo main.cpp)
target_link_libraries(EncapsulationDemo PRIVATE ShapeLib)
target_include_directories(EncapsulationDemo PRIVATE ${PROJECT_SOURCE_DIR}/include)