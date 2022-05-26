#include <stdio.h>
#include "sale.h"

int main()
{
    SALES::Sales s1, s2;
    s1.showSales();
    double arr[SALES::QUARTERS] = {2.2, 2.5, 6.2, 5.5};
    s1.setSales();
    s2 = SALES::Sales(arr, SALES::QUARTERS);
    std::cout << "First sale:\n";
    s1.showSales();
    std::cout << "Second sale:\n";
    s2.showSales();
    
    system("pause");
    return 0;
}
