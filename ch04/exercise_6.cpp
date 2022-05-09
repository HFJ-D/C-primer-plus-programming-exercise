#include <iostream>;
#include <string>;

using namespace std;
struct CandyBar
{
    string Brand;
    double Weight;
    int Calorie;
};

int main()
{
    
    CandyBar snacks[3] = {{"Mocha Munch", 2.3, 350}, {"Nestor", 3.3, 400}, 
    {"Chips", 5.5, 300}};
    

    cout << "The first snack is " << snacks[0].Brand << " with " 
         << snacks[0].Weight << " weight and " << snacks[0].Calorie << " calorie.\n";
    cout << "The second snack is " << snacks[1].Brand << " with " 
         << snacks[1].Weight << " weight and " << snacks[1].Calorie << " calorie.\n";
    cout << "The third snack is " << snacks[2].Brand << " with " 
         << snacks[2].Weight << " weight and " << snacks[2].Calorie << " calorie.\n";
    
    return 0;
}
