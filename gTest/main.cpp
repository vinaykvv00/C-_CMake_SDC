#include "Calculator.hpp"
#include <iostream>

int main() {
    Calculator calc;
    std::cout << "3 + 2 = " << calc.add(3, 2) << std::endl;
    return 0;
}
