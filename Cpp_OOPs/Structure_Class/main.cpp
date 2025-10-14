#include "Point.h"
#include "Circle.h"
#include <iostream>

int main() {

    Point p1(2.5, 3.5);
    std::cout << "Accessing struct members directly:\n";
    std::cout << "x = " << p1.xValue_ << ", y = " << p1.yValue_ << "\n\n";

    Point center(1.0, 2.0);
    Circle c1(center, 5.0);

    std::cout << "\nCircle details using methods:\n";
    c1.display();

    std::cout << "\nArea fetched via method: " << c1.getArea() << "\n";
    return 0;
}
