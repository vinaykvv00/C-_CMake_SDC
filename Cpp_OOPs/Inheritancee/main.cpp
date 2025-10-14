#include <iostream>
#include "PublicInheritance.h"
#include "ProtectedInheritance.h"
#include "PrivateInheritance.h"

int main()
{
    std::cout << " Demonstration: Types of Inheritance in C++ \n";

    {
        std::cout << " Creating PublicInheritance object";
        PublicInheritance publicObj;
        publicObj.display();
        std::cout << "Accessing from main: publicObj.publicValue_ = " << publicObj.publicValue_ << '\n';
    } 

    {
        std::cout << "Creating ProtectedInheritance object \n";
        ProtectedInheritance protectedObj;
        protectedObj.display();
        // std::cout << protectedObj.publicValue_; // ERROR: became protected
    }

    {
        std::cout << "Creating PrivateInheritance object\n";
        PrivateInheritance privateObj;
        privateObj.display();
        // std::cout << privateObj.publicValue_; // ERROR: became private
    }
    return 0;
}
