#include <iostream>
using namespace std;

class Shallow {
private:
    int* data;

public:
    Shallow(int value) {
        data = new int;
        *data = value;
        cout << "Constructor called, value = " << *data << endl;
    }

    //  (shallow copy)
    Shallow(const Shallow& s) {
        data = s.data;  // just copy pointer
        cout << "Shallow copy constructor called" << endl;
    }

    void setValue(int value) { *data = value; }
    void display() { cout << "Value = " << *data << endl; }

    ~Shallow() {
        delete data;  
        cout << "Destructor called" << endl;
    }
};

int main() {
    Shallow obj1(10);
    Shallow obj2 = obj1;  // shallow copy

    cout << "Before changing obj2:" << endl;
    obj1.display();
    obj2.display();

    obj2.setValue(20);  // changes obj1 too

    cout << "After changing obj2:" << endl;
    obj1.display();
    obj2.display();

    return 0;
}
