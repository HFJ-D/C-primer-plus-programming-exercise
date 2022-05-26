#include <stdio.h>
#include <cctype>
#include "stack.h"

int main()
{
    using namespace std;
    Stack st;
    char ch;
    Item po;
    cout << "Please enter A to add a customer, \n"
         << "P to process a payment, or Q to quit.\n";
    while(cin >> ch && toupper(ch) != 'Q')
    {
        while(cin.get() != '\n');
        if(!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch(ch)
        {
            case 'A':
            case 'a': cout << "Enter the fullname of customer: ";
                      cin.getline(po.fullname, 35);
                      cout << "Enter the payment of customer: ";
                      cin >> po.payment;
                      if(st.isfull())
                        cout << "stack is already full\n";
                      else
                        st.push(po);
                      st.show();
                      break;
            case 'P':
            case 'p': if(st.isempty())
                        cout << "stack is already empty\n";
                      else
                        {
                            st.pop(po);
                            cout << "Fullname: " << po.fullname << endl;
                            cout << "Payment: " << po.payment << endl;
                        }
                      st.show();
                      break;
                      
        }
        cout << "Please enter A to add a customer, \n"
         << "P to process a payment, or Q to quit.\n";
    }
    cout << "Bye!\n";
    system("pause");
    return 0;
}

