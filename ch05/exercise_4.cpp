#include <iostream>

int main()
{
    using namespace std;
    double Daphne = 100, Cleo = 100;
    int year = 0;
    while(Daphne >= Cleo)
    {
        Daphne += 100*0.1;
        Cleo += (Cleo*0.05); 
        year++;
    }
    cout << "After " << year << " years" << endl; 
    cout << "The investment value of Daphne is: " << Daphne << endl;
    cout << "The investment value of Cleo is: " << Cleo << endl;
    return 0;
}