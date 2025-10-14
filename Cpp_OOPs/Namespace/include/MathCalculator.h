#pragma once
#include <iostream>

namespace Math {

class Calculator {
private:
    double lastResult_;

public:

    Calculator();
    ~Calculator();

    double add(double a, double b);
    double multiply(double a, double b);
    double getLastResult() const;
};

}