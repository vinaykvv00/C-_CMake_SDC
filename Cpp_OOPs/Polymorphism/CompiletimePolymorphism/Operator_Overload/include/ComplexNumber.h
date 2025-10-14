#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

#include <iostream>

class ComplexNumber {
public:

    ComplexNumber(double real = 0.0, double imag = 0.0);
    ~ComplexNumber();

    ComplexNumber operator+(const ComplexNumber& other) const;
    ComplexNumber operator*(const ComplexNumber& other) const;

    void display() const;

private:
    double real_;
    double imag_;
};

#endif 
