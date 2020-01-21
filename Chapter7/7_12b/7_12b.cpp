// 7_12b.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int sum(int sumto)
{
	if (sumto <= 0)
		return 0;
	else if (sumto <= 1)
		return 1;
	else
	{
		const int sum_minus_one = sum(sumto - 1);
		return sum_minus_one + sumto;
	}

}
int main()
{
	int result = 0;
	result = sum(10);

	cout << result << endl;

	return 0;
}

