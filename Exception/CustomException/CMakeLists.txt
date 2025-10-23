cmake_minimum_required(VERSION 3.10)
project(CustomExceptionDemo)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(CustomExceptionDemo
    main.cpp
    src/BankAccount.cpp
    src/CustomError.cpp
)
