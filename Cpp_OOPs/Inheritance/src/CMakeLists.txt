add_library(AnimalLib Animal.cpp Dog.cpp)
target_include_directories(AnimalLib PUBLIC ${PROJECT_SOURCE_DIR}/include)