#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <string>
#include <iostream>

class Calculator {
public:
    Calculator();
    ~Calculator();

    int add(int number1, int number2) const;
    double addDouble(double number1, double number2) const;

private:
    int lastResult_;
};

#endif
