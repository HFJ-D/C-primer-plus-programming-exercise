#include <iostream>;
#include <string>;

int main()
{
    using namespace std;
    string First_name;
    string Last_name;
    string Name;

    cout << "Enter your first name: ";
    getline(cin, First_name);
    cout << "Enter your last name: ";
    getline(cin, Last_name);

    Name = Last_name + ", " + First_name;
    cout << "Here's the information in a single string: " << Name << endl;

    return 0;
}