// 6_7a.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstddef>

using namespace std;

void doSomething(double* ptr)
{
	cout << "address of pointer variable in doSomething() " << &ptr << endl;

	if (ptr != nullptr)
	{
		// do something useful
		cout << *ptr << endl;
	}
	else
	{
		// do nothing with ptr
		cout << "Null ptr, do nothing" << endl;
	}
}
int main()
{
	double* ptr{ nullptr };	// modern c++
	
	doSomething(ptr);
	doSomething(nullptr);

	double d = 3.141592;

	doSomething(&d);

	ptr = &d;

	doSomething(ptr);

	cout << "address of pointer variable in main() " << &ptr << endl;
	//std::nullptr_t nptr;

	return 0;
}

