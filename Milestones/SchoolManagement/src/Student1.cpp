#include "Student1.h"
#include <stdexcept>
#include <iostream>

Student1::Student1(const std::string& name, int age, int rollNumber) : Person1(name, age), rollNumber_(rollNumber) {
    std::cout << "Student Constructor called for: " << name_ << std::endl;
}

Student1::~Student1() {
    std::cout << "Student Destructor called for: " << name_ << std::endl;
}

void Student1::assignGrade(const std::string& courseName, char grade) {
    if (grade < 'A' || grade > 'F') {
        throw std::invalid_argument("Invalid grade, grade  Must be  A-F.");
    }
    grades_[courseName] = grade;
}

void Student1::displayInfo() const {
    std::cout << "Student Name: " << name_ 
              << ", Age: " << age_ 
              << ", Roll No: " << rollNumber_ << std::endl;
    if (!grades_.empty()) {
        std::cout << "Grades: ";
        for (const auto& pair : grades_) {
            std::cout << pair.first << "=" << pair.second << " ";
        }
        std::cout << std::endl;
    }
}
