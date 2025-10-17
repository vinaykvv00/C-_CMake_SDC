#include "VectorExample.h"
#include <iostream>

VectorExample::VectorExample() {
    std::cout << "VectorExample created.\n";
}

VectorExample::~VectorExample() {
    std::cout << "VectorExample destroyed.\n";
}

void VectorExample::initializeVector() {
    numbers_ = {10, 20, 30, 40, 50};
    std::cout << "Vector initialized with values 10, 20, 30, 40, 50.\n";
}

void VectorExample::inputFromUser() {
    int n;
    std::cout << "Enter number of elements to add: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        int value;
        std::cout << "Enter value " << (i + 1) << ": ";
        std::cin >> value;
        numbers_.push_back(value);
    }
}

void VectorExample::displayVector() const {
    std::cout << "Vector elements: ";
    for (const int& num : numbers_) {
        std::cout << num << " ";
    }
    std::cout << "\n";
}

void VectorExample::modifyElement() {

    if (!numbers_.empty()) {
        numbers_[1] = 200; 
    }
}

void VectorExample::removeLast() {
    if (!numbers_.empty()) {
        numbers_.pop_back();
        std::cout << "Last element removed.\n";
    } else {
        std::cout << "Vector already empty.\n";
    }
}

void VectorExample::showCommonInfo() const {
    std::cout << "Size: " << numbers_.size() << "\n";
    if (!numbers_.empty()) {
        std::cout << "Front: " << numbers_.front() << "\n";
        std::cout << "Back: " << numbers_.back() << "\n";
    }
    std::cout << "Is empty: " << (numbers_.empty() ? "Yes" : "No") << "\n";
}
