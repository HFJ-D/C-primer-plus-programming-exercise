#include <iostream>
void print_1();
void print_2();
int main3() 
{
	using namespace std;
	print_1();
	print_1();
	print_2();
	return 0;
}

void print_1()
{
	std::cout << "Three blind mice \n";
}

void print_2()
{
	for (int i = 0; i < 2; i++)
		std::cout << "See how they run \n";
}