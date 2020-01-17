// Chapter10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Monster.h"

int main()
{
	Monster mon1("Leehyerim", Position2D(0, 0));
	cout << mon1 << endl;

	{
		mon1.moveTo(Position2D(1, 1));
		cout << mon1 << endl;
	}


	return 0;
}

