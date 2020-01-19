// 7_5b.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
using namespace std;

std::array<int,5>& function(std::array<int, 5> myArr)
{
	myArr[0] = 7;

	return myArr;
}
int main()
{
	std::array<int, 5> myArr{ 1,2,3,4,5 };

	myArr = function(myArr);

	cout << myArr[0] << endl;

	return 0;
}
