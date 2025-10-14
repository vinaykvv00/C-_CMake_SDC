#include "Person.h"
#include "DefaultDeleteExample.h"
#include <iostream>

int main() {
    std::cout << "Constructor / Destructor Demo";
    Person p1;
    Person p2{"Alice", 25};
    Person p3{p2};

    std::cout << "-- Person Info --";
    p1.displayInfo();
    p2.displayInfo();
    p3.displayInfo();

    std::cout << "Default/Delete Demo:\n";
    DefaultDeleteExample d1;
    d1.showMessage();
    return 0;
}
