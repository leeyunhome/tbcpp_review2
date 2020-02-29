// Chapter9b.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <typeinfo>
using namespace std;

class Cents
{
private:
	int m_cents;
public:
	Cents(int cents)
	{
		this->m_cents = cents;
		cout << "Cents("<< m_cents << ") 按眉 积己" << endl;
	}
	~Cents()
	{
		cout << "Cents(" << m_cents << ") 按眉 家戈" << endl;

	}

	int getCents() const
	{
		return m_cents;
	}
	

};
Cents operator + (const Cents& c1, const Cents& c2)
{
	return Cents(c1.getCents() + c2.getCents());
}

int main()
{
	Cents c1(9);
	Cents c2(10);
	Cents(6);

	cout << (c1 + c2 + Cents(6)).getCents() << endl;

	return 0;
}

