#include <iostream>
typedef double (* pf_class) (double, double);
double calculate(double num_1, double num_2, pf_class pf);
double add(double x, double y);
double multiply(double x, double y);
double division(double x, double y);

int main()
{
    using namespace std;
    pf_class pf[3] = {add, multiply, division};
    cout << "Enter two numbers (q to quit): ";
    double num_1, num_2;
    while(cin >> num_1 >> num_2)
    {
        for (pf_class f : pf)
        {
            cout << "result" << " = " << calculate(num_1, num_2, f) << endl;
        }
        cout << "Next two number (q to quit): ";
        
    }
    cout << "Done\n";
    return 0;
}

double calculate(double num_1, double num_2, pf_class pf)
{
    return (*pf)(num_1, num_2);
}
double add(double x, double y)
{
    return x + y;
}
double multiply(double x, double y)
{
    return x * y;
}
double division(double x, double y)
{
    return x / y;
}