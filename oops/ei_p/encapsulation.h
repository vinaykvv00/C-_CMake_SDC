#ifndef ENCAPSULATION_H
#define ENCAPSULATION_H

class Student {
private:
    int age;            // private → hidden
    double marks;       // private → hidden

public:
    void setData(int a, double m);
    int getAge();
    double getMarks();
};

#endif
