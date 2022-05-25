#include "sale.h"
int main()
{
    SALES::Sales s1, s2;
    double arr[SALES::QUARTERS] = {2.2, 2.5, 6.2, 5.5};
    SALES::setSales(s1);
    SALES::setSales(s2, arr, SALES::QUARTERS);
    std::cout << "First sale:\n";
    SALES::showSales(s1);
    std::cout << "Second sale:\n";
    SALES::showSales(s2);
    
    system("pause");
    return 0;
}
