// 7_12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void recur(int i)
{
	cout << i << endl;

	if (i > 0)
		recur(i - 1);
	cout << i << endl;
}
int main()
{
	recur(3);

	return 0;
}

