#include "stack.h"

bool Stack::isempty() const
{
    return top == 0 ? true : false;
}

bool Stack::isfull() const
{
    return top == MAX ? true : false;
}

bool Stack::push(Item & item)
{
    if(top < MAX)
    {
        items[top++] = item;
        return true;
    }       
    else
        return false;
}

bool Stack::pop(Item & item)
{
    if(top > 0)
    {
        total += items[top-1].payment;
        item = items[--top];

        return true;
    }       
    else
        return false;
}

void Stack::show() const
{
    std::cout << "The top of stack is " << top << std::endl;
    std::cout << "The total payment is " << total << std::endl;
}