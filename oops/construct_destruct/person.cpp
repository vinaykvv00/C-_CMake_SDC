#include "person.h"
#include <iostream>
using namespace std;


Person::Person() {
    name = "Unknown";
    age = 0;
    cout << "Default constructor called" << endl;
}


Person::Person(string personName, int personAge) {
    name = personName;
    age = personAge;
    cout << "Parameterized constructor called" << endl;
}


Person::~Person() {
    cout << "Destructor called for: " << name << endl;
}


void Person::displayInfo() const {
    cout << "Name: " << name << ", Age: " << age << endl;
}
