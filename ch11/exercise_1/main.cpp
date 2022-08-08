#include <cstdlib>
#include <ctime>
#include "vector.h"
#include <fstream>
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
    ofstream fout;
    fout.open("result.txt");
	srand(time(NULL));

	cout << "Enter target distance(q to quit): ";
	while(cin >> target)
	{
		cout << "Enter the step lenght: ";
		if(!(cin >> dstep))
			break;
        fout << "Target Distance: " << target << ", Step Size: " << dstep << endl;
        fout << steps << ": " << result; 
		while(result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
            fout << steps << ": " << result;
		}

		fout << "After " << steps << " steps, the subject has the following location:\n";
		fout << result;
        fout << "Or\n";
		result.polar_mode();
		fout << result;
        fout << "Average outward distance per step = " << result.magval()/steps << endl;

		fout << endl;

		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance(q to quit): ";
	}
	cout << "Bye" << endl;
    fout.close();
	return 0;
}

