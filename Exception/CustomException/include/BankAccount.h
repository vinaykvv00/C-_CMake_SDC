#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

#include <string>

class BankAccount {
private:
    std::string name_;
    double balance_;

public:
    BankAccount(const std::string& name, double balance);
    ~BankAccount();

    void withdraw(double amount);
    void showBalance() const;
};

#endif
