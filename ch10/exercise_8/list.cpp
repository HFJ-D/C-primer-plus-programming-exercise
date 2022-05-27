#include "list.h"

List::List(Item * items, int n)
{
    int i;
    for(i = 0; i<n && i<MAX; ++i)
    {
        items_[i] = items[i];
    }
    index_ = i;
}

void List::append(Item & item)
{
    if(index_ < MAX)
        items_[index_++] = item;
    else
        std::cout << "The list is already full.\n";
}

bool List::isempty() const
{
    return index_ == 0 ? true : false;
}

bool List::isfull() const
{
    return index_ == MAX ? true : false;
}

void List::visit(void (*pf)(Item &))
{
    for(int i = 0; i < index_; ++i)
    {
        (*pf)(items_[i]);
    }
}