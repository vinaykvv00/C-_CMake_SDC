#ifndef DEEP_HPP
#define DEEP_HPP

#include <iostream>

class Deep {
public:
    Deep(int value);
    Deep(const Deep& other);
    Deep& operator=(const Deep& other);
    ~Deep();

    void set(int value);
    int get() const;

private:
    int* data_; 
};

#endif 
