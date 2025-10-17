#ifndef CLASSROOM_H
#define CLASSROOM_H
#include <memory>

#include "Student.h"

class Classroom {
private:
   // Student* student;  
    std::unique_ptr<Student> student;

public:
    Classroom(const std::string& studentName, int studentAge);
    ~Classroom();

    void showStudent() const;
};

#endif
