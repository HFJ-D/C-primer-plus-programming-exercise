#include <iostream>
#include "stack.h"
#include <cctype>

using namespace std;

const int MAX = 5;

int main(void)
{
	Stack st(MAX);
	Item item;

	for(int i = 0; i < MAX; i++)
	{
		cout << "Enter a number pushed to stack: " << endl;
		cin >> item;
		while(cin.get() != '\n');
		st.push(item);
	}

	Stack st_new(st);
	for(int i = 0; i < MAX; i++)
	{
		st_new.pop(item);
		cout << item << " is poped." << endl;
	}
    Stack st_2;
    st_2 = st;
    for(int i = 0; i < MAX; i++)
	{
		st_2.pop(item);
		cout << item << " is poped." << endl;
	}

	return 0;
}