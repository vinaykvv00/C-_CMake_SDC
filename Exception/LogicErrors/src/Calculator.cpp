#include "Calculator.h"
#include <cmath>
#include <array>

double Calculator::divide(double a, double b) {
    if (b == 0.0) {
        throw std::invalid_argument("Division by zero is not allowed.");
    }
    return a / b;
}

double Calculator::getSquareRoot(double value) {
    if (value < 0) {
        throw std::domain_error("Square root of a negative number is undefined.");
    }
    return std::sqrt(value);
}

int Calculator::getArrayElement(int index) {
    std::array<int, 5> arr = {10, 20, 30, 40, 50};
    if (index < 0 || index >= static_cast<int>(arr.size())) {
        throw std::out_of_range("Array index is out of valid range (0 - 4).");
    }
    return arr[index];
}
