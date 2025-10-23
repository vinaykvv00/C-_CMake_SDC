#include "TransactionProcessor.h"
#include <iostream>
#include <stdexcept>

void TransactionProcessor::runOperations() {
    Calculator calc;

    try {
        double div = calc.divide(10, 0);     
        std::cout << "Division result: " << div << "\n";

        double root = calc.getSquareRoot(16);  
        std::cout << "Square root: " << root << "\n";

        int element = calc.getArrayElement(4);  
        std::cout << "Array element: " << element << "\n";
    }
    catch (const std::invalid_argument& e) {
        std::cout << "Invalid Argument Error: " << e.what() << "\n";
    }
    catch (const std::domain_error& e) {
        std::cout << "Domain Error: " << e.what() << "\n";
    }
    catch (const std::out_of_range& e) {
        std::cerr << "Out of Range Error: " << e.what() << "\n";
    }
    catch (const std::logic_error& e) {
        std::cerr << "General Logic Error: " << e.what() << "\n";
    }
    catch (...) {
        std::cerr << "Unknown exception occurred.\n";
    }

}
