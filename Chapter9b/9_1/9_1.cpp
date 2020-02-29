// 9_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(const int& cents_in)
		: m_cents(cents_in)
	{

	}
	int getCents() const
	{
		return m_cents;
	}
	int& getCents()
	{
		return m_cents;
	}
};

void add(const Cents& c1, const Cents& c2, Cents& c_out)
{
	c_out.getCents() = c1.getCents() + c2.getCents();
}
int main()
{
	Cents c1(6);
	Cents c2(7);
	Cents c_out(0);

	add(c1, c2, c_out);

	cout << c_out.getCents() << endl;
}

