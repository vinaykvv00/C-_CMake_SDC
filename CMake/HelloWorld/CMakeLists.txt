cmake_minimum_required(VERSION 3.12)
project(HelloWorld)

add_executable(hello src/main.cpp)

target_compile_features(hello PRIVATE cxx_std_17)