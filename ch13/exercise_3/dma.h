#ifndef DMA_H
#define DMA_H

#include <iostream>

using namespace std;
class ABC
{
	private:
		char *label;
		int rating;
	public:
		ABC(const char *l = "null", int r = 0);
		ABC(const ABC &rs);
		virtual ~ABC();
		ABC &operator=(const ABC &s);
		friend ostream &operator<<(ostream &os, const ABC &rs);
		virtual void View() const;
		
};

class baseDMA: public ABC
{

	public:
		baseDMA(const char *l = "null", int r = 0): ABC(l, r){}
		baseDMA(const baseDMA &rs): ABC(rs){}
		virtual ~baseDMA(){}
		baseDMA &operator=(const baseDMA &s);
		friend ostream &operator<<(ostream &os, const baseDMA &rs);
		virtual void View() const;
};

class lacksDMA : public ABC
{
	private:
		enum{COL_LEN = 40};
		char color[COL_LEN];
	public:
		lacksDMA(const char *c = "blank", const char * l = "null", int r = 0);
		lacksDMA(const char *c, const ABC &rs);
		friend ostream &operator<<(ostream &os, const lacksDMA &rs);
		virtual void View() const;
};

class hasDMA : public ABC
{
	private:
		char *style;
	public:
		hasDMA(const char *s = "none", const char *l = "null", int r = 0);
		hasDMA(const char *s, const ABC &rs);
		hasDMA(const hasDMA &hs);
		~hasDMA();
		hasDMA &operator=(const hasDMA & hs);
		friend ostream &operator<<(ostream &os, const hasDMA &rs);
		virtual void View() const;
};

#endif