// 7_5_tuple.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <tuple>

struct S
{
	int a, b, c;
};

S function()
{
	struct S s;
	struct S ns{7, 8, 9,};

	int a = 1;
	int b = 2;
	int c = 3;
	s.a = a;
	s.b = b;
	s.c = c;

	//return s;
	return ns;
}

int main()
{
	struct S s1;
	s1 = function();

	std::cout << s1.a << " " << s1.b << " " << s1.c << std::endl;

	return 0;
}

