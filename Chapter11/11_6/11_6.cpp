// 11_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Base
{
protected:
	int m_value;

public:
	Base(int value)
		: m_value(value)
	{

	}

	
};

class Derived : public Base
{
public:
	Derived(int value)
		: Base(value)
	{

	}

	void setValue(int value)
	{
		Base::m_value = value;
	}
};
int main()
{

	return 0;
}
