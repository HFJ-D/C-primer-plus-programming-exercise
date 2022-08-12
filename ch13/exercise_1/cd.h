#ifndef CD_H
#define CD_H
#include <iostream>
class Cd{
    private:
        char performers[50];
        char label[20];
        int selections;
        double playtime;
    public:
        Cd(const char * s1, const char * s2, int n, double x);
        Cd(const Cd & d);
        Cd();
        virtual ~Cd(){}
        virtual void Report() const;
        Cd & operator=(const Cd & c);
};

class Classic: public Cd
{
    private:
        char * works;
    public:
        Classic();
        Classic(const char * work, const char * s1, const char * s2, int n, double x);
        Classic(const Cd & c, const char * work = "C++");
        Classic(const Classic & c);
        virtual ~Classic(){ delete [] works;}
        virtual void Report() const;
        Classic & operator=(const Classic & d);
};

#endif
