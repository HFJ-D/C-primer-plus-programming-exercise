#include <iostream>
const int ArSize = 10;

int main()
{
    using namespace std;
    double donations[ArSize];
    double sum = 0;
    int i, count = 0;
    for(i = 0; i<ArSize; i++)
    {
        cout << i+1 << "#:\nEnter denotion: ";
        if(!(cin >> donations[i]))
            break;
        sum += donations[i];
    }
    
    if(0 == i)
        cout << "There is not date.\n";
    else
        {
            double averge = sum / (i+1);
            for (int j = 0; j <= i; j++)
            {
                if (donations[j] > averge)
                    count++;
            }
            cout << "The averge of denotions is " << averge << ". There are " 
                << count << " donotions larger than the averge.\n";
        }

    

    return 0;
}