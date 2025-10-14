#include "StaticConstexprAuto.h"
#include <iostream>
#include <vector>
int StaticConstexprAuto::instanceCount_ = 0;

StaticConstexprAuto::StaticConstexprAuto(int x) : value_(x) {
    ++instanceCount_;
}

StaticConstexprAuto::~StaticConstexprAuto() {
    --instanceCount_;
}

void StaticConstexprAuto::showInstanceCount() {
    std::cout << "Current object count: " << instanceCount_ << "\n";
}

void StaticConstexprAuto::resetInstanceCount() {
    instanceCount_ = 0;
    std::cout << "Instance count reset to zero.\n";
}

void StaticConstexprAuto::demonstrateConstexpr() const {
    constexpr int num = 5;
    constexpr int squared = squareValue(num); 
    std::cout << "constexpr squareValue(5) = " << squared << "\n";
}

void StaticConstexprAuto::demonstrateAuto() const {
    auto sum = value_ + 10;  
    auto fraction = 3.14;    
    std::cout << "auto sum = " << sum << ", auto fraction = " << fraction << "\n";
}

void StaticConstexprAuto::demonstrateRangeBasedLoop() const {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::cout << "Range-based for loop output: ";
    for (auto num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}
