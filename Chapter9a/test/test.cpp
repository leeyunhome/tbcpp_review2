// test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class IntList
{
private:
	int* m_data;
	int length;

public:
	IntList(const int& length_in = 0)
		: length(length_in)
	{
		cout << "constructor" << endl;
		m_data = new int[length_in];
	}

	void setData(const int& value, const int& index)
	{
		m_data[index] = value;
	}

	int getData(const int& index)
	{
		return m_data[index];
	}

	~IntList()
	{
		cout << "destructor" << endl;
		delete[] m_data;
	}
	int& operator[](const int& index)
	{
		return m_data[index];
	}
};

int main()
{
	IntList myArr(5);

	for (int i = 0; i < 5; ++i)
	{
		myArr.setData(i * 2, i);
	}

	for (int i = 0; i < 5; ++i)
	{
		//cout << myArr.getData(i) << " ";
		cout << myArr[i] << " ";
	}
	cout << endl;

	
	return 0;
}
