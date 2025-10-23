#include "Holder.h"
#include <iostream>

Holder::Holder() {
    std::cout << "Holder constructor called.\n";
}

Holder::~Holder() {
    std::cout << "Holder destror called.\n";
}

void Holder::createDemo(const std::string& name) {
    sharedDemo = std::make_shared<Demo>(name);
    weakDemo = sharedDemo;
    std::cout << "Created Demo class inside Holder. use_count = " << sharedDemo.use_count() << "\n";
}

void Holder::shareDemo(std::shared_ptr<Demo> demo) {
    sharedDemo = demo;
    weakDemo = demo;
    std::cout << "Holder now sharing external Demo. use_count = " << sharedDemo.use_count() << "\n";
}

void Holder::showStatus() const {
    std::cout << "=== Holder Status ===\n";
    if (sharedDemo) {
        std::cout << "Shared Demo alive, use_count = " << sharedDemo.use_count() << "\n";
        sharedDemo->show();
    } else {
        std::cout << "No shared Demo stored.\n";
    }

    std::cout << "Weak pointer expired: " << std::boolalpha << weakDemo.expired() << "\n";

    if (auto locked = weakDemo.lock()) {
        std::cout << "Locked weak_ptr successfully.\n";
        locked->show();
    } else {
        std::cout << "Cannot lock weak_ptr — object destroyed.\n";
    }

}
