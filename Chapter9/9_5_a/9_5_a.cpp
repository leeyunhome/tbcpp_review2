// 9_5_a.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Digit
{
private:
	int m_digit;

public:
	Digit(int digit = 0) : m_digit(digit) {}

	//prefix
	Digit& operator++()
	{
		++m_digit;
		return *this;
	}

	//postfix
	Digit& operator++(int)
	{
		Digit tmp = m_digit;
		++(*this);
		return tmp;
	}

	friend std::ostream& operator << (std::ostream& out, const Digit& digit)
	{
		out << digit.m_digit;
		return out;
	}
};
int main()
{
	Digit digit1(7);

	cout << ++digit1 << endl;
	cout << ++(++digit1) << endl;

	cout << (digit1++)++ << endl;
	cout << digit1 << endl;

	return 0;
}

