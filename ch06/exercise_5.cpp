#include <iostream>

int main()
{
    using namespace std;
    cout << "Enter your income in tvarp: ";
    double income, tax;
    while(cin >> income)
    {
        if (income < 0)
            break;
        else if (income <= 5000)
            tax = 0;
        else if (income > 5000 && income <=15000)
            tax = (income-5000)*0.1;
        else if (income > 15000 && income <=35000)
            tax = 10000*0.1 + (income-15000)*0.15; 
        else
            tax = 10000*0.1 + 20000*0.15 + (income-35000)*0.2; 
        cout << "Your tax is " << tax << " tvarp.\n"; 
        cout << "Enter your income in tvarp: "; 
    }
    cout << "Bye!\n";


    return 0;
}