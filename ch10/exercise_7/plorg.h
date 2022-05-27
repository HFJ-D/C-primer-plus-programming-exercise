#ifndef PLORG_H
#define PLORG_H
#include <iostream>
class Plorg
{
private:
    char name_[20];
    int CI_;
public:
    Plorg(const char * name = "Plorga");
    ~Plorg(){}
    void setCI(int CI);
    void show() const;
};

#endif