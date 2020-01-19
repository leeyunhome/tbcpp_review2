// 7_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>	// sin(), cos()
#include "MyConstants.h"

using namespace std;

void addOne(int& y)
{
	cout << y << " " << &y << endl;

	y = y + 1;
}

void getSinCos(const double degrees, double& sin_out, double& cos_out)
{
	const double radians = degrees * Constants::pi / 180.0;
	sin_out = std::sin(radians);
	cos_out = std::cos(radians);
}
void doSomething();

typedef int* pint;

//void foo(int *&ptr)
void foo(pint &ptr)
{
	cout << ptr << " " << &ptr << endl;
}
int main()
{
	int x = 5;
	pint ptr = &x;
	cout << ptr << " " << &ptr << endl;

	foo(ptr);

	/*double sin(0.0);
	double cos(0.0);

	cout << "In main.cpp " << Constants::pi << " " << &Constants::pi << endl;
	doSomething();
	cout << sin << " " << cos << endl;
	
	getSinCos(30, sin, cos);

	cout << sin << " " << cos << endl;*/

	/*int x = 5;
	cout << x << " " << &x << endl;
	addOne(x);

	cout << x << " " << &x << endl;*/

	return 0;
}

