#pragma once
#include <string>

class Animal {
public:
    Animal();
    Animal(const std::string& name);
    virtual ~Animal() = default;

    virtual std::string speak() const;
    std::string name() const;

protected:
    std::string name_;
};