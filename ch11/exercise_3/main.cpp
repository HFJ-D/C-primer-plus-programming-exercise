#include <cstdlib>
#include <ctime>
#include <climits>
#include "vector.h"

using namespace std;
using namespace VECTOR;

int main(void)
{
	double target;
	double dstep;
	Vector result(0.0, 0.0);
	double direction;
	Vector step;
	unsigned long steps = 0;
	unsigned int times;

	srand(time(NULL));
	
	cout << "Enter times of test(q to quit): ";
	while(cin >> times)
	{
		cout << "Enter target distance: ";
		if(!(cin >> target))
			break;
		cout << "Enter the step lenght: ";
		if(!(cin >> dstep))
			break;
		unsigned long max = 0, min = ULONG_MAX;
		double sum = 0.0, average;
		for(int i = 0; i < times; i++)
		{
			while(result.magval() < target)
			{
				direction = rand() % 360;
				step.reset(dstep, direction, Vector::POL);
				result = result + step;
				steps++;
			}
			max = max > steps ? max : steps;
			min = min < steps ? min : steps;
			sum += steps;
			steps = 0;
			result.reset(0.0, 0.0);
		}
		average = sum / times;


		cout << "Among " << times << " tests, \nthe maximum used steps is " << max << endl;
		cout << "the minimum used steps is " << min << endl;
		cout << "the average used steps is " << average << endl;
		cout << endl;

		cout << "Enter times of test(q to quit): ";
	}
	cout << "Bye" << endl;

	return 0;
}
