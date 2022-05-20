#include <iostream>

long double probability(unsigned field_numbers, unsigned field_picks, 
                      unsigned Preferred_numbers, unsigned Preferred_picks);

int main()
{
    using namespace std;
    cout << "Enter the total number of field number and\n" 
            "the number of picks allows: \n";
    double field_numbers, field_picks, Preferred_numbers, Preferred_picks;
    while((cin >> field_numbers >> field_picks) && field_picks < field_numbers)
    {
        cout << "Enter the total number of preferred number and\n" 
                "the number of picks allows: \n";
        if((cin >> Preferred_numbers >> Preferred_picks) 
            && Preferred_picks < Preferred_numbers)
            {
                cout << "You have one chance in ";
                cout <<  probability(field_numbers, field_picks, 
                                 Preferred_numbers, Preferred_picks);
                cout << " of winning.\n";
                cout << "Next two numbers (q to quit)";
            }           
        else
            break;

    }
}

long double probability(unsigned field_numbers, unsigned field_picks, 
                      unsigned Preferred_numbers, unsigned Preferred_picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;

    for(n=field_numbers, p=field_picks; p > 0; n--, p--)
        result *= (n / p);

    for(n=Preferred_numbers, p=Preferred_picks; p > 0; n--, p--)
        result *= (n / p);

    return result;

}
                      