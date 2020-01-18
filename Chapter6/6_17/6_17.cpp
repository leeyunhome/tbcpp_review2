// 6_17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <limits>
#include <algorithm>
#include <vector>

using namespace std;
int maxFind(const int& a, const int& b);


int main()
{
	/*int fibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13,
					21, 34, 55, 89 };*/
	std::vector<int> fibonacci= { 0, 1, 1, 2, 3, 5, 8, 13,
					21, 34, 55, 89 };


	size_t length = sizeof fibonacci / sizeof fibonacci[0];

	//auto min_number = std::numeric_limits<int>::max();
	int max_number = std::numeric_limits<int>::lowest();

	for (const auto& number : fibonacci)
	{
		max_number = max(max_number, number);
	}

	//for (unsigned int i = 0; i < length; ++i)
	//{
	//	//min_number = std::min(min_number, fibonacci[i]);
	//	max_number = std::max(max_number, fibonacci[i]);
	//}

	//cout << min_number << endl;
	cout << max_number << endl;

	return 0;
}

int maxFind(const int& a, const int& b)
{
	return (a > b) ? a : b;
}

