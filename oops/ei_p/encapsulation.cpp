#include "encapsulation.h"

void Student::setData(int a, double m)
{
    age = a;
    marks = m;
}

int Student::getAge()
{
    return age;
}

double Student::getMarks()
{
    return marks;
}