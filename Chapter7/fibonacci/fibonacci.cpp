// fibonacci.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int fibonacci(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	else
		return fibonacci(n - 2) + fibonacci(n - 1);
}

int main()
{
	fibonacci(3);

	return 0;
}

