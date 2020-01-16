// 9_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cassert>

using namespace std;

class IntList
{
private:
	int m_list[10] = { 1,2, 3, 4, 5, 6, 7, 8, 9, 19 };

public:
	/*void setItem(int index, int value)
	{
		m_list[index] = value;
	}

	int getItem(int index)
	{
		return m_list[index];
	}*/

	//int* getList()
	//{
	//	return m_list;
	//}
	int& operator[](const int index)
	{
		assert(index >= 0);
		assert(index < 10);
		return m_list[index];
	}

	const int& operator[](const int index) const
	{
		assert(index >= 0);
		assert(index < 10);
		return m_list[index];
	}
};
int main()
{
	IntList* list = new IntList;

	cout << (int)list << endl;
	cout << (int)&(*list)[0] << endl;
	(*list)[3] = 10;

	//cout << list[3] << endl;
	cout << (*list)[3] << endl;
	//const IntList my_list;
	////my_list[3] = 10;
	////my_list.setItem(3, 1);
	////cout << my_list.getItem(3) << endl;
	//cout << my_list[3] << endl;

	////my_list.getList()[3] = 7;
	////cout << my_list.getList()[3] << endl;

	return 0;
}

