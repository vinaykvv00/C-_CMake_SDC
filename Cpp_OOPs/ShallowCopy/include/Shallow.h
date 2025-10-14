#ifndef SHALLOW_HPP
#define SHALLOW_HPP

#include <iostream>

class Shallow {
public:
    Shallow(int value);
    ~Shallow();

    void set(int value);
    int get() const;

private:
    int* data_; 
};

#endif 
