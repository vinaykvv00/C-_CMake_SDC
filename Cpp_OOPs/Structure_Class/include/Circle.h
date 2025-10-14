#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"
#include <iostream>
#include <cmath>

class Circle {
private:
    Point center_;   
    double radius_;  

public:

    Circle();
    Circle(const Point& c, double r);
    Circle(const Circle&) = default;

    ~Circle();

    Point getCenter() const;
    double getRadius() const;
    double getArea() const;
    void display() const;
};

#endif
