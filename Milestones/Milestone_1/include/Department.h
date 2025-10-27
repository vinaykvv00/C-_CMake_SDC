#pragma once
#include "Course.h"
#include <list>
#include <string>
#include <iostream>

class Department {
private:
    std::string deptName_;
    std::list<Course*> courses_;
public:
    Department(const std::string& deptName);
    ~Department();
    void addCourse(Course* course);
    void displayDepartmentInfo() const;
};
