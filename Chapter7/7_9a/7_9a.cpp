// 7_9a.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
using namespace std;

void printArray(std::array<int, 10>& myArr, bool print_even)
{
	for (auto& elem : myArr)
	{
		if (print_even)
		{
			if (elem % 2 == 0)
				cout << elem;
		}
		else
		{
			if (elem % 2 == 1)
				cout << elem;
		}
	}
}

int main()
{
	std::array<int, 10> myArr{ 0, 1, 2, 3, 4, 5,
						6, 7, 8, 9 };

	void (*fctptr)(std::array<int, 10>& myArr, bool print_even) = printArray;

	fctptr(myArr, true);
	cout << endl;
	fctptr(myArr, false);


	return 0;
}

