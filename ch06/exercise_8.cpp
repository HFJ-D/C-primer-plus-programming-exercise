#include <iostream>
#include <fstream>
#include <cstdlib>

int main()
{
    using namespace std;
    ifstream inFile;
    inFile.open("exercise9.txt");
    if (!inFile.good())
        exit(EXIT_FAILURE);
    char ch;
    int count = 0;
    while(!inFile.eof())
    {
        inFile.get(ch);
        cout << ch;
        count++;
    }
    cout << "\nThere are " << count << " characters. \n";

    return 0;
}