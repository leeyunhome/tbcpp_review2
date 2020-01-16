// 9_9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cassert>
using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	Fraction(int num = 0, int den = 1)
		: m_numerator(num), m_denominator(den)
	{
		cout << "consturctor" << endl;
		assert(den != 0);
	}
	~Fraction()
	{
		cout << "destructor" << endl;
	}

	Fraction(const Fraction &fraction) // copy consturctor
		: m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
	{
		cout << "Copy constructor called" << endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Fraction& f)
	{
		out << f.m_numerator << " / " << f.m_denominator;
		return out;
	}
};


Fraction doSomething()
{
	Fraction temp(1, 2);
	cout << &temp << endl;
	return temp;
}

int main()
{
	Fraction result = doSomething();
	cout << &result << endl;

	cout << result << endl;
	//Fraction frac(3, 5);

	//Fraction fr_copy(Fraction(3, 10));
	////Fraction fr_copy(3, 10);

	//cout << frac << " " << fr_copy << endl;

	return 0;
}
