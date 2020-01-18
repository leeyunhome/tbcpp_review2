// strcmp_self.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void printArray(char arr[], char arr2[]);
void myStrcmp(const char x[],const char y[]);
int main()
{
	char name1[] = "ABCDE";
	char name2[] = "ABCDEfg";
	
	printArray(name1, name2);

	//myStrcmp(name1, name2);


	return 0;
}
void myStrcmp(const char x[], const char y[])
{
	cout << sizeof(x) / sizeof(x[0]) << endl;
	for (int i = 0; i < sizeof(x) / sizeof(x[0]); ++i)
	{
		if (x[i] == y[i])
		{
			cout << "same" << endl;
		}
	}
}
void printArray(char arr[], char arr2[])
{
	int count = 0;

	int result = 0;
	while (arr[count] != '\0' && arr[count] != '\0')
	{
		cout << arr[count] << endl;
		count++;
		
	}
	cout << count << endl;
	//cout << result << endl;

}
