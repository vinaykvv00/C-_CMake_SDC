#pragma once
#include <iostream>
#include <memory>
#include <vector>

class SafeExample {
public:
    SafeExample();
    ~SafeExample();

    void nullPointerSafe();
    void outOfBoundsSafe();
    void useAfterDeleteSafe();
};
