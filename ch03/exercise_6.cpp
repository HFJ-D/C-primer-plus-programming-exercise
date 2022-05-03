#include <iostream>;

int main()
{
    using namespace std;
    cout << "Enter your driving mileages in miles: ";
    double mile;
    cin >>mile;
    cout << "Enter the petrol you used in gallons: ";
    double gallon;
    cin >> gallon;

    double miles_per_gallon = mile/gallon;
    cout << "You drive " << miles_per_gallon << " mile per gallon.\n";

    cout << "Enter your driving mileages in kilometers: ";
    double kilomater;
    cin >> kilomater;
    cout << "Enter the petrol your used in liters: ";
    double liter;
    cin >> liter;

    double liters_per_100km = liter/kilomater*100;
    cout << "The comsumption of petrol per 100 kilometers is " << liters_per_100km 
         << " liters.\n";

    return 0;

}