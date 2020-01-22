// 7_14_static_assert.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <cassert>	// assert.h
using namespace std;

int main()
{
	const int x = 10;

	assert(x == 5);



	static_assert(x == 5, "x should be 5 (hr)");

	return 0;
}

