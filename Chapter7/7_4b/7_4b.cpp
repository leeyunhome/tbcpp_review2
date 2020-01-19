// 7_4b.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

typedef int* pint;

void printArray(int arr[], int length)
{

	for (int i = 0; i < length; ++i)
	{
		cout << arr[i] << " ";
	}
	arr[0] = 7;
	cout << endl;

}




int main()
{
	int arr[]{ 1, 2, 3, 4, 5, };


	for (auto& elem : arr)
		cout << elem << " ";
	cout << endl;

	size_t length = sizeof arr / sizeof arr[0];

	printArray(arr, length);

	for (auto& elem : arr)
		cout << elem << " ";
	cout << endl;

	return 0;
}

