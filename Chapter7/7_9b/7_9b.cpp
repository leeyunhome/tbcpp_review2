// 7_9b.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <functional>

using namespace std;

bool is_even(const int& input)
{
	if (input % 2 == 0)
		return true;
	else
		return false;
}

bool is_odd(const int& input)
{
	if (input % 2 == 1)
		return true;
	else
		return false;
}

//typedef bool (*fctptr_t)(const int&);
using fctptr_t =  bool (*)(const int&);


void printElement(std::array<int, 6> myArr, std::function<bool(const int&)> fctptr_fcn)
{
	for (auto& elem : myArr)
		if (fctptr_fcn(elem) == true)
		{
			cout << elem << " ";
		}
	cout << endl;

}

int main()
{
	std::array<int, 6> myArr{0, 1,2,3,4,5 };

	std::function<bool(const int&)> fcnptr = is_even;
	printElement(myArr, fcnptr);

	fcnptr = is_odd;

	printElement(myArr, fcnptr);

	return 0;
}
