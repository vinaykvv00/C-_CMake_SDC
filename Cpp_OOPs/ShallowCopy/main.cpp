#include "Shallow.h"
#include <iostream>

int main() {
    Shallow a(42);          
    Shallow b = a;        

    std::cout << "Addresses:\n";
    std::cout << "  a.data_ and b.data_ point to same location!\n";

    std::cout << "Initial values:\n";
    std::cout << "  a: " << a.get() << ", b: " << b.get() << "\n";

    b.set(100); 
    std::cout << "\nAfter modifying b.Set(100):\n";
    std::cout << "  a: " << a.get() << ", b: " << b.get() << "\n";

    return 0;
}
