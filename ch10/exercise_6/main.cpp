#include <stdio.h>
#include "move.h"

int main()
{
    using namespace std;
    Move m1;
    cout << "Initialize with default parameters:\n";
    m1.showmove();
    m1 = Move(5, 10);
    cout << "Assign the m1 with temporary variable:\n";
    m1.showmove();
    cout << "Initialize m2:\n";   
    Move m2 = Move(5, 20.5);
    m2.showmove();
    cout << "Add m1 and m2:\n";
    Move m3 = m1.add(m2);
    m3.showmove();
    cout << "Reset:\n";
    m3.reset(2.2, 53.3);
    m3.showmove();
    system("pause");
    return 0;
}
