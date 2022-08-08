#ifndef MYTIME_H
#define MYTIME_H

#include <iostream>

using namespace std;

class Time
{
	private:
		int hours;
		int minutes;
	public:
		Time();
		Time(int h, int m = 0);
		void AddMin(int m);
		void AddHr(int h);
		void Reset(int h = 0, int m = 0);
		friend Time operator+(const Time &t0, const Time &t);
		friend Time operator-(const Time &t0, const Time &t);
		friend Time operator*(const Time &t, double mult);
		friend Time operator*(double mult, const Time &t);
		friend ostream &operator<<(ostream &os, const Time &t);

};

#endif
