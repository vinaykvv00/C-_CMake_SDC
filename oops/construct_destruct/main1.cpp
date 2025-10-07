#include <iostream>

using namespace std;

class A
{
public:
    A() {
        cout << "Constructor of A called" << endl;
    }
    ~A() {
        cout << "Destructor of A called" << endl;
    }
};

int main()
{
    cout << "Creating object of class A" << endl;
    A obj;  

    cout << "Exiting main function" << endl;
    return 0;  // Destructor is called here when obj goes out of scope
}
