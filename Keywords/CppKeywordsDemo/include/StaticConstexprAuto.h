#ifndef STATICCONSTEXPRAUTO_H
#define STATICCONSTEXPRAUTO_H

#include <iostream>

class StaticConstexprAuto {
public:
    StaticConstexprAuto(int x);
    ~StaticConstexprAuto();

    static void showInstanceCount();       
    static void resetInstanceCount();

    void demonstrateConstexpr() const;   
    void demonstrateAuto() const;          
    void demonstrateRangeBasedLoop() const;

private:
    int value_;
    static int instanceCount_;
};

constexpr int squareValue(int n) { 
    return n * n; 
}

#endif
