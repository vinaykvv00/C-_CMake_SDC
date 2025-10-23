#include "TransactionProcessor.h"
#include <iostream>
#include <stdexcept>

int main() {
    std::cout << "Logic Error \n";

    try {
        TransactionProcessor processor;
        processor.runOperations();
    }
    catch (const std::exception& e) {
        std::cout << "Unhandled exception in main: " << e.what() << "\n";
    }
    return 0;
}
