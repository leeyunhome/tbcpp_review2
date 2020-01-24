// 14_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// void last() throw(int) excpetion specifier
// void last() throw(...) exception specifier

void first();
void second();
void third();
void last();
int main()
{
	cout << "Start" << endl;

	try
	{
		first();
	}
	catch (int)
	{
		cerr << "main caught int exception" << endl;
	}
	catch (...) // catch-all handlers
	{
		cerr << "main caught ellipses exception" << endl;
	}

	cout << "End main" << endl; 
	return 0;
}
void first()
{
	cout << "first" << endl;

	try
	{
		second();
	}
	catch (double)
	{
		cerr << "first caught double exception" << endl;
	}

	cout << "End first " << endl;
}
void second()
{
	cout << "Second" << endl;

	try
	{
		third();
	}
	catch (double)
	{
		cerr << "Second caught double exception" << endl;
	}

	cout << "End second" << endl;
}
void third()
{
	cout << "Third" << endl;

	last();

	cout << "End third" << endl;

}
void last() throw(int)
{
	cout << "last " << endl;
	cout << "Throws exception" << endl;

	throw 'a';

	cout << "End last" << endl;
}