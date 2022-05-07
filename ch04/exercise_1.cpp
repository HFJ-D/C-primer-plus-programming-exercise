#include <iostream>;

int main()
{
    using namespace std;
    cout << "What is your first name? ";
    char first_name[20];
    cin.getline(first_name, 20);

    cout << "What is your last name? ";
    char last_name[20];
    cin.getline(last_name, 20);

    cout << "What letter grade do you deserve? ";
    char grade;
    cin >> grade;

    cout << "What is your age? ";
    int age;
    cin >>age;

    cout << "Name: " << first_name << ", " << last_name << endl;
    cout << "Grade: " << char(grade+1) << endl;
    cout << "Age: " << age << endl;


    return 0;
}