#include <iostream>
using namespace std;
#include <cstring>
struct stringy{
    char * str;
    int ct;
};

void set(stringy & beauy, const char testing[]);
void show(const stringy & sample, int n = 1);
void show(const char * sample, int n = 1);

int main(void)
{
    stringy beauy;
    char testing[] = "Reality isn't what it used to be.";

    set(beauy, testing);
    show(beauy);
    show(beauy, 3);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    return 0;
}

void set(stringy & sample, const char testing[])
{
    sample.str = new char[strlen(testing)+1];
    strcpy(sample.str, testing);
    sample.ct = strlen(sample.str);
}
void show(const stringy & sample, int n)
{
    for(int i = 0; i<n; i++)
    {
        cout << "Str: " << sample.str << endl;
        cout << "Ct: " << sample.ct << endl;
    }
} 
void show(const char * sample, int n)
{
    for(int i = 0; i<n; i++)
    {
        cout << "Str: " << sample << endl;
    }
}                       