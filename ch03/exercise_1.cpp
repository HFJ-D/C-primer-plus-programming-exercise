#include <iostream>
const int foot2inch = 12;

int main()
{
    using namespace std;
    int height_inch;
    cout << "Enter your height in inch: ";
    cin >> height_inch;
    
    cout << "your height is "<< height_inch/foot2inch << " feet "
         << height_inch%foot2inch << " inches.\n";
    return 0;
}
