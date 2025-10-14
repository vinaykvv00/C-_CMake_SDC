#include "Bike.h"

Bike::Bike()
{
    brand_ = "Generic Bike";
}

Bike::Bike(const std::string& brand)
{
    brand_ = brand;
}

std::string Bike::start() const
{
    return "Bike kicks to life..";
}

std::string Bike::honk() const
{
    return "Ring ring..";
}