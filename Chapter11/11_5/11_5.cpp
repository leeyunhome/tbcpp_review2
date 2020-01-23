// 11_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Base
{
public:
	int m_public;
protected:
	int m_protected;
private:
	int m_private;
};

class Derived : private Base
{
public:
	Derived()
	{
		Base::m_public;
		Base::m_protected;

	}
};

class GrandChild : public Derived
{
public:
	GrandChild()
	{
		Derived::m_pro
	}
};
int main()
{
	Derived derived;
	

	return 0;
}

