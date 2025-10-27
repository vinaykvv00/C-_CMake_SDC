#pragma once
#include "Teacher.h"
#include "Student.h"
#include <vector>
#include <map>
#include <string>
#include <stdexcept>
#include <iostream>

class Course {
private:
    std::string courseName_;
    Teacher* teacher_;
    std::vector<Student*> students_;
    std::map<Student*, char> grades_;
public:
    Course(const std::string& courseName, Teacher* teacher);
    ~Course();
    void addStudent(Student *student);
    void assignGrade(Student* student, char grade);
    void displayCourseInfo() const;
};
