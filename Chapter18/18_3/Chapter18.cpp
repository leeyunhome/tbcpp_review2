// Chapter18.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 문자열 흐름의 버퍼역할을 하는 string stream

#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	stringstream os;

	//int i = 12345;
	//double d = 67.89;

	//os << i << " " << d;
	os << "12345 67.89";

	//os.str(""); // 파라미터가 있을 때는 입력받은 걸로 싹 버퍼를 덮어써버리고
	os.str(string());
	os.clear();

	os << "Leehyerim";

	cout << os.str() << endl;



	/*int i2;
	double d2;

	os >> i2 >> d2;

	cout << i2 << "|" << d2 << endl;*/

	//os << "12345 67.89";

	/*string str1;
	string str2;

	os >> str1 >> str2;

	cout << str1 << "|" << str2 << endl;*/

	//os << "Hello, World!";	// << : insertion operator, >> : extracton operator
	//os << "Hello, World!2" << endl;
	////os.str("Hello, World!\n");	// neline can contained in string;

	//string str;

	////str = os.str();

	//cout << os.str() << endl;

	return 0;
}
