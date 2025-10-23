#pragma once
#include <string>

class Student_3 {
private:
    std::string name_;
    int age_;
public:
    Student_3(const std::string& name, int age);
    ~Student_3();
    void display() const;
};
