#ifndef POINT_H
#define POINT_H

#include <iostream>

struct Point {
    double xValue_;
    double yValue_;

    Point();
    Point(double xValue, double yValue);
    ~Point();

    void display() const;
};

#endif
