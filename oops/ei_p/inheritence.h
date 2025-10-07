#ifndef INHERITANCE_H
#define INHERITANCE_H

#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    void fuelType() {
        cout << "Vehicle uses fuel" << endl;
    }
};

// Derived class
class Car : public Vehicle {
public:
    void brand() {
        cout << "Car brand is Tesla" << endl;
    }
};

#endif
