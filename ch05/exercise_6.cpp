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
    int sales_volume[3][12];

    for(int i = 0; i<3; i++)
    {
          cout << i+1 << " year\n";
          for(int j = 0; j <12 ; j++)
          {
               cout << "Enter the sales volume of " << months[j] << ": " ;
               cin >> sales_volume[i][j];
          }
    }


    int sum[3] = {0, 0, 0};
    for(int i = 0; i<3; i++)
    {
         for(int j = 0; j<12; j++)
         {
              sum[i] += sales_volume[i][j];
         }
         cout << "The sales volume of " << i+1 << " year is " << sum[i] <<endl;
    }
    int whole = 0;
    for(int x :sum)
          whole += x;
    cout << "The sales volume of whole three year is " << whole << endl;

    return 0;
}