#include <iostream>
#include <stdio.h>
#include "golf.h"
int main()
{
    using namespace std;
    golf g;
    setgolf(g, "Ann Birdfree", 24);
    showgolf(g);
    handicap(g, 55);
    showgolf(g);
    golf gs[5];
    int i;
    for(i=0; i<5 && setgolf(gs[i]); ++i);
    for(int j=0; j<i; j++)
    {
        cout << "#" << j+1 << endl;
        showgolf(gs[j]);
    }

    cout << "Bye!";

    system("pause");
    return 0;
}