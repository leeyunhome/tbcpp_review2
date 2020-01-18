// 6_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <limits>

using namespace std;


int main()
{
	int fibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21,
							34, 55, 89 };
	size_t size = sizeof(fibonacci) / sizeof(fibonacci[0]);

	int max_number = std::numeric_limits<int>::max();
	int max_idx = 0;
	int min_idx = max_number;

	for (int i = 0; i < size; ++i)
	{
		for (int j = i + 1; j < size; ++j)
			if (fibonacci[i] < fibonacci[j])
				max_idx = j;
	}
	cout << fibonacci[max_idx] << endl;



	/*for (auto& number : fibonacci)
		number = number * 10;
	
	for (const auto& number : fibonacci)
		cout << number << ", ";
	cout << endl;*/

	/*for (auto& elem : fibonacci)
		cout << elem << ", ";
	cout << endl;*/

	/*for (unsigned i = 0; i < size; ++i)
	{
		cout << fibonacci[i] << ", ";
	}
	cout << endl;*/
	return 0;
}


