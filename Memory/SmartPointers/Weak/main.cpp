#include <iostream>
#include <memory>
#include "Box.h"

int main() {

    std::shared_ptr<Box> sharedBox = std::make_shared<Box>(10);
    std::cout << "sharedBox use_count: " << sharedBox.use_count() << "\n";

    std::weak_ptr<Box> weakBox = sharedBox;
    std::cout << "weakBox use_count (does not increase reference): " << weakBox.use_count() << "\n";

    if (auto lockedBox = weakBox.lock()) { 
        std::cout << "Locked weakBox size: " << lockedBox->GetSize() << "\n";
    } else {
        std::cout << "weakBox expired\n";
    }

    sharedBox.reset();

    std::cout << "sharedBox reset\n";
    std::cout << "weakBox use_count after reset: " << weakBox.use_count() << "\n";

    if (auto lockedBox = weakBox.lock()) {
        std::cout << "Locked weakBox size: " << lockedBox->GetSize() << "\n";
    } else {
        std::cout << "weakBox expired (object deleted, safe access)\n";
    }

    return 0;
}
