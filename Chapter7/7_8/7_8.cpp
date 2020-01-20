// 7_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void print(int x = 7, int y = 8, int z = 10);
//void print(int x, int y, int z);

int main()
{
	print(20);
	//print();

	return 0;
}

//void print(int x = 7, int y = 8, int z = 10)
void print(int x, int y, int z)
{
	cout << x << " " << y << " " << z << endl;
}