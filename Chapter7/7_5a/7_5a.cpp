// 7_5a.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int& getValue(int x)
{
	int value = x * 2;
	return value;
}

int main()
{
	int n = 7;
	int &value = getValue(n);

	cout << value << endl;
	cout << value << endl;
	
	return 0;
}
