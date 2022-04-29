#include <iostream>;

int main()
{
	using namespace std;
	float celsius;
	float fahrenheit;
	cout << "Please enter a Celsius value: ";
	cin >> celsius;
	cout << celsius << " degrees Celsius is ";
	cout << 1.8 * celsius + 32.0 << " degrees Fahrenheit.\n";
	return 0;
}