// 17_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str("aaaa");

	str.insert(2, string("bbb"));
	/*string str1("one");

	string str2("two");

	str1.append("three");
	str1.push_back('H');
	str1 += "three";

	str1 = str2 + "four";*/

	cout << str << endl;


	//cout << str1 << " " << str2 << endl;

	//std::swap(str1, str2);

	//cout << str1 << " " << str2 << endl;

	//str1.swap(str2);
	//cout << str1 << " " << str2 << endl;



	//str2 = str1;
	//str2 = "two";
	//str2.assign("two").append(" ").append("three").append(" ").append("Four");

	//cout << str2 << endl;

	return 0;
}

