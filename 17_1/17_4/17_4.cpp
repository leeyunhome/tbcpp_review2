// 17_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string my_str("abcdefg");

	char buf[20];	//�����͸� ���� char ��̸� ������.

	my_str.copy(buf, 5, 0);

	buf[5] = '\0';
	cout << buf << endl;

	//cout << my_str.c_str() << endl;

	//const char* arr = my_str.data();

	//cout << (int)arr[6] << endl;
	//cout << (int)arr[7] << endl;


	//try
	//{
	//	//my_str[100] = 'X'; //string ���� ���ȣ ���۷����� �����ε��� �Ǿ��ִ� ��쿡�� ����ó���� �����ش�.
	//	my_str.at(100) = 'X';
	//}
	//catch (std::exception & e)
	//{
	//	cout << e.what() << endl;
	//}

	//cout << my_str[0] << endl;
	//cout << my_str[3] << endl;

	//my_str[3] = 'Z';

	//cout << my_str << endl;


	return 0;
}

