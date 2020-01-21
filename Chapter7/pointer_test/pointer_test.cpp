// pointer_test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int a = 1024;
	int* pa = &a;
	int** ppa = &pa;
	int*** pppa = &ppa;
	int**** ppppa = &pppa;

	cout << a << " " << &a << endl;
	cout << pa << " " << *pa << "\t" << &pa << endl;
	cout << ppa << " " << *ppa << "\t" << &ppa << endl;
	cout << pppa << " " << *pppa << "\t" << &pppa << endl;
	cout << ppppa << " " << *ppppa << endl;

	return 0;
}

