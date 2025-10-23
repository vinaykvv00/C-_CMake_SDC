#include "ClassRoom.h"
#include <iostream>

Classroom::Classroom(const std::string& studentName, int studentAge) {
    std::cout << "Classroom constructor called.\n";

    //student = new Student(studentName, studentAge);
    // student = std::make_unique<Student>(studentName, studentAge);
    student = std::make_shared<Student>(studentName, studentAge);
    std::cout << "Student created inside Classroom constructor.\n";
}

Classroom::Classroom(const Classroom& other) : student(other.student) {
    std::cout << "Classroom copy constructor called.\n";
    std::cout << "use_count after copy = " << student.use_count() << "\n";
}

Classroom::~Classroom() {
    std::cout << "Classroom destructor called.\n";

    // delete student_;
    // student_ = nullptr;
    std::cout << "Student deleted inside Classroom destructor.\n";
    std::cout << "use_count before destruction = " << (student ? student.use_count() : 0) << "\n";

}

void Classroom::showStudent() const {
    if (student) {
        std::cout << "Displaying student info:\n";
        student->display();
    } else {
        std::cout << "No student available.\n";
    }
}
