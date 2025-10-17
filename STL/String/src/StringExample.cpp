#include "StringExample.h"

StringExample::StringExample() {
    std::cout << "StringExample object created.\n";
}

StringExample::~StringExample() {
    std::cout << "StringExample object destroyed.\n";
}

void StringExample::inputString() {
    std::cout << "Enter a string: ";
    std::getline(std::cin, text_);
}

void StringExample::displayBasicOperations() const {
    std::cout << "\n--- Basic Info ---\n";
    std::cout << "Your string: " << text_ << std::endl;
    std::cout << "Length: " << text_.length() << std::endl;
    std::cout << "First character: " << text_.front() << std::endl;
    std::cout << "Last character: " << text_.back() << std::endl;
}

void StringExample::modifyString() {
    std::cout << "\n--- Modifications ---\n";
    std::string newText = text_;

    newText += " Appended Text ";
    std::cout << "After append: " << newText << std::endl;

    newText.insert(0, "Start-");
    std::cout << "After insert: " << newText << std::endl;

    if (newText.length() >= 5) {
        newText.replace(0, 5, "BEGIN");
    }
    std::cout << "After replace: " << newText << std::endl;

    newText.erase(0, 6);
    std::cout << "After erase: " << newText << std::endl;
}

void StringExample::iterateString() const {
    std::cout << "Characters using range-based for loop: ";
    for (char c : text_) {
        std::cout << c << ' ';
    }

    std::cout << "\nCharacters using iterator: ";
    for (auto it = text_.begin(); it != text_.end(); ++it) {
        std::cout << *it << ' ';
       // std::cout << it << ' ';
    }
    std::cout << std::endl;
}

void StringExample::searchSubstring() const {
    std::cout << "\n--- Searching Substring ---\n";
    std::string query;
    std::cout << "Enter substring to find: ";
    std::getline(std::cin, query);

    size_t pos = text_.find(query);
    if (pos != std::string::npos) {
        std::cout << "Found at position: " << pos << std::endl;
    } else {
        std::cout << "Substring not found.\n";
    }
}
