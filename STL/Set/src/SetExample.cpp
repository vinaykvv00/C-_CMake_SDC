#include "SetExample.h"

SetExample::SetExample() {
    std::cout << "SetExample object created.\n";
}

SetExample::~SetExample() {
    std::cout << "SetExample object destroyed.\n";
}

void SetExample::addInitialValues() {
    numbers_.insert(10);
    numbers_.insert(30);
    numbers_.insert(20);
    numbers_.insert(10); 
}

void SetExample::addUserValues() {
    int count;
    std::cout << "How many values do you want to add ";
    std::cin >> count;

    for (int i = 0; i < count; ++i) {
        int value;
        std::cout << "Enter value " << i + 1 << ": ";
        std::cin >> value;
        numbers_.insert(value);
    }
}

void SetExample::displayValues() const {
    std::cout << "Set elements (sorted, unique): ";
    for (const int& value : numbers_) {
        std::cout << value << " ";
    }
    std::cout << "\n";
}

void SetExample::removeValue() {
    int value;
    std::cout << "Enter value to remove: ";
    std::cin >> value;

    auto it = numbers_.find(value);
    if (it != numbers_.end()) {
        numbers_.erase(it);
        std::cout << "Value " << value << " removed.\n";
    } else {
        std::cout << "Value not found.\n";
    }
}
