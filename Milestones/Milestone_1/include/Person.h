#pragma once
#include <string>
#include <iostream>

class Person {
protected:
    std::string name_;
    int age_;
public:
    Person(const std::string& name, int age);
    virtual ~Person();
    virtual void displayInfo() const = 0;
};
