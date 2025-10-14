#include "Deep.h"
#include <iostream>

int main() {

    Deep a(42);        
    Deep b = a;    

    std::cout << "  address are differ ,they each own separate heap memory\n";
    std::cout << "\nInitial values:\n";
    std::cout << "  a: " << a.get() << ", b: " << b.get() << "\n";

    b.set(100); 
    std::cout << "\nAfter modifying b.Set(100):\n";
    std::cout << "  a: " << a.get() << ", b: " << b.get() << "\n";

    return 0;
}
