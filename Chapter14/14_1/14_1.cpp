// 14_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	// try, catch, throw


	try
	{
		// something happedn
		throw std::string("My error message");

	}
	catch (int x)
	{
		cout << "Catch integer" << x << endl;
	}
	catch (double x)
	{
		cout << "Catch double" << x << endl;
	}
	catch (const char* error_message)
	{
		cout << "Char * " << error_message << endl;
	}
	catch (std::string error_message)
	{
		// do something to respond
		cout << error_message << endl;
	}

	return 0;
}

