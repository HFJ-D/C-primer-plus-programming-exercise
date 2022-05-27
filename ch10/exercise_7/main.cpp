#include <stdio.h>
#include "plorg.h"

int main()
{
    using std::cout;
    cout << "Initialize default \n";
    Plorg p1;
    p1.show();
    cout << "Change CI \n";
    p1.setCI(90);
    p1.show();

    system("pause");
    return 0;
}
