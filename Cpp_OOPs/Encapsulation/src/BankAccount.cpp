#include "BankAccount.h"
#include <iostream>

BankAccount::BankAccount() : owner_{"unknow"}, balance_{0.0} {}

BankAccount::BankAccount(const std::string& owner, double balance) : owner_{owner}, balance_{balance} {}

void BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance_ += amount;
    }
}

bool BankAccount::withdraw(double amount) {
    if (amount > 0 && amount <= balance_) {
        balance_ -= amount;
        return true;
    }
    return false;
}

std::string BankAccount::owner() const 
{
     return owner_; 
}
double BankAccount::balance() const
{
     return balance_;
}
BankAccount::~BankAccount() {
    
}