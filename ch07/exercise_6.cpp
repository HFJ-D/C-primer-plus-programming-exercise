#include <iostream>
using namespace std;
const int ArSize = 10;
int Fill_array(double * arr, int n);
void Show_array(double * arr, int n);
void Reverse_array(double *arr, int n);

int main()
{
     
     double array[10];
     int count = Fill_array(array, ArSize);
     Show_array(array, count);
     cout << "-----\n";
     Reverse_array(array, count);
     Show_array(array, count);
     cout << "-----\n";
     Reverse_array(array+1, count-2);
     Show_array(array, count);




     return 0;
}

int Fill_array(double * arr, int n)
{
     int count = 0;
     for(int i=0; i< n; i++)
     {
          cout << "Enter #" << i+1 << " number(letter to quit): ";
          if(!(cin >> arr[i]))
          {
               cin.clear();
               while(cin.get() != '\n');
               break;
          }
          count++;
     }
     return count;
}

void Show_array(double * arr, int n)
{
     for(int i = 0; i < n; i++)
     {
          cout << arr[i] << endl;
     }
}

void Reverse_array(double *arr, int n)
{
     double temp;
     for(int i = 0; i < (n/2) ; i++)
     {
          temp = arr[i];
          arr[i] = arr[n-1-i];
          arr[n-1-i] = temp;
     }
}