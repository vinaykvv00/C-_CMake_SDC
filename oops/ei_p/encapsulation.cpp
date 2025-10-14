#include "encapsulation.h"

void Student::setData(int age, double marks)
{
    age_ = age;
    marks_ = marks;
}

int Student::getAge()
{
    return age_;
}

double Student::getMarks()
{
    return marks_;
}