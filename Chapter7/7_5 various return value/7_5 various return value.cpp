// 7_5 various return value.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//int* getValue(int x)
//{
//	int value = x * 2;
//	return &value;
//}

int* allocateMemory(int size)
{
	return new int[size];
}

int main()
{

	int* array = allocateMemory(1024);

	delete[] array;
	//int *value = getValue(3);
	////int n = *getValue(3);

	//cout << *value << endl;
	////cout << n << endl;

	return 0;
}
