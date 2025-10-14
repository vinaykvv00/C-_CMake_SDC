#pragma once
#include <string>

class Vehicle {
protected:
    std::string brand_;

public:
    Vehicle();
    Vehicle(const std::string& brand);
    virtual ~Vehicle() = default;

    virtual std::string start() const;
    virtual std::string honk() const = 0; 
    std::string brand() const;
};