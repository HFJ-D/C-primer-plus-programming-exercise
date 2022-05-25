#include <iostream>
#include <stdio.h>
#include <cstring>
#include <new>

struct chaff
{
    char dross[20];
    int slag;
};
char * buffer = new char[100];
void fill_chaff(chaff & c, const char * str, int n);
void show_chaff(const chaff & c);
int main()
{
    chaff * cs = new (buffer) chaff[2];
    fill_chaff(cs[0], "Tian jin", 22);
    fill_chaff(cs[1], "Nan kai", 25);
    for(int i = 0; i < 2; ++i)
        show_chaff(cs[i]);
    delete [] buffer;
    system("pause");
    return 0;
}
void fill_chaff(chaff & c, const char * str, int n)
{
    strcpy(c.dross, str);
    c.slag = n;
}

void show_chaff(const chaff & c)
{
    using namespace std;
    cout << "Dross: " << c.dross << " at " << &c.dross << endl;
    cout << "Slag: " << c.slag << " at " << &c.slag << endl;
}
