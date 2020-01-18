// 5_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int power(int base, int exponent);
int main()
{
	for (int j = 0; j < 9; ++j)
	{
		for (int i = 0; i < 9; ++i)
		{
			cout << i << " " << j << endl;
		}
	}
	/*for (int i = 0, j = 0; (i + j) < 10; i++, j += 2)
	{
		cout << i << " " << j << endl;
	}*/

	//cout << power(2, 8) << endl;
	/*for (int i = 0; i < 10; ++i)
	{
		cout << i << " ";
	}
	cout << endl;*/
	return 0;
}
int power(int base, int exponent)
{
	int result = 1;
	for (int i = 0; i < exponent; ++i)
	{
		result *= base;
	}

	return result;
}


