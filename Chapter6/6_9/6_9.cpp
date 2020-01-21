// 6_9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	long long array[] = { 9, 7, 5, 3, 1 };
	
	long long* ptr = array;

	for (int i = 0; i < 5; ++i)
		cout << *(ptr + i) << " " << uintptr_t(ptr + i) << endl;
		//cout << *(array + i) << " " << uintptr_t(array + i) << endl;
		//cout << array[i] << " " << uintptr_t(&array[i]) << endl;


	
	
	/*short value = 7;
	short* ptr = &value;


	cout << uintptr_t(ptr - 1) << endl;
	cout << uintptr_t(ptr) << endl;
	cout << uintptr_t(ptr + 1) << endl;
	cout << uintptr_t(ptr + 2) << endl;*/

	return 0;
}

