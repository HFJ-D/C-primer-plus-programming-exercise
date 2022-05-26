#include "bank.h"

BankAccount::BankAccount(const char * client, const char * num, double bal)
{
    strcpy(name, client);
    strcpy(acctum, num);
    balance = bal;
}
BankAccount::BankAccount()
{
    strcpy(name, "none");
    strcpy(acctum, "none");
    balance = 0.0;
}

BankAccount::~BankAccount()
{

}

void BankAccount::show(void) const
{
    using namespace std;
    cout << "Account name: " << name << endl;
    cout << "Account number: " << acctum << endl;
    cout << "Account balance: " << balance << endl;
}

void BankAccount::deposit(double cash)
{
    using namespace std;
    cout << "Deposit " << cash << endl;
    balance += cash;
    cout << "The account remain " << balance << endl;
}

void BankAccount::withdraw(double cash)
{
    using namespace std;
    if(balance < cash)
        cout << "The balance is not enough.\n";
    else
        {
            cout << "Withdraw " << cash << endl;
            balance -= cash; 
        }

    cout << "The account remain " << balance << endl;  

}