// 7_3a.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

//void foo(int (&arr)[5])
void printElements(int arr[])
{
	cout << arr << endl;
}

void printElements(const std::vector<int>& myArr)
{

}

int main()
{
	std::vector<int> myArr{ 1,2,3,4,5,6,7 };
	int arr[]{ 1,2, 3,4,5 };
	cout << arr << endl;
	printElements(arr);
	printElements(myArr);

	return 0;
}

