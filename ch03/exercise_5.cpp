#include <iostream>;

int main()
{
    using namespace std;
    cout << "Enter the world's population: ";
    long long population;
    cin >> population;

    cout << "Enter the population of the US: ";
    long long popu_US;
    cin >> popu_US;

    cout << "The population of the US is " << double(popu_US)/population*100
         << "% of the world population.\n";

    return 0;
}