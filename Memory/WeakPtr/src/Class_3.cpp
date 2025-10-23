#include "./include/Class_3.h"
#include <iostream>

Class_3::Class_3(const std::string& studentName, int studentAge) {
    std::cout << "Class_3 constructor called.\n";
    student = std::make_shared<Student_3>(studentName, studentAge);
    observer = student; 
    std::cout << "Student_3 created and observer set.\n";
}

Class_3::~Class_3() {
    std::cout << "Class_3 destructor called.\n";
}

void Class_3::showStudent() const {
    if (student) {
        std::cout << "Displaying student info:\n";
        student->display();
        std::cout << "use_count = " << student.use_count() << "\n";
    } else {
        std::cout << "No student available.\n";
    }
}

void Class_3::showObserverStatus() const {
    std::cout << "Observer expired? " << observer.expired() << "\n";
    auto locked = observer.lock();
    std::cout<<"locked use_count = "<< (locked ? locked.use_count() : 0) <<"\n";
    if (locked) {
        std::cout << "Observer can access student:\n";
        locked->display();
    } else {
        std::cout << "Observer cannot access student (object destroyed).\n";
    }
}
