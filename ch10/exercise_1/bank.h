#ifndef __BANK_H__
#define __BANK_H__
#include <iostream>
#include <cstring>

class BankAccount
{
    private:
        char name[40];
        char acctum[25];
        double balance;
    public:
        BankAccount(const char * client, const char * num, double bal = 0.0);
        BankAccount();
        ~BankAccount();
        void show(void) const;
        void deposit(double cash);
        void withdraw(double cash);
};
#endif