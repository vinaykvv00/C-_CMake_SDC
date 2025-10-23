#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <stdexcept>

class Calculator {
public:
    Calculator() = default;
    ~Calculator() = default;

    double divide(double a, double b);
    double getSquareRoot(double value);
    int getArrayElement(int index);
};

#endif
