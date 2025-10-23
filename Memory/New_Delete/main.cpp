#include "Student.h"
#include "ClassRoom.h"
#include <iostream>

int main() {

    {
        Classroom classroom("Alice", 20);
        classroom.showStudent();

        {
            Classroom classroom2 = classroom;
            std::cout << "After copying classroom:\n";
            classroom2.showStudent();
        }
        std::cout << "After classroom2 block ends:\n";
        classroom.showStudent();
    } 

    return 0;
}
