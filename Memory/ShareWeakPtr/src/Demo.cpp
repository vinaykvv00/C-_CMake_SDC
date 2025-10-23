#include "Demo.h"

Demo::Demo(const std::string& name) : name_(name) {
    std::cout << " Demo constructed called: " << name_ << std::endl;
}

Demo::~Demo() {
    std::cout << " Demo destructor called: " << name_ << std::endl;
}

void Demo::show() const {
    std::cout << "Demo object name: " << name_ << std::endl;
}
