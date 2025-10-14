#include "PrivateInheritance.h"
#include <iostream>

PrivateInheritance::PrivateInheritance()
{
    std::cout << "PrivateInheritance Constructor called\n";
}

PrivateInheritance::~PrivateInheritance()
{
    std::cout << "PrivateInheritance Destructor called\n";
}

void PrivateInheritance::display() const
{
    std::cout << "\n Private Inheritance \n";
    std::cout << "Accessing publicValue_ (now private): " << publicValue_ << '\n';
    std::cout << "Accessing protectedValue_ (now private): " << protectedValue_ << '\n';
    std::cout << "Accessing privateValue_ via getter: " << getPrivateValue() << '\n';
}

