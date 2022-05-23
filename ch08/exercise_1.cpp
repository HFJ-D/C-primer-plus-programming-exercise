#include <iostream>
#include <string>
using namespace std;
int Count = 0;
void print_str(string str);
void print_str(string str, int n);

int main()
{
    print_str("Hello world.");
    print_str("Hello world.");
    print_str("Hello world.");
    print_str("Hello world.");
    print_str("God bless my paper", 10);
    return 0;
}

void print_str(string str)
{
    cout << str << endl;
    Count++;
}

void print_str(string str, int n)
{
    if(n)
    {
        for (int i = 0; i<Count; i++)
            cout << str << endl;
    }
}
