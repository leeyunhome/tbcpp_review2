// Chapter6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

void printArray(int(&myarr)[6]);
void selectionSort(int(&myarr)[6]);
void swap(int& x, int& y);
int main()
{
	int myarr[] = { 22, 23, 31, 14, 7, 5 };
	//std::array<int, 5> my_arr = { 1, 2, 3, 4, 5 };

	printArray(myarr);
	cout << "after selection sorting" << endl;
	selectionSort(myarr);
	printArray(myarr);

	return 0;
}
void printArray(int(&myarr)[6])
{
	for (auto& elem : myarr)
		cout << elem << " ";
	cout << endl;
}
void selectionSort(int(&myarr)[6])
{
	for (int i = 0; i < 6; ++i)
	{
		int min_idx = i;
		for (int j = i + 1; j < 6; ++j)
		{
			if (myarr[min_idx] > myarr[j])
			{
				min_idx = j;
			}
		}
		swap(myarr[min_idx], myarr[i]);
	}
}

void swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}



