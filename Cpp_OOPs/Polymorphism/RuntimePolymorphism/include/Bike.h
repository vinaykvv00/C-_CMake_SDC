#pragma once
#include "Vehicle.h"

class Bike : public Vehicle {
public:
    Bike();
    Bike(const std::string& brand);
    ~Bike() override = default;

    std::string start() const override;
    std::string honk() const override;
};