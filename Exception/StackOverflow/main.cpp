#include <iostream>
#include "StackOverflow.h"

int main() {
    std::cout << " Memory Error Demonstration \n";
    StackOverflow stack;

    int choice;
    while (true) {
        std::cout << "\nChoose an option:\n";
        std::cout << "1. Cause Stack Overflow Recursion\n";
        std::cout << "2. Cause Stack Overflow Large Array\n";
        std::cout << "3. Safe Stack Recursion\n";
        std::cout << "4. Safe Large Array Smart Pointer\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: stack.causeStackOverflowRecursion(); break;
            case 2: stack.causeStackOverflowLargeArray(); break;
            case 3: stack.safeVersionRecursion(10); break;
            case 4: stack.safeVersionLargeArray(); break;
            case 0: 
                std::cout << "Exiting program.\n";
                return 0;
            default: 
                std::cout << "Invalid choice.\n";
        }
    }
}
