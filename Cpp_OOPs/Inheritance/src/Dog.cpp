#include "Dog.h"

Dog::Dog() : Animal("unknown dog") {}

Dog::Dog(const std::string& name) : Animal(name) {}

std::string Dog::speak() const {
    return "Woof its sounds like this";
}