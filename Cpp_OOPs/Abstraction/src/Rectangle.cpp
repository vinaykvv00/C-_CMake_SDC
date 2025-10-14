#include "Rectangle.h"

Rectangle::Rectangle(double length, double width) : height_{length}, width_{width} {}

double Rectangle::area() const {
    return height_ * width_;
}

double Rectangle::perimeter() const {
    return 2 * (height_ + width_);
}

std::string Rectangle::name() const {
    return "Rectangle";
}
