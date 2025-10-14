add_library(VehicleLib
    Vehicle.cpp
    Car.cpp
    Bike.cpp
)

target_include_directories(VehicleLib PUBLIC ${PROJECT_SOURCE_DIR}/include)
