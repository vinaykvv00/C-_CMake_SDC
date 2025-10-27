#pragma once
#include "Person1.h"
#include <map>
#include <string>

class Student1 : public Person1 {
private:
    int rollNumber_;
    std::map<std::string, char> grades_; 
public:
    Student1(const std::string& name, int age, int rollNumber);
    ~Student1() override;
    void assignGrade(const std::string& courseName, char grade);
    void displayInfo() const override;
};
