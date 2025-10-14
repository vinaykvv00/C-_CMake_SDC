#include "Vehicle.h"

Vehicle::Vehicle()
{
    brand_ = "Unknown Brand";
}

Vehicle::Vehicle(const std::string& brand)
{
    brand_ = brand;
}

std::string Vehicle::start() const
{
    return "Vehicle is starting...";
}

std::string Vehicle::brand() const
{
    return brand_;
}