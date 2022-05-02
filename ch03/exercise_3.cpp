#include <iostream>;
const int Minutes_per_degree = 60;
const int Seconds_per_minute = 60;
int main()
{
    using namespace std;
    cout << "Enter a latitude in degrees, minutes, seconds:\n";
    cout << "First, enter the degree: ";
    double degree;
    cin >> degree;
    cout << "Next, enter the minutes of arc: ";
    double minute;
    cin >> minute;
    cout << "Finally, enter the degrees of arc: ";
    double second;
    cin >>second;

    double degree_only = degree + minute/Minutes_per_degree 
                            + second/Seconds_per_minute/Minutes_per_degree;
    cout << degree << " degrees, " << minute << " minutes, " << second << " seconds = ";
    cout << degree_only << " degrees\n";              

    return 0;
}