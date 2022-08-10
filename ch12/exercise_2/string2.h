#ifndef __STRING_2_H__
#define __STRING_2_H__

#include <iostream>

using namespace std;

class String
{
	private:
		char *str;
		int len;
		static int num_strings;
		static const int CINLIM = 80;

	public:
		String(const char *s);
		String();
		String(const String &st);
		~String();
		int length() const{return len;}
		void stringup();
		void stringlow();
		int has(const char & c) const;

		String &operator=(const String &st);
		String &operator=(const char *s);
		String operator+(const String & st) const;
		char &operator[](int i);
		const char &operator[](int i) const;

		friend String operator+(const char * s, const String &st);
		friend bool operator<(const String &str1, const String &str2);
		friend bool operator>(const String &str1, const String &str2);
		friend bool operator==(const String &str1, const String &str2);
		friend ostream &operator<<(ostream &os, const String &st);
		friend istream &operator>>(istream &is, String &st);

		static int HowMany();
};

#endif