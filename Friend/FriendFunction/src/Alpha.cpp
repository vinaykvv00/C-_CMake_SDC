#include "Alpha.h"
#include <iostream>

Alpha::Alpha(int value1, int value2, int value3) : privateValue_(value1), protectedValue_(value2), secretValue_(value3) {
    std::cout << "Alpha object created.\n";
}

Alpha::~Alpha() {
    std::cout << "Alpha object destroyed.\n";
}

void ShowAlphaValues(const Alpha& obj) {
    std::cout << "Accessing Alpha privateValue_: " << obj.privateValue_ << std::endl;
    std::cout << "Accessing Alpha protectedValue_: " << obj.protectedValue_ << std::endl;
    std::cout << "Accessing Alpha secretValue_: " << obj.secretValue_ << std::endl;
}
