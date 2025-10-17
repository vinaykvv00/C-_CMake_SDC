#include "ListExample.h"
#include <iostream>

ListExample::ListExample() {
    std::cout << "ListExample created.\n";
}

ListExample::~ListExample() {
    std::cout << "ListExample destroyed.\n";
}

void ListExample::initializeList() {
    numbers_ = {10, 20, 30, 40, 50};
    std::cout << "List initialized with values 10, 20, 30, 40, 50.\n";
}

void ListExample::inputFromUser() {
    int count;
    std::cout << "Enter number of elements to add: ";
    std::cin >> count;

    for (int i = 0; i < count; ++i) {
        int value;
        std::cout << "Enter value " << (i + 1) << ": ";
        std::cin >> value;
        numbers_.push_back(value);
    }
}

void ListExample::displayList() const {
    std::cout << "List elements: ";
    for (const int& num : numbers_) {
        std::cout << num << " ";
    }
    std::cout << "\n";
}

void ListExample::sortAndReverse() {
    numbers_.sort();
    std::cout << "List sorted in ascending order.\n";

    numbers_.reverse();
    std::cout << "List reversed.\n";
}

void ListExample::showInfo() const {
    std::cout << "List size: " << numbers_.size() << "\n";
    std::cout << "Is empty: " << (numbers_.empty() ? "Yes" : "No") << "\n";
}
