// 11_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class A
{
public:
	A(int a)
	{
		cout << "A : " << a << endl;

	}
	~A()
	{
		cout << "A destructor " << endl;

	}
};

class B : public A
{
public:
	B(int a, double b)
		: A(a)
	{
		cout << "B : " << b << endl;
	}
	~B()
	{
		cout << "B destructor " << endl;

	}
};

class C : public B
{
public:
	C(int a, double b, char c)
		: B(a, b)
	{
		cout << "C : " << c << endl;
	}
	~C()
	{
		cout << "C destructor " << endl;

	}
};
int main()
{
	C c(010, 3.14, 'a');

	return 0;
}
