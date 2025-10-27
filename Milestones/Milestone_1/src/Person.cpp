#include "Person.h"

Person::Person(const std::string& name, int age) : name_(name), age_(age) {
    std::cout << "Person Constructor called for: " << name_ << std::endl;
}

Person::~Person() {
    std::cout << "Person Destructor called for: " << name_ << std::endl;
}
