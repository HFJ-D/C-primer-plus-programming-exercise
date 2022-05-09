#include <iostream>;
#include <string>
using namespace std;

struct Pizza
{
    string name;
    double diameter;
    double weight;
};

int main()
{
    Pizza *sample = new Pizza;
    cout << "Enter the diameters of the pizza: ";
    cin >> sample->diameter;
    cout << "Enter the name of pizza company: ";
    cin.get();
    getline(cin, sample->name);
    cout << "Enter the weight of the pizza: ";
    cin >> sample->weight;

    cout << "The pizza is of " << sample->name << " company.\n" 
         << "The diameters of the pizza is " << sample->diameter 
         << " and the weight is " << sample->weight << ".\n";
    delete sample;
    return 0;
}
