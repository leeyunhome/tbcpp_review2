// 7_12a.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void countDown(int count)
{
	cout << count << endl;
	if (count > 0)
		countDown(count - 1);

	cout << count << endl;

}

int main()
{
	countDown(5);
	return 0;
}
