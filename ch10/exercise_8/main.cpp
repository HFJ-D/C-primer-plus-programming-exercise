#include <cctype>
#include <stdio.h>
#include "list.h"
typedef void (*PF)(Item &);
void show(Item & item);
void add(Item & item);

int main()
{
    using namespace std;
    Item arr[4] = {5, 10, 22, 10};
    List lt1(arr, 4);
    Item item;
    void (*pf1)(Item &) = show;
    PF pf2 = add;
    lt1.visit(pf1);

    List lt2;
    char ch;
    cout << "Please enter A to append an item, \n"
         << "P to process the items, or Q to quit.\n";
    while(cin >> ch && toupper(ch) != 'Q')
    {
        while(cin.get() != '\n');
        switch(ch)
        {
            case 'A':
            case 'a': if(lt2.isfull())
                        cout << "The list is already full.\n";
                      else
                      {
                          cout << "Enter an item: ";
                          cin >> item;
                          while(cin.get() != '\n');
                          lt2.append(item);
                      }
                      break;
            case 'P':
            case 'p': if(lt2.isempty())
                        cout << "The list is empty.\n";
                      else
                      {
                          lt2.visit(pf2);
                          lt2.visit(pf1);
                      }
                      break;
        }
        cout << "Please enter A to append an item, \n"
             << "P to process the items, or Q to quit.\n";
    }
    cout << "Bye!\n";
    system("pause");
    return 0;
}

void show(Item & item)
{
    std::cout << item << std::endl; 
}

void add(Item & item)
{
    item += Item(50);
}
