#include <iostream>
template <typename T>
T max5(T ar[]);

int main()
{
    using namespace std;
    int arr_1[5] = {5, 10, 15, 54, 66};
    int max_1 = max5(arr_1);
    cout << "The maximum of int array is " << max_1 << ".\n";
    double arr_2[5] = {2.2, 2.6, 55.1, 3.6, 6.2};
    double max_2 = max5(arr_2);
    cout << "The maximum of double array is " << max_2 << ".\n";

    return 0;
}

template <typename T>
T max5(T ar[])
{
    T maximum = ar[0];
    for(int i = 0; i<5; i++)
        maximum = maximum > ar[i] ? maximum : ar[i];
    return maximum;
}