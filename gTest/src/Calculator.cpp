#include "Calculator.hpp"
#include <iostream>
#include <stdexcept>

Calculator::Calculator() : lastResult_(0.0) {
    std::cout << "Calculator initialized." << std::endl;
}

Calculator::~Calculator() {
    std::cout << "Calculator destroyed." << std::endl;  
}

double Calculator::add(double a, double b) {
    lastResult_ = a + b;
    return lastResult_;
}

double Calculator::subtract(double a, double b) {
    lastResult_ = a - b;
    return lastResult_;
}

double Calculator::multiply(double a, double b) {
    lastResult_ = a * b;
    return lastResult_;
}

double Calculator::divide(double a, double b) {
    if (b == 0)
        throw std::invalid_argument("Division by zero");
    lastResult_ = a / b;
    return lastResult_;
}

double Calculator::getLastResult() const {
    return lastResult_;
}
