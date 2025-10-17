#include "Box.h"
#include <iostream>
#include <memory> 

int main() {
 
    std::shared_ptr<Box> b1 = std::make_shared<Box>(10, 20);
    std::cout << "b1 use_count: " << b1.use_count() << "\n"; 
    b1->showSize();

    std::shared_ptr<Box> b2 = b1;
    std::cout << "\nAfter copying b1 to b2:\n";
    std::cout << "b1 use_count: " << b1.use_count() << "\n"; 
    std::cout << "b2 use_count: " << b2.use_count() << "\n"; 
    b2->showSize();

    {
        std::shared_ptr<Box> b3 = b1;
        std::cout << "\nInside block scope b3 created :\n";
        std::cout << "b1 use_count: " << b1.use_count() << "\n"; 
        b3->showSize();
    } 

    std::cout << "\nAfter block scope ends:\n";
    std::cout << "b1 use_count: " << b1.use_count() << "\n"; 

    b2.reset(); 
    std::cout << "\nAfter resetting b2:\n";
    std::cout << "b1 use_count: " << b1.use_count() << "\n"; 
    return 0;
}
