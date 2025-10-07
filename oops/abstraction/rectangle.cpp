#include "rectangle.h"
#include <iostream>
using namespace std;

void Rectangle::draw() {
    cout << "Drawing a rectangle with width " << width 
         << " and height " << height << endl;
}

double Rectangle::area() {
    return width * height;
}
