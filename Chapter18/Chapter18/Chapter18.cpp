// Chapter18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	/*int i;
	float f;
	cin >> i >> f;

	cout << i << " " << f << endl;*/

	char buf[1024];

	//cout << (char)cin.peek() << endl;
	//cin.ignore(2);

	cin >> buf;
	cout << buf << endl;

	cin.putback('H');

	cin >> buf;
	cout << buf << endl;

	/*string buf;

	getline(cin, buf);
	cout << cin.gcount() << " " << buf << endl;*/

	/*char buf[100];
	cin.getline(buf, 100);
	cout << cin.gcount() << " " << buf << endl;

	cin.getline(buf, 100);
	cout << cin.gcount() << " " << buf << endl;*/

	//char buf[5];


	//cin >> setw(5) >> buf;

	//cout << buf << std::endl;

	//cin >> setw(5) >> buf;

	//cout << buf << endl;

	//cin >> setw(5) >> buf;

	//cout << buf << endl;
	//cout << "Enter a number" << endl;

	//int i;
	//cin >> i;

	//cout << i << endl;

	return 0;
}
