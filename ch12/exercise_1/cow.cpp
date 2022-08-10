#include <cstring>
#include "cow.h"
using namespace std;
Cow::Cow()
{
	strcpy(name, "default");
	hobby = new char[4];
	strcpy(hobby, "C++");
	weight = 0;

}
Cow::Cow(const char * nm, const char * ho, double wt)
{
	strcpy(name, nm);
	hobby = new char[strlen(ho)+1];
	strcpy(hobby, ho);
	weight = wt;
}
Cow::Cow(const Cow & c)
{
	strcpy(name, c.name);
	hobby = new char[strlen(c.hobby)+1];
	strcpy(hobby, c.hobby);
	weight = c.weight;
}
Cow::~Cow()
{
	cout << name << " is deleted.\n";
	delete [] hobby;
}
Cow & Cow::operator=(const Cow & c)
{
	if(&c == this)
		return *this;
	strcpy(name, c.name);
	delete [] hobby;
	hobby = new char[strlen(c.hobby)+1];
	strcpy(hobby, c.hobby);
	weight = c.weight;
	return *this;
	
}
void Cow::ShowCow() const
{
	cout << "name: " << name << endl;
	cout << "hobby: " << hobby << endl;
	cout << "weight: " << weight << endl;
}