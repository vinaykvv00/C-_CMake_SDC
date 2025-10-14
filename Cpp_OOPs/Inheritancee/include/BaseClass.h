#pragma once
#include <iostream>

class BaseClass {
public:
    int publicValue_;
protected:
    int protectedValue_;
private:
    int privateValue_;

public:
    BaseClass();
    virtual ~BaseClass();

    int getPrivateValue() const;
    void showBaseValues() const;
};
