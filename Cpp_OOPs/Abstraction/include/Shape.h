#pragma once
#include <string>

class Shape 
{
public:
    Shape() = default;
    
    virtual double area() const = 0;
    virtual double perimeter() const = 0;

    virtual std::string name() const 
    { 
        return "Shape"; 
    }
    virtual ~Shape() = default;
};
