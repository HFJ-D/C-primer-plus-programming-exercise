#ifndef LIST_H
#define LIST_H
#include <iostream>
typedef unsigned long Item;

class List
{
private:
    static const int MAX = 10;
    Item items_[MAX];
    int index_;
public:
    List(){index_ = 0;}
    List(Item * items, int n);
    ~List(){}
    void append(Item & item);
    bool isempty() const;
    bool isfull() const;
    void visit(void (*pf)(Item &));
};

#endif