#include "Point.h"
#include <iostream>

Point::Point() : xValue_(0.0), yValue_(0.0) {
    std::cout << "Point Default constructor called\n";
}

Point::Point(double xValue, double yValue) : xValue_(xValue), yValue_(yValue) {
    std::cout << "Point Parameterized constructor called\n";
}

Point::~Point() {
    std::cout << "Point Destructor called for (" << xValue_ << ", " << yValue_ << ")\n";
}

void Point::display() const {
    std::cout << "Point(" << xValue_ << ", " << yValue_ << ")\n";
}
