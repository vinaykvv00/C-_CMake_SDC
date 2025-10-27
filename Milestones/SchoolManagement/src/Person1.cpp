#include "Person1.h"

Person1::Person1(const std::string& name, int age) : name_(name), age_(age) {
    std::cout << "Person Constructor called for: " << name_ << std::endl;
}

Person1::~Person1() {
    std::cout << "Person Destructor called for: " << name_ << std::endl;
}
