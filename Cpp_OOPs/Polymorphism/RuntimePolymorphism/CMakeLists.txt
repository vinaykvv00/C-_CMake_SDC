cmake_minimum_required(VERSION 3.10)
project(PolymorphismProject VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_subdirectory(src)

vadd_executable(PolymorphismDemo main.cpp)
target_link_libraries(PolymorphismDemo PRIVATE VehicleLib)
target_include_directories(PolymorphismDemo PRIVATE ${PROJECT_SOURCE_DIR}/include)
