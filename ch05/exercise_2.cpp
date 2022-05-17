#include <iostream>
#include <array>
const int ArSize = 16;
int main()
{
    using namespace std;
    array<long double, ArSize> factorials;
    factorials[0] = factorials[1] = 1.0L;
    for(int i = 2; i<ArSize ; i++ )
        factorials[i] = factorials[i-1] * i;
    for(int i=0; i<ArSize ; i++)
        cout << i <<"! = " << factorials[i] << endl;

    return 0;
}