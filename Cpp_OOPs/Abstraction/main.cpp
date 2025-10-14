#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include <iostream>
#include <memory>

int main() {

    std::unique_ptr<Shape> circle = std::make_unique<Circle>(5.0);
    std::unique_ptr<Shape> rectangle = std::make_unique<Rectangle>(4.0, 6.0);

    std::cout << circle->name() << " area: " << circle->area() << ", perimeter: " << circle->perimeter() << std::endl;

    std::cout << rectangle->name() << " area: " << rectangle->area() << ", perimeter: " << rectangle->perimeter() << std::endl;

    return 0;
}
