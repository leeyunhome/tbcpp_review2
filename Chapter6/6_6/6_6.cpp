// 6_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char source[] = "leehyerim";
	char source2[] = "leehyerim";

	char kiss[6] = "kiss";

	cout << strcmp(source, source2) << endl;

	//if (!strcmp(source, source2))
	if (strcmp(source, source2) == 0)
	{
		cout << "same" << endl;
	}
	else
	{
		cout << "different" << endl;
	}
	

	//strcat_s(source, 14, kiss);
	//cout << source << endl;

	//char source[21] = "Copy leehyerim lips";
	//char source2[] = "Copy leehyerim lips";
	////char kiss[5] = "kiss";
	//char dest[50];

	////strcpy(dest, source);
	//strcpy_s(dest, 50, source);

	//strcat(dest, source);
	////strcat_s(source,26, kiss);

	//cout << source << endl;
	//cout << dest << endl;
	////char myString[255];

	////cin >> myString;
	//cin.getline(myString, 255);

	////myString[5] = '\0';

	//int ix = 0;
	//while (true)
	//{
	//	if (myString[ix] == '\0')
	//		break;

	//	cout << myString[ix] << " " << (int)myString[ix] << endl;

	//	++ix;
	//}
	
	/*cin >> myString;
	cout << myString << endl;*/


	//cout << sizeof(myString) / sizeof(myString[0]) << endl;
	/*int myArr[] = { 1, 2, 3, 4, 5, 6, 7 };

	int* myArr2 = new int[]{ 1, 2, 3, 4, 5, 6, 7 };

	for (auto& elem : myString)
		cout << (int)elem << endl;*/

	/*for (auto& elem : myArr2)
		cout << elem << endl;*/

	return 0;
}

