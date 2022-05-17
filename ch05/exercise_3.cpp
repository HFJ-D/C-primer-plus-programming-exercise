#include <iostream>

int main()
{
    using namespace std;
    double number;
    double sum = 0;

    while(number != 0)
    {
        cout << "Enter a number (enter 0 to quit): ";
        cin >> number;
        sum += number;
        cout << "The sum of the numbers you entered: " << sum << endl;
    }


    return 0;
}