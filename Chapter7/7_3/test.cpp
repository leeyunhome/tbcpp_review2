#include <iostream>
#include "MyConstants.h"

void doSomething()
{
	using namespace std;

	cout << "In test.cpp " << Constants::pi << " " << &Constants::pi << endl;
}