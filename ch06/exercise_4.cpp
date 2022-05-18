#include <iostream>
const int strsize = 20;
struct bop{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};
int main()
{
    using namespace std;
    bop members[5] = {
        {"Wimp Macho", "student", "WM", 0},
        {"Raki Rhodes", "Junior Programmer", "RR", 1},
        {"Celia Laiter", "Captain", "MIPS", 2},
        {"Hoppy Hipman", "Analyst Trainee", "HH", 1},
        {"Pat Hand", "professor", "LOOPY", 2}
    };
    cout << "Benevolent Order of Programmer Report\n"
         << "a. display by name \t b. display by title \n"
         << "c. display by bopname \t d. display by preference \n"
         << "q. quit \n";
    cout << "Enter your choice: ";
    char ch;
    while((ch = cin.get()) != 'q')
    {
        cin.get();
        switch(ch)
        {
            case 'a' : {
                for (bop member : members)
                    cout << member.fullname << endl;
                break;
            }
            case 'b' : {
                for (bop member : members)
                    cout << member.title << endl;
                break;
            }
            case 'c' : {
                for (bop member : members)
                    cout << member.bopname << endl;
                break;
            }
            case 'd' : {
                for (bop member : members)
                    switch (member.preference)
                    {
                    case 0 :cout << member.fullname << endl; break;
                    case 1 :cout << member.title << endl; break;
                    case 2 :cout << member.bopname << endl; break;
                    }
                break;
            }
            default : cout << "Please enter a, b, c, d, or q: ";continue;
        }
        cout << "Next choice: ";
    }
    cout << "Bye!\n";
    return 0;
}