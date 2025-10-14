#include <iostream>
#include "Calculator.h"

int main() {
    Calculator calc;

    int intResult = calc.add(100, 150);
    std::cout << intResult << std::endl;

    double doubleResult = calc.addDouble(13.5, 12.1);
    std::cout << doubleResult << std::endl;
    return 0;
}
