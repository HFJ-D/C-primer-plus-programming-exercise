#include "string2.h"
#include <cstring>
#include <cctype>

int String::num_strings = 0;

int String::HowMany()
{
	return num_strings;
}

String::String(const char *s)
{
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
	num_strings++;
}

String::String()
{
	len = 0;
	str = new char[1];
	str[0] = '\0';
	num_strings++;
}

String::String(const String &st)
{
	len = st.len;
	str = new char[len + 1];
	strcpy(str, st.str);
	num_strings++;
}

String::~String()
{
	--num_strings;
	delete []str;
}

void String::stringup()
{
	for(int i = 0; i < len; i++)
	{
		str[i] = toupper(str[i]);
	}
}
void String::stringlow()
{
	for(int i = 0; i < len; i++)
	{
		str[i] = tolower(str[i]);
	}
}
int String::has(const char & c) const
{
	int count = 0;
	for(int i = 0; i < len; i++)
	{
		if(str[i] == c)
			count++;
	}
	return count;
}
String &String::operator=(const String &st)
{
	if(this == &st)
		return *this;
	delete []str;
	len = st.len;
	str = new char[len + 1];
	strcpy(str, st.str);
	return *this;
}

String &String::operator=(const char *s)
{
	delete []str;
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
	return *this;
}
String String::operator+(const String &st) const
{
	String temp(*this);
	
	return String(strcat(temp.str, st.str));
}
char &String::operator[](int i)
{
	return str[i];
}

const char &String::operator[](int i) const
{
	return str[i];
}
String operator+(const char * s, const String & st)
{
	return String(s) + st;
}
bool operator<(const String &str1, const String &str2)
{
	return (strcmp(str1.str, str2.str) < 0);
}

bool operator>(const String &str1, const String &str2)
{
	return str2 < str1;
}

bool operator==(const String &str1, const String &str2)
{
	return (strcmp(str1.str, str2.str) == 0);
}

ostream &operator<<(ostream &os, const String &st)
{
	os << st.str;
	return os;
}

istream &operator>>(istream &is, String &st)
{
	//cin, cin.get()
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if(is)
		st = temp;
	while(is && is.get() != '\n')
		continue;

	return is;
}
