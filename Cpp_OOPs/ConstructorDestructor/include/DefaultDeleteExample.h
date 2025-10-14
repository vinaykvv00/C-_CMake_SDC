#pragma once
#include <iostream>

class DefaultDeleteExample {
public:

    DefaultDeleteExample() = default;   
    ~DefaultDeleteExample() = default;  

    DefaultDeleteExample(const DefaultDeleteExample&) = delete;

    void showMessage() const {
        std::cout << "This object is unique — cannot be copied or moved";
    }
};
