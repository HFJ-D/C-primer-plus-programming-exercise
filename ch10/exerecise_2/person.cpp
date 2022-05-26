#include "person.h"
#include <cstring>
Person::Person(const std::string & ln, const char * fn)
{
    lname = ln;
    strcpy(fname, fn);
}

void Person::Show() const
{
    using namespace std;
    cout << "Name: " << fname << " " << lname << endl;
}

void Person::FormalShow() const
{
    using namespace std;
    cout << "Formalname: " << lname << " " << fname << endl;
}