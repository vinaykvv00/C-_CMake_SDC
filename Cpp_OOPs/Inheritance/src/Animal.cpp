#include "Animal.h"

Animal::Animal() : name_{"Unknown"} {}
Animal::Animal(const std::string& name) : name_{name} {}

std::string Animal::speak() const {
    return "Some generic animal sound";
}

std::string Animal::name() const {
    return name_;
}