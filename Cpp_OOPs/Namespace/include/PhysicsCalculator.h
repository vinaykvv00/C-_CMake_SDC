#pragma once
#include <iostream>

namespace Physics {

class Calculator {
private:
    double lastResult_;

public:
    Calculator();
    ~Calculator();

    double add(double f1, double f2);
    double getLastResult() const;
};

} 
