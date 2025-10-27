#pragma once
#include <string>
#include <iostream>

class Person1 {
protected:
    std::string name_;
    int age_;
public:
    Person1(const std::string& name, int age);
    virtual ~Person1();
    virtual void displayInfo() const = 0;
};
