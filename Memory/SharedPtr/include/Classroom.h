#pragma once
#include <memory>
#include "Student.h"

class Classroom {
private:
    std::shared_ptr<Student> student;  

public:
    Classroom(const std::string& studentName, int studentAge);
    Classroom(const Classroom& other);  
    ~Classroom();

    void showStudent() const;
    std::shared_ptr<Student> getStudent() const;
};
