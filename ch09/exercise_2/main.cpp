#include <iostream>
#include <string>
#include <stdio.h>

void strcount(std::string str);
int main(void)
{
    using namespace std;
    string input;

    cout << "Enter a line:\n";
    getline(cin, input);
    while(input != "")
    {
        strcount(input);
        cout << "Enter next line (empty line to quit): \n";
        getline(cin, input);
    }

    cout << "Bye" << endl;
    system("pause");
    return 0;
}

void strcount(std::string str)
 {
     using namespace std;
     static int total = 0;

     cout << "\"" << str <<"\" contains ";
     total += str.size();
     cout << str.size() << " characters\n";
     cout << total << " characters total\n";
 }   
