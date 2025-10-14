#pragma once
#include <iostream>
#include <string>

class Person {
private:
    std::string name_;
    int age_{};

public:
    Person();
    Person(const std::string& name, int age);
    Person(const Person& other);
    ~Person();

    void displayInfo() const;
};
