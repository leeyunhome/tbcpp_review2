// Chapter18.cpp : This file contains the 'main' function. Program execution begins and ends there.
// ���ڿ� �帧�� ���ۿ����� �ϴ� string stream

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

	//os.str(""); // �Ķ���Ͱ� ���� ���� �Է¹��� �ɷ� �� ���۸� ����������
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
