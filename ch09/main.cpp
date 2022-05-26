#include <cctype>
#include <stdio.h>
#include "bank.h"

int main()
{
    using namespace std;
    BankAccount account0;
    account0.show();
    BankAccount account ("HF J", "15421431", 2000);
    cout << "Account information\n";
    account.show();
    char ch;
    cout << "Please enter D to deposit cash, W to withdraw cash, \n"
         << "or Q to quit: ";
    while(cin >> ch && toupper(ch) != 'Q')
    {
        switch(ch)
        {
            case 'D':
            case 'd': cout << "Enter the number to deposit: ";
                      double cash;
                      cin >> cash;
                      account.deposit(cash);
                      break;
            case 'W':
            case 'w': cout << "Enter the number to withdraw: ";
                      double cash2;
                      cin >> cash2;
                      account.withdraw(cash2);
                      break;
        }
        cout << "Please enter D to deposit cash, W to withdraw cash, \n"
         << "or Q to quit: ";
    }
    cout << "Bye!\n";
    system("pause");
    return 0;
}
