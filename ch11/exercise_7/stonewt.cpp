#include "stonewt.h"
using std::cout;

Stonewt::Stonewt(double lbs)
{
	stone = (int)lbs / Lbs_per_stn;
	pds_left = (int)lbs % Lbs_per_stn + lbs - (int)lbs;
	pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt()
{
	stone = pds_left = pounds = 0;
}

void Stonewt::set_state(Mode mode)
{
    state = mode;
}
bool Stonewt::operator> (const Stonewt & s) const
{
    return pounds > s.pounds;
}
bool Stonewt::operator>= (const Stonewt & s) const
{
    return pounds >= s.pounds;
}
bool Stonewt::operator< (const Stonewt & s) const
{
    return pounds < s.pounds;
}
bool Stonewt::operator<= (const Stonewt & s) const
{
    return pounds <= s.pounds;
}
bool Stonewt::operator== (const Stonewt & s) const
{
    return pounds == s.pounds;
}
bool Stonewt::operator!= (const Stonewt & s) const
{
    return pounds != s.pounds;
}
Stonewt Stonewt::operator+ (const Stonewt & s) const
{
    return Stonewt(pounds+s.pounds);
}
Stonewt Stonewt::operator- (const Stonewt & s) const
{
    return Stonewt(pounds-s.pounds);
}
Stonewt Stonewt::operator* (double mul) const
{
    return Stonewt(pounds*mul);
}
Stonewt operator* (double mul, const Stonewt & s)
{
   return Stonewt(s.pounds*mul); 
}
ostream & operator<< (ostream & os, const Stonewt & s)
{
    if(s.state == Stonewt::STONE)
        os << s.stone << " stone, " << s.pds_left << " pounds.\n";
    else if(s.state == Stonewt::INTPOUND)
        os << (int)s.pounds << " pounds.\n";
    else
        cout << s.pounds << " pounds.\n";

    return os;
}

