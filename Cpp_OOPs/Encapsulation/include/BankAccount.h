#pragma once
#include <string>

class BankAccount 
{
private:
    std::string owner_;
    double balance_;

public:
    BankAccount();
    BankAccount(const std::string &owner, double balance);
    ~BankAccount();

    void deposit(double amount);
    bool withdraw(double amount);
    std::string owner() const;
    double balance() const;

};