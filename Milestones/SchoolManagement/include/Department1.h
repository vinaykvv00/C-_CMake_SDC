#pragma once
#include "Course1.h"
#include <list>
#include <string>
#include <iostream>
#include <memory>

class Department1 {
private:
    std::string deptName_;
    std::list<std::unique_ptr<Course1>> courses_; 

public:
    Department1(const std::string& deptName);
    ~Department1();

    void addCourse(std::unique_ptr<Course1> course);
    void displayDepartmentInfo() const;
};
