// 12_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Base
{
public:
	//FunctionPointer *__vptr;
	virtual void fun1() {};
	void fun2() {};
};

class Der : public Base
{
public:
	//FunctionPointer *__vptr;
	void fun1() {};
	void fun3() {};
};
int main()
{
	cout << sizeof(Base) << endl;
	cout << sizeof(Der) << endl;

	return 0;
}

