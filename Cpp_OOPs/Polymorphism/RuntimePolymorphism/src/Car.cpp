#include "Car.h"

Car::Car()
{
    brand_ = "Generic Car";
}

Car::Car(const std::string& brand)
{
    brand_ = brand;
}

std::string Car::start() const
{
    return "Car engine roars to life ...";
}

std::string Car::honk() const
{
    return "Beep beep ...";
}