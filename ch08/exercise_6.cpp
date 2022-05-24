#include <iostream>
#include <cstring>

template <typename T>
T maxn(T arr[], int n);
template <> char * maxn<char*>(char* arr[], int n);

int main()
{
     using namespace std;
     int arr_1[6] = {1, 2, 10, 55, 65, 2};
     double arr_2[4] = {20.2, 52.3, 56.2, 54.3};
     int max_int = maxn(arr_1, 6);
     cout << "The maximum of int array is " << max_int << endl;
     double max_double = maxn(arr_2, 6);
     cout << "The maximum of double array is " << max_double << endl;  

     char * arr_str[5] = {"one", "two", "thre", "four", "five"};
     char * max_str = maxn(arr_str, 5);
     cout << "The maximum of c-string array is " << max_str << endl;


     return 0;
}

template <typename T>
T maxn(T arr[], int n)
{
     if(!n)
          return 0;
     T maximum = arr[0];
     for(int i=1; i<n; ++i)
     {
          maximum = maximum > arr[i] ? maximum : arr[i];
     }
     return maximum;
}

template <> char * maxn<char*>(char* arr[], int n)
{
     if(!n)
          return "\n";
     char * str_max = arr[0];
     for(int i=1; i<n; ++i)
     {
          str_max = strlen(str_max) >= strlen(arr[i]) ? str_max : arr[i];
     }
     return str_max;
}