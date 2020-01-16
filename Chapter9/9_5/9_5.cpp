// 9_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Digit
{
private:
	int m_digit;

public:
	Digit(const int& digit_in)
		: m_digit(digit_in)
	{}

	int& operator++()
	{
		return ++m_digit;
	}

	Digit operator++(int)
	{
		Digit temp = m_digit;
		++m_digit;
		return temp;
	}

	friend std::ostream& operator << (std::ostream& out, const Digit& digit)
	{
		out << digit.m_digit;
		return out;
	}
};

int main()
{
	using namespace std;

	Digit digit(1);

	cout << ++(++digit) << endl;


	return 0;
}

