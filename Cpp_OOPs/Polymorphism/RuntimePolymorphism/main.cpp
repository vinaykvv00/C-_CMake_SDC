#include "Car.h"
#include "Bike.h"
#include <iostream>
#include <vector>
#include <memory>

int main() {
    std::vector<std::unique_ptr<Vehicle>> vehicles;
    
    vehicles.push_back(std::make_unique<Car>("Toyota"));
    vehicles.push_back(std::make_unique<Bike>("Royal Enfiled"));
    vehicles.push_back(std::make_unique<Car>("BMW"));

    for (const auto& vehicle : vehicles) {
        std::cout << "Brand: " << vehicle->brand() << std::endl;
        std::cout << vehicle->start() << std::endl;
        std::cout << vehicle->honk() << std::endl;
        std::cout << "---" << std::endl;
    }

    return 0;
}