#include <iostream>;
double lightyear2astron(double);

int main()
{
	using namespace std;
	double light_year;
	double astronomical_unit;
	cout << "Enter the number of light years: ";
	cin >> light_year;
	astronomical_unit = lightyear2astron(light_year);
	cout << light_year << " light years = ";
	cout << astronomical_unit << " astronomical units.\n";
	return 0;
}

double lightyear2astron(double light_year)
{
	return 63240 * light_year;
}