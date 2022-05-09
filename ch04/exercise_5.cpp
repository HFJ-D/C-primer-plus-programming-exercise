#include <iostream>;

struct CandyBar
{
    char Brand[30];
    double Weight;
    int Calorie;
};

int main()
{
    using namespace std;
    CandyBar snack = {
        "Mocha Munch",
        2.3,
        350
    };

    cout << "The brand of the snack is " << snack.Brand << ".\n";
    cout << "The weight of the snack is " << snack.Weight << ".\n";
    cout << "The calorie of the snack is " << snack.Calorie << ".\n";
    return 0;
}