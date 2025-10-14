add_library(DemoLib
    Person.cpp
    DefaultDeleteExample.cpp
)

target_include_directories(DemoLib PUBLIC ${PROJECT_SOURCE_DIR}/include)
