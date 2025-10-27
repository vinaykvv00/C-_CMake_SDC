#pragma once
#include "Teacher1.h"
#include "Student1.h"
#include <vector>
#include <map>
#include <string>
#include <stdexcept>
#include <iostream>
#include <memory>

class Course1 {
private:
    std::string courseName_;
    std::unique_ptr<Teacher1> teacher_;
    std::vector<std::shared_ptr<Student1>> students_;
    std::map<std::shared_ptr<Student1>, char> grades_;

public:
    Course1(const std::string& courseName, std::unique_ptr<Teacher1> teacher);
    ~Course1();

    void addStudent(std::shared_ptr<Student1> student);
    void assignGrade(std::shared_ptr<Student1> student, char grade);
    void displayCourseInfo() const;
};
