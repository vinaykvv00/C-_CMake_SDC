#include "Beta.h"
#include <iostream>

Beta::Beta() {
    std::cout << "Beta object created.\n";
}

Beta::~Beta() {
    std::cout << "Beta object destroyed.\n";
}

void Beta::ShowAlphaSecret(const Alpha& obj) const {
    std::cout << "Accessing Alpha secretValue_ from Beta: " << obj.secretValue_ << std::endl;
    std::cout << "Also accessing Alpha privateValue_: " << obj.privateValue_ << std::endl;
}
