#include <iostream>;
#include <array>;

int main()
{
    using namespace std;
    array<double, 3> run_grade;
    cout << "Enter the time used to run 40 meters at first: ";
    cin >> run_grade[0];
    cout << "Enter the time used to run 40 meters at second: ";
    cin >> run_grade[1];
    cout << "Enter the time used to run 40 meters at third: ";
    cin >> run_grade.at(2);

    cout << "you run " << sizeof(run_grade)/sizeof(double) << " times.\n";
    cout << "The average grade is " << (run_grade[0]+run_grade[1]+run_grade[2])/3 << endl;

    return 0;
}