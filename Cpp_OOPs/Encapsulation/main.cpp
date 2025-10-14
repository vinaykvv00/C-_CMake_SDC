#include "../include/BankAccount.h"
#include <iostream>

int main() {
    BankAccount account("Vinay", 1000.0);

    std::cout << "Owner: " << account.owner() << std::endl;
    std::cout << "Initial Balance: " << account.balance() << std::endl;

    account.deposit(500.0);
    std::cout << "After deposit: " << account.balance() << std::endl;

    if (account.withdraw(300.0)) {
        std::cout << "After withdrawal: " << account.balance() << std::endl;
    } else {
        std::cout << "Withdrawal failed." << std::endl;
    }

    return 0;
}
