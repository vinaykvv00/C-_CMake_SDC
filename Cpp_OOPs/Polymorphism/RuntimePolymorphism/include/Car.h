#pragma once
#include "Vehicle.h"

class Car : public Vehicle {
public:
    Car();
    Car(const std::string& brand);
    ~Car() override = default;

    std::string start() const override;
    std::string honk() const override;
};