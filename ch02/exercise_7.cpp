#include <iostream>;
void Time_display(int,int);

int main()
{
	using namespace std;
	int hours;
	int minutes;
	cout << "Enter the number of hours: ";
	cin >> hours;
	cout << "Enter the number of minutes: ";
	cin >> minutes;
	Time_display(hours, minutes);
	return 0;
}

void Time_display(int hours, int minutes)
{
	std::cout << "Time: "<< hours << ":" << minutes << ".\n";
}