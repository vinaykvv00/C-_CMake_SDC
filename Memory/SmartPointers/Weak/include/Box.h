#ifndef BOX_H
#define BOX_H

#include <iostream>
#include <memory>

class Box {
public:
    Box(int size);
    ~Box();

    void setSize(int size);
    int getSize() const;

private:
    int size_;
};

#endif 
