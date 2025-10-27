#include "Student.h"
#include <stdexcept>
#include <iostream>

Student::Student(const std::string& name, int age, int rollNumber) : Person(name, age), rollNumber_(rollNumber) {
    std::cout << "Student Constructor called for: " << name_ << std::endl;
}

Student::~Student() {
    std::cout << "Student Destructor called for: " << name_ << std::endl;
}

void Student::assignGrade(const std::string& courseName, char grade) {
    if (grade < 'A' || grade > 'F') {
        throw std::invalid_argument("Invalid grade, grade  Must be  A-F.");
    }
    grades_[courseName] = grade;
}

void Student::displayInfo() const {
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
