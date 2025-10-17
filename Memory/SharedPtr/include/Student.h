#pragma once
#include <string>
#include <iostream>

class Student {
private:
    std::string name_;
    int age_;

public:
    Student(const std::string& name, int age);
    ~Student();

    void display() const;
};
