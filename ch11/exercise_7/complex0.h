#ifndef COMPLEX_0_H
#define COMPLEX_0_H

#include <iostream>
using std::istream;
using std::ostream;
class complex
{
    private:
        double real_;
        double im_;
    public:
        complex();
        complex(double real, double im);
        ~complex(){}
        complex operator+ (const complex & c) const;
        complex operator- (const complex & c) const;
        complex operator* (const complex & c) const;
        complex operator~ () const;
        friend complex operator* (double x, const complex & c);
        friend istream & operator>> (istream & os, complex & c);
        friend ostream & operator<< (ostream & os, const complex & c);
};
#endif