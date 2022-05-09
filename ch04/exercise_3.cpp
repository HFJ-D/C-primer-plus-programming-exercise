#include <iostream>;
#include <cstring>;

int main()
{
    using namespace std;
    char first_name[20];
    char last_name[20];


    cout << "Enter your first name: ";
    cin.getline(first_name, 20);
    cout << "Enter your last name: ";
    cin.getline(last_name, 20);

    strcat(last_name, ", ");
    strcat(last_name, first_name);

    cout << "Here's the information in a single string: " << last_name << endl;

    return 0;
}