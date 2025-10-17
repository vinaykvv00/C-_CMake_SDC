#include "ClassRoom.h"
#include <iostream>

int main() {
    {
        Classroom c1("Alice", 20);
        c1.showStudent();

        {
            Classroom c2 = c1;
            std::cout << "\nAfter copying classroom:\n";
            c2.showStudent();
        } 

        std::cout << "\nAfter c2 block ends:\n";
        c1.showStudent();

        {
            std::shared_ptr<Student> sharedFromMain = c1.getStudent();
            std::cout << "\nExtra shared_ptr created in main.\n";
            std::cout << " use_count = " << sharedFromMain.use_count() << "\n";
        } 

        std::cout << "\nAfter sharedFromMain destroyed:\n";
        c1.showStudent();
    } 
    return 0;
}
