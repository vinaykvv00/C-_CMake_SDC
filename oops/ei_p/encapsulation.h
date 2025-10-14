#ifndef ENCAPSULATION_H
#define ENCAPSULATION_H

class Student {
private:
    int age_;        
    double marks_;      

public:
    void setData(int age, double marks);
    int getAge();
    double getMarks();
};

#endif
