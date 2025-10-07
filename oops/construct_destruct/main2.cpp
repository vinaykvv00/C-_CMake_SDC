#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person() {
        name = "Unknown";
        age = 0;
        cout << "Default constructor called for " << name << endl;
    }

    Person(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized constructor called for " << name << endl;
    }

    ~Person() {
        cout << "Destructor called for " << name << endl;
    }

    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    cout << "--- Stack Object ---" << endl;
    Person p1("StackPerson", 20);  // constructor called
    p1.displayInfo();
    // Destructor called automatically when p1 goes out of scope

    cout << "\n--- Heap Object ---" << endl;
    Person* p2 = new Person("HeapPerson", 30);  // constructor called
    p2->displayInfo();

    delete p2;  // destructor called manually
    p2 = nullptr;

    return 0;
}
