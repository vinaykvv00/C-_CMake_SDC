#include <iostream>
using namespace std;

class Deep {
private:
    int* data;

public:
    Deep(int value) {
        data = new int;
        *data = value;
        cout << "Constructor called, value = " << *data << endl;
    }

    // Deep copy constructor
    Deep(const Deep& d) {
        data = new int;        // allocate new memory
        *data = *(d.data);     // copy value
        cout << "Deep copy constructor called" << endl;
    }

    void setValue(int value) { *data = value; }
    void display() { cout << "Value = " << *data << endl; }

    ~Deep() {
        delete data;
        cout << "Destructor called" << endl;
    }
};

int main() {
    Deep obj1(10);
    Deep obj2 = obj1;  // deep copy

    cout << "Before changing obj2:" << endl;
    obj1.display();
    obj2.display();

    obj2.setValue(20);  // obj1 unaffected

    cout << "After changing obj2:" << endl;
    obj1.display();
    obj2.display();

    return 0;
}
