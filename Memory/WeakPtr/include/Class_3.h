#pragma once
#include <memory>
#include "Student_3.h"

class Class_3 {
private:
    std::shared_ptr<Student_3> student;
    std::weak_ptr<Student_3> observer;
public:
    Class_3(const std::string& studentName, int studentAge);
    ~Class_3();
    void showStudent() const;
    void showObserverStatus() const;
};
