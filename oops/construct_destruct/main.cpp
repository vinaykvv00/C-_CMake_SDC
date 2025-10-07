#include "person.h"
#include <iostream>
using namespace std;

int main() {
    cout << "Creating person1 using default constructor..." << endl;
    Person person1;
    person1.displayInfo();

    cout << "\nCreating person2 using parameterized constructor..." << endl;
    Person person2("Alice", 25); 
    person2.displayInfo();

    cout << "\nExiting main..." << endl;
    return 0;
} 
