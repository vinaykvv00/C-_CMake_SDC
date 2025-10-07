#ifndef POLYMORPHISM_H
#define POLYMORPHISM_H

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Some generic animal sound" << endl;
    }
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks: Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows: Meow!" << endl;
    }
};

#endif
