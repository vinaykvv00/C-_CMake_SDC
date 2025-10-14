#include "Circle.h"
#include <cmath>

Circle::Circle(double radius) : radius_{radius} {}

double Circle::area() const {
    return M_PI * radius_ * radius_;
}

double Circle::perimeter() const {
    return 2 * M_PI * radius_;
}

std::string Circle::name() const {
    return "Circle";
}
