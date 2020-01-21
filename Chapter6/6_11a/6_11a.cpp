// 6_11a.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	// memory leak
	while (true)
	{
		int* ptr = new int;
		cout << ptr << endl;

		delete ptr;
	}
	// memory leak

	//int* ptr = new (std::nothrow) int{ 7 };
	//int* ptr2 = ptr;

	//delete ptr;
	//ptr = nullptr;
	////ptr2 = nullptr;
	//// *ptr2

	return 0;
}

