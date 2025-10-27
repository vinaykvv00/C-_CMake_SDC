#include "Course.h"

Course::Course(const std::string& courseName, Teacher* teacher) : courseName_(courseName), teacher_(teacher) {
    std::cout << "Course Constructor called for: " << courseName_ << std::endl;
}

Course::~Course() {
    std::cout << "Course Destructor called for: " << courseName_ << std::endl;
}

void Course::addStudent(Student* student) {
    students_.push_back(student);
}

void Course::assignGrade(Student* student, char grade) {
    if (grade < 'A' || grade > 'F') {
        throw std::invalid_argument("Invalid grade! Must be A-F.");
    }
    grades_[student] = grade;
    student->assignGrade(courseName_, grade);
}

void Course::displayCourseInfo() const {
    std::cout << "Course: " << courseName_ << std::endl;
    std::cout << "Teacher: ";
    if (teacher_) 
    {
        teacher_->displayInfo();
    }
    std::cout << "Enrolled Students: " << std::endl;
    for (auto* s : students_) {
        s->displayInfo();
    }
}
