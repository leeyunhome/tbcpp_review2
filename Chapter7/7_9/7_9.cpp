// 7_9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int func()
{
	return 7;
}

int goo()
{
	return 10;
}
int main()
{
	int (*pfunc)() = func;

	
	cout << pfunc() << endl;

	pfunc = goo;

	cout << pfunc() << endl;


	return 0;
}

