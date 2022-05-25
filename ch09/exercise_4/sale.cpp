
#include "sale.h"

namespace SALES
{
    void setSales(Sales & s, const double ar[], int n)
    {
        
        if(n)
        {
            int i;
            double sum = 0;
            s.max = s.min = ar[0];
            for(i = 0; i < QUARTERS && i < n; ++i)
            {
                s.sales[i] = ar[i];
                s.max = s.max > ar[i] ? s.max : ar[i];
                s.min = s.min < ar[i] ? s.min : ar[i];
                sum += s.sales[i];
            }
           for(int j = i; j < QUARTERS ; ++j)
            {
                s.sales[j] = 0;
            }
            s.average = sum / i; 
        }
        else
        {
            for(int i = 0; i < QUARTERS; ++i)
            {
                s.sales[i] = 0;
            }
            s.average = 0;
            s.max = 0;
            s.min = 0; 
        }
        
    }
    void setSales(Sales & s)
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
        setSales(s, arr, i);
        
    }
    void showSales(const Sales & s)
    {
        using namespace std;
        cout << "The number of the sales: \n";
        for (int i = 0; i < QUARTERS; ++i)
        {
            cout << "#" << i+1 << ": " << s.sales[i] << endl;
        }
        cout << "Average sale is " << s.average << endl;
        cout << "Maximum sale is " << s.max << endl;
        cout << "Minimum sale is " << s.min << endl;
    }
}