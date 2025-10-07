#include <iostream>
#include <vector>
#include "circle.h"
#include "rectangle.h"

using namespace std;

int main() {
    vector<Shape*> shapes;

    shapes.push_back(new Circle(5.0));
    shapes.push_back(new Rectangle(4.0, 6.0));

    for (auto shape : shapes) {
        shape->description();  // common function
        shape->draw();         // runtime polymorphism
        cout << "Area: " << shape->area() << endl << endl;
    }

    for (auto shape : shapes) 
    {
        delete shape;
    }

    return 0;
}
