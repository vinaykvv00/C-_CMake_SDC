#include "Teacher1.h"
#include <iostream>

Teacher1::Teacher1(const std::string& name, int age, const std::string& subject) : Person1(name, age), subject_(subject) {
    std::cout << "Teacher Constructor called for: " << name_ << std::endl;
}

Teacher1::~Teacher1() {
    std::cout << "Teacher Destructor called for: " << name_ << std::endl;
}

std::string Teacher1::getSubject() const {
    return subject_;
}

void Teacher1::displayInfo() const {
    std::cout << "Teacher Name: " << name_
              << ", Age: " << age_
              << ", Subject: " << subject_ << std::endl;
}
