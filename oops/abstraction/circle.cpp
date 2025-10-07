#include "circle.h"
#include <cmath>

void Circle::draw() {
    cout<<"Drawing Circle: with radius:"<<radius<<endl;
}

double Circle::area() {
    return M_PI * radius * radius;
}