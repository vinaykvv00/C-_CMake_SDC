#include "ClassRoom.h"
#include <iostream>

Classroom::Classroom(const std::string& studentName, int studentAge) {
    std::cout << "Classroom constructor called.\n";
    student = std::make_unique<Student>(studentName, studentAge);
    std::cout << "Student created inside Classroom constructor.\n";
}

Classroom::~Classroom() {
    std::cout << "Classroom destructor called.\n";
    std::cout << "Student deleted inside Classroom destructor.\n";
}

void Classroom::showStudent() const {
    if (student) {
        std::cout << "Displaying student info:\n";
        student->display();
    } else {
        std::cout << "No student available.\n";
    }
}
