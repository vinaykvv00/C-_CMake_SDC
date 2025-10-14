#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    
    void draw() override;
    double area() override;
};

#endif
