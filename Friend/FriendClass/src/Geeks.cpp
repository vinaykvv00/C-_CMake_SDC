#include "Geeks.h"
#include <iostream>


Geeks::Geeks() : privateVariable_(10), protectedVariable_(20) {
    std::cout << "Geeks object created.\n";
}

Geeks::~Geeks() {
    std::cout << "Geeks object destroyed.\n";
}
