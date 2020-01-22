#include <iostream>
#include <fstream>
using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(const int& cents_in = 0)
		: m_cents(cents_in)
	{}
	int getCents() const { return m_cents; }
	int& getCents() { return m_cents; }

	/*friend std::ostream& operator << (std::ostream& out, const Cents& cents)
	{
		out << cents.m_cents;
		return out;
	}*/

	Cents operator-() const
	{
		return Cents(-m_cents);
	}

	/*int operator-()
	{
		return -this->m_cents;
	}*/

	bool operator!() const
	{
		return (this->m_cents == 0) ? true : false;
	}

	void print()
	{
		cout << m_cents << endl;
	}
};

int main()
{
	Cents cents1(6);
	Cents cents2(0);
	
	(-(-(-cents1))).print();
	/*cout << cents1 << endl;
	cout << -cents1 << endl;
	cout << -Cents(-10) << endl;

	if (!cents1)
	{
		cout << "money" << endl;
	}
	else
	{
		cout << "no money" << endl;
	}
	cout << !cents2 << endl;
	cout << !cents1 << endl;*/

	return 0;
}