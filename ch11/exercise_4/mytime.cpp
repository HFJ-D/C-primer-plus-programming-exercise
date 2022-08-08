#include "mytime.h"

Time::Time()
{
	hours = minutes = 0;
}

Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}

void Time::AddMin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}

void Time::AddHr(int h)
{
	hours += h;
}

void Time::Reset(int h, int m)
{
	hours = h;
	minutes = m;
}

Time operator+(const Time &t0, const Time &t)
{
	Time sum;

	sum.minutes = t0.minutes + t.minutes;
	sum.hours = t0.hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;

	return sum;
}

Time operator-(const Time &t0, const Time &t)
{
	Time diff;

	int tot1, tot2;
	tot1 = t0.hours * 60 + t0.minutes;
	tot2 = t.hours * 60 + t.minutes;
	diff.hours = (tot1 - tot2) / 60;
	diff.minutes = (tot1 - tot2) % 60;

	return diff;
}

Time operator*(const Time &t, double mult)
{
	Time result;

	long totalminutes = t.hours*mult*60 + t.minutes*mult;
	result.hours = totalminutes / 60;
	result.minutes = totalminutes % 60;

	return result;
}

Time operator*(double mult, const Time &t)
{
	Time result;

	long totalminutes = t.hours*mult*60 + t.minutes*mult;
	result.hours = totalminutes / 60;
	result.minutes = totalminutes % 60;

	return result;
}

ostream &operator<<(ostream &os, const Time &t)
{
	os << t.hours << " hours, " << t.minutes << " minutes.";
	return os;
}


