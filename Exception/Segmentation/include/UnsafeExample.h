#pragma once
#include <iostream>

class UnsafeExample {
public:
    UnsafeExample();
    ~UnsafeExample();

    void nullPointerDemo();
    void outOfBoundsDemo();
    void useAfterDeleteDemo();
};
