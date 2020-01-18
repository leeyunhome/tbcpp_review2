// minmaxTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

#define MAX 20
#define MIN 10
#define MAX > MIN ? MAX : MIN

int main()
{
	int x = 5;
	int y = 6;


	cout << (x > y ? x : y) << endl;

	return 0;
}

