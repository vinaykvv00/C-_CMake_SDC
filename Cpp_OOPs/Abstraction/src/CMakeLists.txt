add_library(ShapeLib
    Shape.cpp
    Circle.cpp
    Rectangle.cpp
)

target_include_directories(ShapeLib PUBLIC ${PROJECT_SOURCE_DIR}/include)
