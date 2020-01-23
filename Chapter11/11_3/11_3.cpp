// 11_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Mother
{
private:
	int m_i;

public:
	Mother(const int&i_in = 0)
		: m_i(i_in)
	{
		cout << "Mother() constructor" << endl;
	}
};

class Child : public Mother
{
public:
	double m_d;

public:
	Child()
		: m_d(1.0), Mother(1024)
	{
		
		cout << "Child() constructor" << endl;

		//this->m_i = 10;
		//this->Mother::m_i = 1024;
	}
};

class A
{
public:
	A()
	{
		cout << "A constroctor" << endl;
	}
};
class B : public A
{
public:
	B()
	{
		cout << "B constroctor" << endl;
	}
};
class C : public B
{
public:
	C()
	{
		cout << "C constroctor" << endl;
	}
};

int main()
{
	Child c1;

	cout << sizeof(Mother) << endl;
	cout << sizeof(Child) << endl;

	//A a;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
