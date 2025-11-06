cmake_minimum_required(VERSION 3.10)
project(CalculatorProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

add_library(calculator src/Calculator.cpp)

add_executable(main_app main.cpp)
target_link_libraries(main_app calculator)

enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(runTests test/TestCalculator.cpp)
target_link_libraries(runTests calculator ${GTEST_LIBRARIES} gtest_main pthread)
add_test(NAME CalculatorTests COMMAND runTests)

