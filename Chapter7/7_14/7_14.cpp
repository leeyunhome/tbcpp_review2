// 7_14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cassert>	// assert.h
#include <array>

void printValue(const std::array<int, 5>& my_array, const unsigned int& ix)
{
	assert(ix >= 0);
	assert(ix <= my_array.size() - 1);
	std::cout << my_array[ix] << std::endl;

}
int main()
{
	std::array<int, 5> my_array{ 1,2,3,4,5 };

	printValue(my_array, 4);


	//const int number = 5;
	//// ...
	//// number should be 5
	//assert(number == 5);

	return 0;
}
