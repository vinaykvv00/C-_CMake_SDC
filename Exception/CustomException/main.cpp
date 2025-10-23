#include "BankAccount.h"
#include "CustomError.h"
#include <iostream>

int main() {
    try {
        BankAccount account("Vinay", 5000.0);
        account.showBalance();

        std::cout << "\nAttempting to withdraw ₹2000...\n";
        account.withdraw(2000.0);

        std::cout << "\nAttempting to withdraw ₹4000...\n";
        account.withdraw(4000.0);  

        std::cout << "This line will not execute if exception is thrown.\n";
    }
    catch (const CustomError& e) {
        std::cerr << " Caught Custom Exception " << e.what() << "\n";
    }
    catch (const std::exception& e) {
        std::cerr << " Caught std::exception  " << e.what() << "\n";
    }

    std::cout << "\nafter try catvch bloack it will excecute.v,,,\n";
    return 0;
}
