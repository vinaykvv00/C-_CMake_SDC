#include "Person.h"

Person::Person() : name_{"Unknown"}, age_{0} {
    std::cout << "Default constructor called for " << name_ << std::endl;
}

Person::Person(const std::string& name, int age) : name_{name}, age_{age} {
    std::cout << "Parameterized constructor called for " << name_ << std::endl;
}

Person::Person(const Person& other) : name_{other.name_}, age_{other.age_} {
    std::cout << "Copy constructor called for " << name_ << std::endl;
}

Person::~Person() {
    std::cout << "Destructor called for " << name_ << std::endl;
}

void Person::displayInfo() const {
    std::cout << "Name: " << name_ << ", Age: " << age_ << std::endl;
}
