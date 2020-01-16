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
		//cout << "consturctor" << endl;
		assert(den != 0);
	}
	~Fraction()
	{
		//cout << "destructor" << endl;
	}

	Fraction(const Fraction& fraction) // copy consturctor
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


void doSomething(Fraction frac)
{
	cout << frac << endl;
}

int main()
{
	Fraction frac(7);

	doSomething(7);

	return 0;
}
