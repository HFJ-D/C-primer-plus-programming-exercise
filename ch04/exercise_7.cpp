#include <iostream>;

struct Pizza
{
    char name[40];
    double diameter;
    double weight;
};

int main()
{
    using namespace std;
    Pizza sample;

    cout << "Enter the name of pizza company: ";
    cin.getline(sample.name, 40);
    cout << "Enter the diameters of the pizza: ";
    cin >> sample.diameter;
    cout << "Enter the weight of the pizza: ";
    cin >> sample.weight;

    cout << "The pizza is of " << sample.name << " company.\n" 
         << "The diameters of the pizza is " << sample.diameter 
         << " and the weight is " << sample.weight << ".\n";

    return 0;
}