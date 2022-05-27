#include <cstring>
#include "plorg.h"

Plorg::Plorg(const char *name)
{
    strcpy(name_, name);
    CI_ = 50;
}

void Plorg::setCI(int CI)
{
    CI_ = CI;
}

void Plorg::show() const
{
    using std::cout;
    using std::endl;
    cout << "Name: " << name_ << endl;
    cout << "CI: " << CI_ << endl;
}