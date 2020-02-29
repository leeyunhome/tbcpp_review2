// test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int array[] = { 1, 2, 3 };
	char name[] = "Jack jack123";

	char* ptr = name;

	cout << array << endl;
	cout << name << endl;
	cout << ptr << endl;

	while (true)
	{
		cout << *(++ptr - 1);
		if (*ptr == '\0')
			break;
	}

	return 0;
}
