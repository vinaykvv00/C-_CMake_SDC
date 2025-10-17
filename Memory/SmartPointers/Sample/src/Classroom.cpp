#include "Classroom.h"
#include <iostream>
#include <memory>

Classroom::Classroom(const std::string& name, int age) : student_(std::make_unique<Student>(name, age)) {  
    std::cout << "Classroom created with student.\n";
}

Classroom::~Classroom() {
    std::cout << "Classroom destroyed (Student auto-deleted by unique_ptr).\n";
}

void Classroom::showStudent() const {
    student_->display();
}
