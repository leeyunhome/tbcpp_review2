// strcmp_self.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

void Compare(int input);
int myStrcmp(const char arr[],const char arr2[]);
int myStrlen(const char arr[]);
void myStrcat();
int main()
{
	char name1[] = "ABCDEF";
	char name2[7] = "ABCDEF";
	char name3[50] = "AbCDEF";

	cout << strcat(name3, name1) << endl;

	cout << name1 << " == " << name2 << " ? " << endl;

	Compare(myStrcmp(name1, name2));
	
	

	cout << name1 << " == " << name3 << " ? " << endl;

	
	Compare(myStrcmp(name1, name3));

	
	

	//cout << "strcmp(name1, name2) : " << strcmp(name1, name2) << endl;



	return 0;
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
int myStrcmp(const char arr[], const char arr2[])
{
	int result = 0;
	if (myStrlen(arr) != myStrlen(arr2))
	{
		result = -1;
	}
	else
	{
		for (int i = 0; i < myStrlen(arr); ++i)
		{
			if (arr[i] != arr2[i])
				result = -1;
			else
				result += 0;
		}
	}
	return result;
}
void Compare(int input)
{
	if (input == 0)
	{
		cout << "Equal" << endl;
	}
	else
	{
		cout << "Not Equal" << endl;
	}
}

void myStrcat()
{

}
