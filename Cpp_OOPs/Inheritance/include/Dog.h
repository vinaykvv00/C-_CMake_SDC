#pragma once
#include "Animal.h"

class Dog : public Animal {
public:
    Dog();
    Dog(const std::string& name);
    ~Dog() override = default;

    std::string speak() const override;
};