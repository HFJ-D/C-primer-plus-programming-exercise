#include <iostream>

int main()
{
    using namespace std;
    cout << "Please enter one of the following choices:\n";
    cout << "c) carnivore \t p) pianist \n";
    cout << "t) tree \t g) game \n";
    char ch;
    while(cin >> ch)
    {
        switch(ch)
        {
            case 'c' : cout << "Cat is carnivore.\n";break;
            case 'p' : cout << "I am not a pianist.\n";break;
            case 't' : cout << "A maple is a tree.\n";break;
            case 'g' : cout << "Mario is a game.\n";break;
            default : cout << "Please enter a c, p, t, or g: ";continue;
        }
        break;
    }

    return 0;
}