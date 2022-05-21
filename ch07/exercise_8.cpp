#include <iostream>
const int Season = 4;
const char *Snames[Season] = 
    {"Spring", "Summer", "Fall", "Winter"};
struct data
{
    double expense[Season];
};
void fill(double * pa);
void show(const double * pa);
void fill_2(data * pa);
void show_2(const data * pa);

int main()
{
    double expenses[Season];
    fill(expenses);
    show(expenses);
    std::cout << "---\n";
    data expenses_2;
    fill_2(&expenses_2);
    show_2(&expenses_2);

    

    return 0;
}

void fill(double * pa)
{
    using namespace std;
    for (int i = 0; i < Season; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> pa[i];
    }
}

void show(const double * pa)
{
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for(int i = 0; i < Season; i++)
    {
        cout << Snames[i] << ": $" << pa[i] << endl;
        total += pa[i];
    }
    cout << "Total Expenses: $" << total << endl;
}

void fill_2(data * pa)
{
    using namespace std;
    for (int i = 0; i < Season; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> pa->expense[i];
    }
}

void show_2(const data * pa)
{
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for(int i = 0; i < Season; i++)
    {
        cout << Snames[i] << ": $" << pa->expense[i] << endl;
        total += pa->expense[i];
    }
    cout << "Total Expenses: $" << total << endl;
}