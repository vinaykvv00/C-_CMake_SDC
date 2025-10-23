#include "./include/Student_3.h"
#include <iostream>

Student_3::Student_3(const std::string& name, int age) : name_(name), age_(age) {
    std::cout << "Student created: " << name_ << "\n";
}

Student_3::~Student_3() {
    std::cout << "Student destroyed: " << name_ << "\n";
}

void Student_3::display() const {
    std::cout << "Name: " << name_ << ", Age: " << age_ << "\n";
}
