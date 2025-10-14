#include "MathCalculator.h"

namespace Math {

Calculator::Calculator() : lastResult_(0.0) {
    std::cout << "[Math::Calculator] Constructor called\n";
}

Calculator::~Calculator() {
    std::cout << "[Math::Calculator] Destructor called\n";
}

double Calculator::add(double a, double b) {
    lastResult_ = a + b;
    return lastResult_;
}

double Calculator::multiply(double a, double b) {
    lastResult_ = a * b;
    return lastResult_;
}

double Calculator::getLastResult() const {
    return lastResult_;
}

}

