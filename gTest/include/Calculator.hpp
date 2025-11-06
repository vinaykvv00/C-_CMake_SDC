#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

class Calculator {
private:
    double lastResult_;

public:
    Calculator();
    ~Calculator();

    double add(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    double divide(double a, double b);
    double getLastResult() const;
};

#endif
