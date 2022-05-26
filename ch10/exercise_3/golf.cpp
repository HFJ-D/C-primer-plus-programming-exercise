#include <iostream>
#include "golf.h"

Golf::Golf(const char * name, int hc)
{
    strcpy(fullname_, name);
    handicap_ = hc;
}
int Golf::setgolf()
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
    *this = Golf(name, hc);
    return 1;
}
void Golf::handicap(int hc)
{
    handicap_ = hc;
}
void Golf::showgolf() const
{
    using std::cout;
    cout << "The fullname: " << fullname_ << '\n';
    cout << "The handicap: " << handicap_ << '\n';
}