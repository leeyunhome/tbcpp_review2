// 8_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Fraction
{
private:
	int numerator;
	int denominator;

public:
	/*Fraction()
	{
		numerator = 1;
		denominator = 1;
	}*/
	Fraction(const int& numerator_in = 0, const int& denominator_in = 1)
		: numerator(numerator_in), denominator(denominator_in)
	{
		cout << numerator << "/" << denominator << " created" << endl;
	}
	~Fraction()
	{
		cout << numerator << "/" << denominator << " destroyed" << endl;

	}
	void print()
	{
		cout << numerator << " / " << denominator << endl;
	}
};
int main()
{
	//Fraction frac;	// frac()
	Fraction two_third(2, 3);
	Fraction one_third = Fraction{ 1, 3 };
	//one_third.print();

	return 0;
}

