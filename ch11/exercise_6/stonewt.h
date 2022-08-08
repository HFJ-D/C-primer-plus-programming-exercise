#ifndef __STONEWT_H__
#define __STONEWT_H__

#include <iostream>
using std::ostream;
class Stonewt
{
	public:
        enum Mode{STONE,INTPOUND,FLOATPUND};
    private:
		enum{Lbs_per_stn = 14};
        Mode state = FLOATPUND;
		int stone;
		double pds_left;
		double pounds;
	public:
		//explicit Stonewt(double lbs);
		Stonewt(double lbs);
		Stonewt(int stn, double lbs);
		Stonewt();
        void set_state(Mode mode);
        Stonewt operator+ (const Stonewt & s) const;
        Stonewt operator- (const Stonewt & s) const;
        Stonewt operator* (double mul) const;
		bool operator> (const Stonewt & s) const;
        bool operator>= (const Stonewt & s) const;
		bool operator< (const Stonewt & s) const;
        bool operator<= (const Stonewt & s) const;
		bool operator== (const Stonewt & s) const;
        bool operator!= (const Stonewt & s) const;
        friend Stonewt operator* (double mul, const Stonewt & s);
        friend ostream & operator<< (ostream & os, const Stonewt & s);
};

#endif