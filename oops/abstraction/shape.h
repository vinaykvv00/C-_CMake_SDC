#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;
//this is === abstract class
class Shape {
public:
    virtual void draw() = 0; // Pure virtual function → abstraction
    virtual double area() = 0;

    void description() {
        cout << "Shapes have area and can be drawn...!k3ok0zk32" << endl;
    }

    virtual ~Shape() {} 
};

#endif
