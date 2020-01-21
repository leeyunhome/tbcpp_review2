// 6_10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const char* getName()
{
	return "Leesonghee";
}
int main()
{
	char c = 'Q';
	cout << *&c << endl;
	/*int int_arr[5] = { 1, 2,3 ,4, 5 };
	char char_arr[] = "Hello, World!";
	const char* name = "leehyerim";

	cout << int_arr << endl;
	cout << char_arr << endl;
	cout << name << endl;*/

	/*char name[] = "Leehyerim";

	const char* name1 = getName();
	const char* name2 = getName();

	cout << (uintptr_t)name1 << endl;
	cout << (uintptr_t)name2 << endl;*/

	return 0;
}

