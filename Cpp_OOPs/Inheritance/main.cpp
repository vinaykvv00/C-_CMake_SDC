#include "Dog.h"
#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<Animal> myDog = std::make_unique<Dog>("Dolly the Dog");

    std::cout << myDog->name() << " says: " << myDog->speak() << std::endl;

    return 0;
}