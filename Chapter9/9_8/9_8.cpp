// 9_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

	int getCents() { return m_cents; }
	void setCents(int cents) { m_cents = cents; }

	operator int()
	{
		cout << "cast here" << endl;
		return m_cents;
	}

};

class Dollar
{
private:
	int m_dollars = 0;

public:
	Dollar(const int& input) : m_dollars(input) {}

	operator Cents()
	{
		return Cents(m_dollars * 100);
	}

};

void printInt(const int& value)
{
	cout << value << endl;
}
int main()
{
	Cents cents(7);

	/*Dollar dollar(2);

	Cents cents = dollar;*/

	printInt(cents);
	//int value = (int)cents;
	//value = int(cents);
	//value = static_cast<int>(cents);

	//printInt(cents);


	//printInt(Cents(dollar));

	return 0;
}
