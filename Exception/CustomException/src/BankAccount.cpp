#include "BankAccount.h"
#include "CustomError.h"
#include <iostream>

BankAccount::BankAccount(const std::string& name, double balance) : name_(name), balance_(balance) {}

BankAccount::~BankAccount() = default;

void BankAccount::withdraw(double amount) {
    if (amount > balance_) {
        throw CustomError("Error: Insufficient balance for withdrawal!");
    }

    balance_ -= amount;
    std::cout << "Withdrawal successful! Remaining balance: ₹" << balance_ << "\n";
}

void BankAccount::showBalance() const {
    std::cout << "Account Holder: " << name_ << "\nCurrent Balance: ₹" << balance_ << "\n";
}
