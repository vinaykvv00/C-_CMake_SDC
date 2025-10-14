#pragma once
#include "Shape.h"

class Circle : public Shape
{
public:
    explicit Circle(double radius);
    Circle() = default;
    ~Circle() override = default;

    double area() const override;
    double perimeter() const override;
    std::string name() const override;
    
private:
    double radius_;
};