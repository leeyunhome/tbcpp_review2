// 17_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string my_str("I love leehyerim");

	my_str.reserve(1000);

	if (my_str.empty())
	{
		cerr << "Cannot procceed" << endl;
		return - 1;
	}

	cout << my_str.length() << endl;
	cout << my_str.size() << endl;
	cout << my_str.capacity() << endl;
	cout << my_str.max_size() << endl;

	return 0;
}

