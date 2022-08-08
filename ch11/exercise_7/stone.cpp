#include <stdlib.h>
#include "stonewt.h"
using namespace std;

int main()
{
    Stonewt stones[6] = {250.5,55.2,66.5};
    for(int i = 3; i < 6; i++)
    {
        cout << "Enter the pounds of #" << i+1 << ": ";
        double pounds;
        cin >> pounds;
        stones[i] = pounds;
    }
    int max = 0, min = 0, number = 0;
    Stonewt criterion(11, 0);
    for(int i = 0; i <6; i++)
    {
        max = stones[i] > stones[max] ? i : max;
        min = stones[i] < stones[min] ? i : min;
        if(stones[i] >= criterion)
            number++;  
    }
    cout << "The maximum index is " << max + 1 << ": " << stones[max];
    cout << "The minimum index is " << min + 1 << ": " << stones[min];
    cout << "The number of pounds larger than 11 stones: " << number << endl;
    
    system("pause");
    return 0;
}