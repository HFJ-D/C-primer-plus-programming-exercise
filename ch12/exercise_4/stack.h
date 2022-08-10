#ifndef STACK_H
#define STACK_H

#include <iostream>

typedef unsigned long Item;

class Stack
{
	private:
		enum {MAX = 10};
		Item *pitems;
		int size;
		int top;
	public:
		Stack(int n = MAX);
		Stack(const Stack &s);
		~Stack();
		bool isempty() const;
		bool isfull() const;
		bool push(Item &item);
		bool pop(Item &item);
		Stack &operator=(const Stack &s);
};


#endif
