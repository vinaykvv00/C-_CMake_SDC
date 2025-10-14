#include "PublicInheritance.h"
#include <iostream>

PublicInheritance::PublicInheritance()
{
    std::cout << "PublicInheritance Constructor called"<<std::endl;
}

PublicInheritance::~PublicInheritance()
{
    std::cout << "PublicInheritance Destructor called"<<std::endl;
}

void PublicInheritance::display() const
{
    std::cout << "\n Public Inheritance \n";
    std::cout << "Accessing publicValue_: " << publicValue_ << '\n';
    std::cout << "Accessing protectedValue_: " << protectedValue_ << '\n';
    std::cout << "Accessing privateValue_ via getter: " << getPrivateValue() << '\n';
}