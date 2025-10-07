#include <iostream>
#include <vector>
#include "encapsulation.h"
#include "inheritence.h"
#include "poly.h"

using namespace std;

int main() {

    cout << "=== Encapsulation Example ===" << endl;
    Student s;
    s.setData(20, 88.5);
    cout << "Student Age: " << s.getAge() << endl;
    cout << "Student Marks: " << s.getMarks() << endl;

    cout << "\n=== Inheritance Example ===" << endl;
    Car myCar;
    myCar.fuelType();  // inherited from Vehicle
    myCar.brand();     // Car own method

    cout << "\n=== Polymorphism Example ===" << endl;
    vector<Animal*> animals;
    animals.push_back(new Dog());
    animals.push_back(new Cat());

    for (auto a : animals) {
        a->sound();  // runtime polymorphism
    }

    // cleanup
    for (auto a : animals) delete a;

    return 0;
}
