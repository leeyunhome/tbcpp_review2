// 7_4a.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void foo(double degree, double* sin_out, double* cos_out)
{
	*sin_out = 11.3;
	*cos_out = 12.3;
}
int main()
{
	int degrees = 30;

	double sin, cos;

	double* sptr = &sin;
	double* cptr = &cos;

	foo(degrees, &sin, &cos);

	cout << sin << " " << cos << endl;

	return 0;
}
