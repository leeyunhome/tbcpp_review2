// 10_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Monster.h"
using namespace std;

int main()
{
	Monster mon1("Leehyerim", Position2D(0, 0));
	cout << mon1 << endl;
	//while (1) // game loop
	{
		// event
		mon1.moveTo(Position2D(1, 2));
		cout << mon1 << endl;
	}
	return 0;
}

