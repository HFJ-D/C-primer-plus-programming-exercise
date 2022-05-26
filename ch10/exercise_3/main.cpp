#include <iostream>
#include <stdio.h>
#include "golf.h"

int main()
{
    using namespace std;
    Golf g("Ann Birdfree", 24);
    g.showgolf();
    g.handicap(55);
    g.showgolf();
    Golf gs[5];
    int i;
    for(i=0; i<5 && gs[i].setgolf(); ++i);
    for(int j=0; j<i; j++)
    {
        cout << "#" << j+1 << endl;
        gs[j].showgolf();
    }

    cout << "Bye!";

    system("pause");
    return 0;
}
