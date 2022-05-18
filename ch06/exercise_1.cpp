#include <iostream>
#include <cctype>

int main()
{
    char ch;
    using namespace std;
    while((ch = cin.get()) != '@')
    {
        if(!(isdigit(ch)))
            ch = toupper(ch); //toupper() returns int
            cout << ch;
    }
    return 0;
}