#include "MapExample.h"
#include <iostream>

MapExample::MapExample() {
    std::cout << "MapExample created.\n";
}

MapExample::~MapExample() {
    std::cout << "MapExample destroyed.\n";
}

void MapExample::initializeMaps() {
    orderedMap_ = {{"apple", 3}, {"banana", 5}, {"orange", 2}};
    unorderedMap_ = {{"car", 10}, {"bus", 20}, {"bike", 5}};
    std::cout << "Maps initialized with predefined values.\n";
}

void MapExample::displayMaps() const {
    std::cout << "\nOrdered map (std::map):\n";
    for (const auto& [key, value] : orderedMap_) {
        std::cout << key << " -> " << value << "\n";
    }

    std::cout << "\nUnordered map (std::unordered_map):\n";
    for (const auto& [key, value] : unorderedMap_) {
        std::cout << key << " -> " << value << "\n";
    }
}

void MapExample::insertUserInput() {
    int count;
    std::cout << "\nEnter number of elements to add: ";
    std::cin >> count;

    for (int i = 0; i < count; ++i) {
        std::string key;
        int value;
        std::cout << "Enter key: ";
        std::cin >> key;
        std::cout << "Enter value: ";
        std::cin >> value;

        orderedMap_[key] = value;
        unorderedMap_[key] = value;
    }
}

void MapExample::findAndModify() {
    std::string key;
    std::cout << "\nEnter key to modify: ";
    std::cin >> key;

    auto it = orderedMap_.find(key);
    if (it != orderedMap_.end()) {
        int newValue;
        std::cout << "Enter new value: ";
        std::cin >> newValue;
        it->second = newValue;
        unorderedMap_[key] = newValue; 
        std::cout << "Updated value for key '" << key << "'.\n";
    } else {
        std::cout << "Key not found.\n";
    }
}

void MapExample::showCommonInfo() const {
    std::cout << "\nMap sizes:\n";
    std::cout << "Ordered map size: " << orderedMap_.size() << "\n";
    std::cout << "Unordered map size: " << unorderedMap_.size() << "\n";
    std::cout << "Is ordered map empty: " << (orderedMap_.empty() ? "Yes" : "No") << "\n";
}
