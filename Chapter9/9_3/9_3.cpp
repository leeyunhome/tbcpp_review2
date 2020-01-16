// 9_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents_in = 0)
		: m_cents(cents_in)
	{}
	int getCents() const
	{
		return m_cents;
	}
	int& getCents()
	{
		return m_cents;
	}

	friend std::ostream& operator<<(std::ostream& out, const Cents& cents)
	{
		out << cents.m_cents;
		return out;
	}

	//Cents operator-()
	//{
	//	return -m_cents;
	//}
	Cents operator-() const
	{
		return Cents(-m_cents);
	}
	
	bool operator!() const
	{
		return (m_cents == 0) ? true: false;
	}
};

int main()
{
	Cents cents1(6);
	Cents cents2(2);

	cout << -(-cents1) << endl;
	cout << -(-(-cents1)) << endl;
	cout << -Cents(-20) << endl;

	if (!cents2)
	{
		cout << cents2.getCents() << " is false" << endl;
	}
	else
	{
		cout << cents2.getCents() << " is true" << endl;
	}

	return 0;
}
