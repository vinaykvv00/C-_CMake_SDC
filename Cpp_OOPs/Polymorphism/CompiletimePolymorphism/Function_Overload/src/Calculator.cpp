#include "Calculator.h"

Calculator::Calculator() : lastResult_(0) {
    std::cout << "Calculator initialized." << std::endl;
}

Calculator::~Calculator() {
    std::cout << "Calculator destroyed." << std::endl;
}

int Calculator::add(int number1, int number2) const {
    std::cout << "Adding integers: " << number1 << " + " << number2 << " = ";
    return number1 + number2;
}

double Calculator::addDouble(double number1, double number2) const {
    std::cout << "Adding doubles: " << number1 << " + " << number2 << " = ";
    return number1 + number2;
}