#include "Department.h"

Department::Department(const std::string& deptName) : deptName_(deptName) {
    std::cout << "Department Constructor called for: " << deptName_ << std::endl;
}

Department::~Department() {
    std::cout << "Department Destructor called for: " << deptName_ << std::endl;
}

void Department::addCourse(Course* course) {
    courses_.push_back(course);
}

void Department::displayDepartmentInfo() const {
    std::cout << "Department: " << deptName_ << std::endl;
    std::cout << "---------------------------------" << std::endl;
    for (auto* course : courses_) {
        course->displayCourseInfo();
        std::cout << std::endl;
    }
}
