#include "Teacher.h"
#include <iostream>

Teacher::Teacher(const std::string& name, int age, const std::string& subject) : Person(name, age), subject_(subject) {
    std::cout << "Teacher Constructor called for: " << name_ << std::endl;
}

Teacher::~Teacher() {
    std::cout << "Teacher Destructor called for: " << name_ << std::endl;
}

std::string Teacher::getSubject() const {
    return subject_;
}

void Teacher::displayInfo() const {
    std::cout << "Teacher Name: " << name_
              << ", Age: " << age_
              << ", Subject: " << subject_ << std::endl;
}
