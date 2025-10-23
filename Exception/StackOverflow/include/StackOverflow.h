#pragma once
#include <iostream>

class StackOverflow {
public:
    StackOverflow() = default;
    ~StackOverflow() = default;

    void causeStackOverflowRecursion();
    void causeStackOverflowLargeArray();
    void safeVersionRecursion(int n);
    void safeVersionLargeArray();
};
