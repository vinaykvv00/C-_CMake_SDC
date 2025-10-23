#include "SafeExample.h"

SafeExample::SafeExample() {
    std::cout << "SafeExample constructor created\n";
}

SafeExample::~SafeExample() {
    std::cout << "SafeExample desrtuctor destroyed\n";
}

void SafeExample::nullPointerSafe() {
    std::cout << "\n Null Pointer Safe \n";
    int* ptr = nullptr;
    if (ptr != nullptr) {
        *ptr = 10;
    } else {
        std::cout << "Pointer is null, skipping access.\n";
    }
}

void SafeExample::outOfBoundsSafe() {
    std::cout << "\n Out of Bounds Safe \n";
    std::vector<int> data = {1, 2, 3};
    int index = 1000000;
    try {
        data.at(index) = 42;
        std::cout << "Accessing valid index 1: " << data.at(1) << "\n";
        std::cout << "data[" << index << "] = " << data.at(index) << "\n";
    } catch (const std::out_of_range& e) {
        std::cout << "Caught exception: " << e.what() << "\n";
    }
}

void SafeExample::useAfterDeleteSafe() {
    std::cout << "\n Use After Delete Safe Demo \n";
    std::unique_ptr<int> num = std::make_unique<int>(500);
    std::cout << "Value: " << *num << "\n";

}
