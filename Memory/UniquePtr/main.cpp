#include "Student.h"
#include "ClassRoom.h"
#include <iostream>

int main() {

    {
        Classroom classroom("Alice", 20);
        classroom.showStudent();
    } 

    return 0;
}
