#include "Course1.h"

Course1::Course1(const std::string& courseName, std::unique_ptr<Teacher1> teacher) : courseName_(courseName), teacher_(std::move(teacher)) {
    std::cout << "Course Constructor called for: " << courseName_ << std::endl;
}

Course1::~Course1() {
    std::cout << "Course Destructor called for: " << courseName_ << std::endl;
}

void Course1::addStudent(std::shared_ptr<Student1> student) {
    students_.push_back(student);
}

void Course1::assignGrade(std::shared_ptr<Student1> student, char grade) {
    if (grade < 'A' || grade > 'F') {
        throw std::invalid_argument("Invalid grade! Must be between A and F.");
    }
    grades_[student] = grade;
    student->assignGrade(courseName_, grade);
}

void Course1::displayCourseInfo() const {
    std::cout << "\nCourse: " << courseName_ << std::endl;
    std::cout << "Teacher: ";
    if (teacher_) {
        teacher_->displayInfo();
    }

    std::cout << "\nEnrolled Students:" << std::endl;
    for (const auto& s : students_) {
        s->displayInfo();
    }
}
