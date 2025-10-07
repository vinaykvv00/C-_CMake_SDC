#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:

    Person();
    Person(string personName, int personAge);
    ~Person();

    void displayInfo() const;
};

#endif
