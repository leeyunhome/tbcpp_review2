// 7_12a.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void countDown(int count)
{
	cout << count << endl;
	if (count > 0)
		countDown(count - 1);

}

int main()
{
	countDown(2);
	return 0;
}
