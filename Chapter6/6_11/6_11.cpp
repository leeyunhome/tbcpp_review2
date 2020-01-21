// 6_11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	//int var;
	int* ptr = new (std::nothrow) int{ 7 };

	if (ptr)
	{
		cout << ptr << endl;
		cout << *ptr << endl;
	}
	else
	{
		cout << "Could not allocate memory" << endl;
	}

	delete ptr;
	ptr = nullptr;
	cout << "After delete" << endl;
	if (ptr != nullptr)
	{
		cout << ptr << endl;
		cout << *ptr << endl;
	}
		



	return 0;
}

