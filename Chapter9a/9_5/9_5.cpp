// 9_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Digit
{
private:
	int m_digit;

public:
	Digit(const int& digit_in = 0)
		: m_digit(digit_in)
	{}

	//Digit operator++()
	//{
	//	/*Digit temp;
	//	temp = Digit(++m_digit);*/
	//	return Digit(++m_digit);
	//}

	// prefix
	Digit& operator++()
	{
		/*Digit temp;
		temp = Digit(++m_digit);*/
		++m_digit;
		return *this;
	}

	// postfix
	Digit operator++(int)
	{
		Digit temp = m_digit;
		++(*this);
		return temp;
	}

	void print()
	{
		cout << m_digit << endl;
	}


	//friend std::ostream& operator << (std::ostream& out, const Digit& d)
	//{
	//	out << d.m_digit;
	//	return out;
	//}
};

int main()
{
	Digit d1(7);

	d1++;
	d1.print();

	/*++(++(++d1));
	d1.print();*/


	//cout << ++(++(++d1)) << endl;

	return 0;
}
