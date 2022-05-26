#ifndef __GOLF_H__
#define __GOLF_H__
#include <cstring>
class Golf
{
    private:
        static const int Len = 40;
        char fullname_[Len];
        int handicap_;
    public:
        Golf(){fullname_[0] = '\0'; handicap_ = 0;}
        Golf(const char * name, int hc);
        ~Golf(){}
        int setgolf();
        void handicap(int hc);
        void showgolf() const;

};

#endif