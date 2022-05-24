#include <iostream>
#include <cstring>
#include "golf.h"

void setgolf(golf & g, const char * name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}
int setgolf(golf & g)
{
    using namespace std;
    cout << "Enter fullname (empty string to quit): ";
    char name[Len];
    cin.getline(name, Len);
    if(strlen(name) == 0)
        return 0;
    cout << "Enter the handicap: ";
    int hc;
    (cin >> hc).get();
    setgolf(g, name, hc);
    return 1;
}
void handicap(golf & g, int hc)
{
    g.handicap = hc;
}
void showgolf(const golf & g)
{
    using std::cout;
    cout << "The fullname: " << g.fullname << '\n';
    cout << "The handicap: " << g.handicap << '\n';
}
