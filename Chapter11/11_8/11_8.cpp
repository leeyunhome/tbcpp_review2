// 11_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Base
{
protected:
	int m_i;

public:
	Base(int value)
		: m_i(value)
	{}

	void print()
	{
		cout << "I'm base " << endl;
	}
};

class Derived : public Base
{
private:
	double m_d;
	using Base::print; // do not add ()

public:
	Derived(int value)
		: Base(value)
	{}

	using Base::m_i; //m_i가 derived안에서는 public이 돼 버려요;
	
private:
	void print() = delete;
};
int main()
{
	Base base(5);
	base.print();

	Derived derived(7);
	
	derived.m_i = 1023;
	derived.print();


	return 0;
}
