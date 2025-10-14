#pragma once
#include "Shape.h"

class Rectangle : public Shape 
{
private:
    double width_;
    double height_;
public:
    Rectangle() = default;
    Rectangle(double width, double height);
    ~Rectangle() override = default;

    double area() const override;
    double perimeter() const override;
    std::string name() const override;
};