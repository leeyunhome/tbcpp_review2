// 7_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int add(int x, int y);
double add(double x, double y);

typedef int my_int;

void print(const char* value) {}
void print(int value) {}

int main()
{
	print('a');

	return 0;
}

int add(int x, int y)
{
	return x + y;
}

double add(double x, double y)
{
	return x + y;
}
