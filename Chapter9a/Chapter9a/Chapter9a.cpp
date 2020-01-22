// Chapter9a.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0)
	{
		m_cents = cents;
	}

	int getCents() const
	{
		return m_cents;
	}

	int& getCents()
	{
		return m_cents;
	}

	// = , [] , (), ->
	Cents operator+(const Cents& c2)
	{
		return Cents(this->m_cents + c2.m_cents);
	}
};



void add(const Cents& c1, const Cents& c2, Cents& c_out)
{
	//c_out = Cents(c1.getCents() + c2.getCents());
	c_out.getCents() = c1.getCents() + c2.getCents();
}
int main()
{
	Cents cents1(6);
	Cents cents2(8);
	Cents sum;

	/*add(cents1, cents2, sum);
	cout << sum.getCents() << endl;*/

	//cout << add(cents1, cents2).getCents() << endl;
	cout << (cents1 + cents2 + Cents(6) + Cents(10) + Cents(10) + Cents(100)).getCents() << endl;


	// ?: :: sizeof . .*
	// ^

	return 0;
}
