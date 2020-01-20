// 7_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

inline int min(int x, int y);

int main()
{
	cout << min(5, 6) << endl;
	cout << min(7, 5) << endl;

	
	return 0;
}

int min(int x, int y)
{
	return (x < y) ? x : y;
}
