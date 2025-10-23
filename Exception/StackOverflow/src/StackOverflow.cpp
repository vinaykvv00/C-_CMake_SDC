#include "StackOverflow.h"
#include <memory>

void StackOverflow::causeStackOverflowRecursion() {
    int localVar = 50; 
    std::cout << localVar << " ";
    causeStackOverflowRecursion(); 
}

void StackOverflow::causeStackOverflowLargeArray() {
    std::cout << "\nCreating very large array on stack...\n";
    int hugeArray[100000000];
    hugeArray[0] = 1;
    std::cout << "First element = " << hugeArray[0] << "\n";
}

void StackOverflow::safeVersionRecursion(int n) {
    if (n == 0) {
        return;
    }
    std::cout << n << " ";
    safeVersionRecursion(n - 1);
}

void StackOverflow::safeVersionLargeArray() {
    std::cout << "\nAllocating large array safely on heap using smart pointer...\n";
    auto safeArray = std::make_unique<int[]>(100000000);
    safeArray[0] = 10;
    safeArray[99999999] = 99;

    std::cout << "Safe array created. First = " << safeArray[0] << ", Last = " << safeArray[99999999] << "\n";
}
