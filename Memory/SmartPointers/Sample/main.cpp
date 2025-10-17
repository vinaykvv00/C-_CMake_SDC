#include "Student.h"
#include "Classroom.h"
#include <iostream>
#include <memory>

int main() {

    {
        Classroom classroom("Alice", 20);
        classroom.showStudent();
    } 

    {
        std::unique_ptr<Student> s1 = std::make_unique<Student>("Bob", 21);
        s1->display(); 
    } 

    {
        std::shared_ptr<Student> s2 = std::make_shared<Student>("Charlie", 22);
        std::shared_ptr<Student> s3 = s2; 
        s2->display();
        s3->display();
        std::cout << "Reference count: " << s3.use_count() << "\n";
    }
    return 0;
}
