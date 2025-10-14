#include "PhysicsCalculator.h"
#include <iostream>

namespace Physics {

Calculator::Calculator() : lastResult_(0.0) {
    std::cout << "[Physics::Calculator] Constructor called\n";
}

Calculator::~Calculator() {
    std::cout << "[Physics::Calculator] Destructor called\n";
}

double Calculator::add(double f1, double f2) {
    lastResult_ = f1 + f2;
    return lastResult_;
}

double Calculator::getLastResult() const {
    return lastResult_;
}

}
