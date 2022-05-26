#include "sale.h"

namespace SALES
{
    
    Sales::Sales()
    {
        for(double & x : sales)
            x = 0.0;
        average = max = min = 0;
    }

    Sales::Sales(const double ar[], int n)
    {
        
        if(n)
        {
            int i;
            double sum = 0;
            max = min = ar[0];
            for(i = 0; i < QUARTERS && i < n; ++i)
            {
                sales[i] = ar[i];
                max = max > ar[i] ? max : ar[i];
                min = min < ar[i] ? min : ar[i];
                sum += sales[i];
            }
           for(int j = i; j < QUARTERS ; ++j)
            {
                sales[j] = 0;
            }
            average = sum / i; 
        }
        else
        {
            for(int i = 0; i < QUARTERS; ++i)
            {
                sales[i] = 0;
            }
            average = 0;
            max = 0;
            min = 0; 
        }
        
    }
    void Sales::setSales()
    {
        using namespace std;
        double arr[QUARTERS];
        int i = 0;
        for( ; i<QUARTERS; ++i)
        {
            cout << "Enter #" << i+1 << " sale: ";
            if(!(cin >> arr[i]))
            {
                cin.clear();
                while(cin.get() != '\n');
                cout << "Not a number" << endl;
                break;
            }
        }
        *this = Sales(arr, i);    
    }

    void Sales::showSales() const
    {
        using namespace std;
        cout << "The number of the sales: \n";
        for (int i = 0; i < QUARTERS; ++i)
        {
            cout << "#" << i+1 << ": " << sales[i] << endl;
        }
        cout << "Average sale is " << average << endl;
        cout << "Maximum sale is " << max << endl;
        cout << "Minimum sale is " << min << endl;
    }
}