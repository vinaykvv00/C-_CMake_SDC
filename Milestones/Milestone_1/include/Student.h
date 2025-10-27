#pragma once
#include "Person.h"
#include <map>
#include <string>

class Student : public Person {
private:
    int rollNumber_;
    std::map<std::string, char> grades_; 
public:
    Student(const std::string& name, int age, int rollNumber);
    ~Student() override;
    void assignGrade(const std::string& courseName, char grade);
    void displayInfo() const override;
};
