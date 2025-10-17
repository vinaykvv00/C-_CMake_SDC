#pragma once
#include <iostream>

class Box {
private:
    int width_;
    int height_;

public:
    Box(int width, int height);
    ~Box();

    void showSize() const;
};
