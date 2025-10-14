#include "ProtectedInheritance.h"
#include <iostream>

ProtectedInheritance::ProtectedInheritance()
{
    std::cout << "ProtectedInheritance Constructor called\n";
}

ProtectedInheritance::~ProtectedInheritance()
{
    std::cout << "ProtectedInheritance Destructor called\n";
}

void ProtectedInheritance::display() const
{
    std::cout << "\n=== Protected Inheritance ===\n";
    std::cout << "Accessing publicValue_ now protected : " << publicValue_ << '\n';
    std::cout << "Accessing protectedValue_: " << protectedValue_ << '\n';
    std::cout << "Accessing privateValue_ via getter: " << getPrivateValue() << '\n';
}
