#ifndef __SALE_H__
#define __SALE_H__
#include <iostream>
namespace SALES
{
    static const int QUARTERS = 4;
    class Sales
    {
        private:            
            double sales[QUARTERS];
            double average;
            double max;
            double min;
        
        public:         
            Sales();
            Sales(const double ar[], int n);
            ~Sales(){}
            void setSales();
            void showSales() const;
    };

    
}
#endif