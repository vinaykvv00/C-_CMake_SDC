#include "Circle.h"
#include <iostream>

Circle::Circle() : center_(0, 0), radius_(1.0) {
    std::cout << "Circle Default constructor called\n";
}

Circle::Circle(const Point& c, double r) : center_(c), radius_(r) {
    std::cout << "Circle Parameterized constructor called\n";
}

Circle::~Circle() {
    std::cout << "Circle Destructor called\n";
}

Point Circle::getCenter() const {
    return center_;
}

double Circle::getRadius() const {
    return radius_;
}

double Circle::getArea() const {
    return M_PI * radius_ * radius_;
}

void Circle::display() const {
    std::cout << "Circle Info:\n";
    std::cout << "  Center: ";
    center_.display();
    std::cout << "  Radius: " << radius_ << "\n";
    std::cout << "  Area: " << getArea() << "\n";
}
