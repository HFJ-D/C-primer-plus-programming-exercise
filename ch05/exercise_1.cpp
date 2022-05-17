#include <iostream>

int main()
{
    using namespace std;
    int integer_s;
    int integer_l;
    int sum = 0;
    cout << "Please enter two integer\n";
    cout << "smaller one: ";
    cin >> integer_s;
    cout << "larger one: ";
    cin >> integer_l;

    for(int i = integer_s; i<=integer_l ; i++)
        sum += i;

    cout << "The sum of the number between " << integer_s 
         << " and " << integer_l << " is " << sum << ".\n"; 

    return 0;
}