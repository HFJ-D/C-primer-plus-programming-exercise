#include <iostream>
#include <string>
struct car{
    std::string make;
    int year;
};
int main()
{
    using namespace std;
    int number;
    cout << "How many cars do you wish to catalog? ";
    cin >> number;
    cin.get();
    car * catalog = new car[number];
    for(int i = 0; i<number; i++)
    {
        cout << "Car #" << i+1 << ": \n";
        cout << "Please enter the make: ";
        getline(cin, catalog[i].make);
        cout << "Please enter the year made: ";
        cin >> catalog[i].year;
        cin.get();
    }
    cout << "Here is your collection: \n";
    for(int i =0; i<number; i++)
        cout << catalog[i].year << " " << catalog[i].make << endl;
    delete [] catalog;

    return 0;
}