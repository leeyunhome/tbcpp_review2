// 6_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void printArray(const int (&myArr)[10], const unsigned& length);
void selectionSort(int myArr[], const unsigned& length);
void swap(int& x, int& y);

int main()
{
	int myArr[] = { 22, 13, 17, 26, 2, 11, 1, 5, 3, 7 };
	unsigned length = sizeof(myArr) / sizeof(myArr[0]);

	cout << length << endl;
	
	printArray(myArr, length);

	cout << "after selection sorting " << endl;

	selectionSort(myArr, length);

	cout << endl;

	printArray(myArr, length);


	return 0;
}

void printArray(const int (&myArr)[10], const unsigned& length)
{
	for (unsigned i = 0; i < length; ++i)
	{
		cout << myArr[i] << " ";
	}
	cout << endl;
}
void selectionSort(int myArr[], const unsigned& length)
{
	for (unsigned i = 0; i < length - 1; ++i)
	{
		int min_idx = i;
		for (unsigned j = i + 1; j < length; ++j)
		{
			if (myArr[min_idx] > myArr[j])
			{
				min_idx = j;
			}
		}
		swap(myArr[min_idx], myArr[i]);


	}
}
void swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

