// concatenate_test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int myStrlen(const char arr[]);
char* myStrcat(const char* x, const char* y);
int main()
{
	char str1[] = "Jack";
	char str2[] = " Jack";

	//strcat(str1, str2);

	cout << myStrcat(str1, str2) << endl;


	//cout << str1 << endl;

	return 0;
}
char* myStrcat(const char* x, const char* y)
{
	//cout << myStrlen(x) + myStrlen(y) + 1 << endl;
	int length = myStrlen(x) + myStrlen(y) + 1;

	//char concatenatedString[20]{ '\0',};

	char* concatenatedString = new char[length] {'\0',};


	//concatenatedString[0] = 'H';
	//concatenatedString[1] = 'I';

	for (int i = 0; i < myStrlen(x); ++i)
	{
		concatenatedString[i] = x[i];
	}

	for (int j = 0; j < length; ++j)
	{
		concatenatedString[myStrlen(x) + j] = y[j];
	}

	//delete[] concatenatedString;

	/*concatenatedString[5] = y[1];
	concatenatedString[6] = y[2];*/

	
	return concatenatedString;
}

int myStrlen(const char arr[])
{
	int count = 0;
	while (1)
	{
		if (arr[count] == '\0')
			break;
		count++;
	}
	return count;
}
