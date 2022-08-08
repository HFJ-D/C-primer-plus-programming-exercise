#include "complex0.h"
using namespace std;
complex::complex()
{
    real_ = im_ = 0.0;
}

complex::complex(double real, double im)
{
    real_ = real;
    im_ = im;
}
complex complex::operator+ (const complex & c) const
{
    return complex(real_+c.real_, im_+c.im_);
}

complex complex::operator- (const complex & c) const
{
    return complex(real_-c.real_, im_-c.im_);
}

complex complex::operator* (const complex & c) const
{
    return complex(real_*c.real_ - im_*c.im_, real_ * c.im_+ im_ * c.real_);
}   

complex complex::operator~ () const
{
    return complex(real_, -im_);
}

complex operator* (double x, const complex & c)
{
    return complex(c.real_*x, c.im_*x);
}

istream & operator>> (istream & os, complex & c)
{
    double real, im;
    cout << "real: ";
    os >> real;
    cout << "imaginary: ";
    os >> im;
    c = complex(real, im);

    return os;
}
ostream & operator<< (ostream & os, const complex & c)
{
    os << "(" << c.real_ << ", " << c.im_ << "i)";

    return os;
}