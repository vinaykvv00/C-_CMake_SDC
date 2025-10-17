#include "Student.h"

Student::Student(const std::string& name, int age) : name_(name), age_(age) {
    std::cout << "Student constructor created with : " << name_ << "\n";
}

Student::~Student() {
    std::cout << "Student desrtuctor destroyed: " << name_ << "\n";
}

void Student::display() const {
    std::cout << "Name: " << name_ << ", Age: " << age_ << "\n";
}
