#include <iostream>
#include "ComplexNumber.h"

int main() {
    ComplexNumber c1(2.0, 3.0);
    ComplexNumber c2(1.5, 2.5);

    std::cout << "\nAddition result: ";
    ComplexNumber cAdd = c1 + c2; 
    cAdd.display();
    c1.operator+(c2);
    //c1.add(c2);
    //operator = we need to do it next
    std::cout << "\nMultiplication result: ";
    ComplexNumber cMul = c1 * c2; 
    cMul.display();

    return 0;
}
