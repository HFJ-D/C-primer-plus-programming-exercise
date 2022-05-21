#include <iostream>
using namespace std;
const int Max = 5;

double * fill_array(double ar[], double ar_end[]);
void show_array(const double *ar, const double *ar_end);
void revalue(double r, double ar[], const double* ar_end);

int main()
{
    
    double properties[Max];
    double * ar_end = fill_array(properties, properties+Max-1);
    show_array(properties, ar_end);
    if(ar_end != properties)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while(!(cin >> factor))
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, ar_end);
        show_array(properties, ar_end);
    }
    cout << "Done. \n";
    cin.get();
    cin.get();

    return 0;
}

double * fill_array(double ar[], double ar_end[])
{
    double temp;
    int i = 1;
    double *pt = ar;
    cout << "Enter value #" << i++ << ": ";
    
    while(cin >> temp)
    {
       
       if(temp < 0)
        {
            pt--;
            break;
        }
       *pt = temp;
       if(pt == ar_end)
            break;
       pt++;
       cout << "Enter value #" << i++ << ": ";
    }
    if(!cin)
    {
        cin.clear();
        while(cin.get() != '\n')
            continue;
        cout << "Bad input; input process terminated.\n";
        pt--;
    }
    return pt;
}

void show_array(const double *ar, const double *ar_end)
{
    for (int i = 0; ar+i-1 != ar_end; i++)
    {
        cout << "Property #" << (i+1) << ": $";
        cout << ar[i] << endl;
    }
}

void revalue(double r, double ar[], const double* ar_end)
{
     for (int i = 0; ar+i-1 != ar_end; i++)
    {
        ar[i] *= r;
    }
}