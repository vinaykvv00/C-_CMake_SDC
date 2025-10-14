cmake_minimum_required(VERSION 3.10)
project(AbstractionProject VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(src)

add_executable(AbstractionDemo main.cpp)
target_link_libraries(AbstractionDemo PRIVATE ShapeLib)
target_include_directories(AbstractionDemo PRIVATE ${PROJECT_SOURCE_DIR}/include)
