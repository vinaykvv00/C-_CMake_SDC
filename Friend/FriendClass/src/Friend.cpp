#include "Friend.h"
#include <iostream>


Friend::Friend() {
    std::cout << "GFG object created.\n";
}

Friend::~Friend() {
    std::cout << "GFG object destroyed.\n";
}

void Friend::Display(const Geeks& obj) const {
    std::cout << "Private Variable  = " << obj.privateVariable_ << std::endl;
    std::cout << "Protected Variable = " << obj.protectedVariable_ << std::endl;
}
