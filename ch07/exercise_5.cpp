#include <iostream>

int factorial(int n);

int main()
{
    using namespace std;
    cout << "Enter the number: ";
    int n, results;
    while(cin >> n)
    {
        if(n < 0)
            break;
        results = factorial(n);
        cout << "The factorial of " << n << " is " << results << endl;
        cout << "Enter next number (q to quit): ";
    }

    return 0;
}

int factorial(int n)
{
    int result = 1;
    if(n != 0)
        result = n*factorial(n-1);
    return result;
}