#include <iostream>

struct CandyBar{
    char * brand;
    double weight;
    int heat;
};
void initialize(CandyBar & example, char* brand = "Millenium Munch", 
                double weight = 2.85, int heat = 350);
void display(const CandyBar & example);

int main()
{
    CandyBar example;
    initialize(example);
    display(example);
    initialize(example, "HF J", 2.3, 120);
    display(example);

    return 0;
}
void initialize(CandyBar & example, char* brand, double weight, int heat)
{
    example.brand = brand;
    example.weight = weight;
    example.heat = heat;
}

void display(const CandyBar & example)
{
    using namespace std;
    cout << "Brand: " << example.brand << endl;
    cout << "Weight: " << example.weight << endl;
    cout << "Heat: " << example.heat << endl;
}
