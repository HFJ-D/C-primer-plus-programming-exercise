#include <iostream>

int main()
{
    using namespace std;
    const char * months[12]=
    {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };
    int sales_volume[12];

    for(int i = 0; i <12 ; i++)
    {
        cout << "Enter the sales volume of " << months[i] << ": ";
        cin >> sales_volume[i];
    }
    int sum = 0;
    for(int x : sales_volume)
        sum += x;
    cout << "The sales volume of whole year is " << sum << endl;

    return 0;
}