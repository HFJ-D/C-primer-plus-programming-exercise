#include <iostream>

double harmonic_mean(double, double);

int main()
{
    using namespace std;
    cout << "Enter two numbers (0 to quit) : ";
    double num_1, num_2, harm_mean;
    
    cin >> num_1 >> num_2;
    while(num_1 != 0 && num_2 != 0)
    {
        harm_mean = harmonic_mean(num_1, num_2);
        cout << "The harmonic mean of two numbers is " << harm_mean << endl;
        cout << "Enter two numbers (0 to quit) : ";
        cin >> num_1 >> num_2;
    }
    cout << "Bye!" << endl;

    return 0;
}

double harmonic_mean(double num_1, double num_2)
{
    return 2.0*num_1*num_2 / (num_1+num_2);
}