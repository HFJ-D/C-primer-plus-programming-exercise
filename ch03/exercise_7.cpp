#include <iostream>;
const double Miles_per_100km = 62.14;
const double Liters_per_gallon = 3.875;

int main()
{
    using namespace std;
    cout << "Enter the comsumption of petrol per 100 kilometer in liters: ";
    double liters_per_100km;
    cin >> liters_per_100km;

    double miles_per_gallon = Liters_per_gallon*Miles_per_100km/liters_per_100km;
    cout << "The mileages per gallon is " << miles_per_gallon << " miles.\n"; 


    return 0;
}