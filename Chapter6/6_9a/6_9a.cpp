// 6_9a.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	char name[] = "Leehyerim";

	char* ptr = name;

	const int n_name = sizeof name / sizeof name[0];

	for (int i = 0; i < n_name; ++i)
	{
		cout << *(ptr + i);
	}
	return 0;
}
