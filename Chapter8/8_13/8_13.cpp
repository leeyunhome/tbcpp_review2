// 8_13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class A
{
private:
public:
	int m_value;

	A(const int& input)
		:m_value(input)
	{
		cout << "Constructor" << endl;
	}
	~A()
	{
		cout << "destructor" << endl;
	}
	void printDouble()
	{
		cout << m_value * 2 << endl;
	}
};

int main()
{
	A a(1);
	a.printDouble();

	A(1).printDouble();

	return 0;
}

