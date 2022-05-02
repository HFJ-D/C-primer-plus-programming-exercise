#include <iostream>

int main()
{
    using namespace std;
    int height_inch;
    cout << "Enter your height in inch: ";
    cin >> height_inch;
    const int foot2inch = 12;
    cout << "your height is "<< height_inch/foot2inch << " foots "
         << height_inch%foot2inch << " inches.\n";
}