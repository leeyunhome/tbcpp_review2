// test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calc.h"


int main()
{
	using namespace std;

	Calc calc1;
	Digit digit1(7);
	Digit digit2(5);
	Digit digit3(2);

	Calc calc2;

	calc1.registDigit(&digit1);
	calc1.registDigit(&digit2);
	calc1.registDigit(&digit3);

	calc2.registDigit(&digit1);
	calc2.bloom();

	cout << calc1 << endl;
	cout << calc2 << endl;

	return 0;
}
