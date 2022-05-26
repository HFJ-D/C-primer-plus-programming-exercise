#ifndef __STACK_H__
#define __STACK_H__
#include <iostream>
struct customer
{
    char fullname[35];
    double payment;
};
typedef customer Item;
class Stack
{
    private:
        enum {MAX = 5};
        Item items[MAX];
        int top;
        double total;
    public:
        Stack(){top = total = 0;}
        ~Stack(){}
        bool isempty() const;
        bool isfull() const;
        bool push(Item & item);
        bool pop(Item & item);
        void show() const;
};


#endif