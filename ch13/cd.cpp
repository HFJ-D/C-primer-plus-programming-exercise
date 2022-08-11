#include "cd.h"
#include<cstring>

Cd::Cd(const char * s1, const char * s2, int n, double x)
{
	strcpy(performers, s1);
	strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd & c)
{
	strcpy(performers, c.performers);
	strcpy(label, c.label);
	selections = c.selections;
	playtime = c.playtime;
}

Cd::Cd()
{
	performers[0] = '\0';
	label[0] = '\0';
	selections = 0;
	playtime = 0;
}

void Cd::Report() const
{
	using std::cout;
	using std::endl;
	cout << "Performers: " << performers << endl;
	cout << "Label: " << label << endl;
	cout << "Selections: " << selections << endl;
	cout << "Playtime: " << playtime << endl;
}
Cd & Cd::operator=(const Cd & c)
{
	if(&c == this)
		return *this;
	strcpy(performers, c.performers);
	strcpy(label, c.label);
	selections = c.selections;
	playtime = c.playtime;

	return *this;
}

Classic::Classic(): Cd()
{
	works = new char[4];
	strcpy(works, "C++");
}

Classic::Classic(const char * work, const char * s1, const char * s2, int n, double x): Cd(s1, s2, n, x)
{
	works = new char[strlen(work)+1];
	strcpy(works, work);
}

Classic::Classic(const Cd & c, const char * work): Cd(c)
{
	works = new char[strlen(work)+1];
	strcpy(works, work);
}

Classic::Classic(const Classic & c): Cd(c)
{
	works = new char[strlen(c.works)+1];
	strcpy(works, c.works);
}

void Classic::Report() const
{
	Cd::Report();
	std::cout << "Works: " << works << std::endl;
}

Classic & Classic::operator=(const Classic & d)
{
	if(&d == this)
		return *this;
	Cd::operator=(d);
	delete [] works;
	works = new char[strlen(d.works)+1];
	strcpy(works, d.works);
	return *this;
}
