#include "./include/Class_3.h"
#include <iostream>

int main() {
    {
        Class_3 classroom("Alice", 20);
        classroom.showStudent();
        classroom.showObserverStatus();
    } 
    std::cout << "After classroom block ends:\n";
    return 0;
}
