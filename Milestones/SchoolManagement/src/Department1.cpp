#include "Department1.h"

Department1::Department1(const std::string& deptName) : deptName_(deptName) {
    std::cout << "Department Constructor called for: " << deptName_ << std::endl;
}

Department1::~Department1() {
    std::cout << "Department Destructor called for: " << deptName_ << std::endl;
}

void Department1::addCourse(std::unique_ptr<Course1> course) {
    courses_.push_back(std::move(course));
}

void Department1::displayDepartmentInfo() const {
    std::cout << "\nDepartment: " << deptName_ << std::endl;
    std::cout << "---------------------------------" << std::endl;

    for (const auto& course : courses_) {
        course->displayCourseInfo();
        std::cout << std::endl;
    }
}
