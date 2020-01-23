// MyString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cassert>

using namespace std;

class MyString
{
private:
public:
	char* m_data = nullptr;
	unsigned length;

public:
	MyString(const char* data_in = "")
		: length(std::strlen(data_in + 1))
	{
		assert(data_in);
		m_data = new char[length];
		for (unsigned i = 0; i < length; ++i)
		{
			m_data[i] = data_in[i];
		}

		m_data[length - 1] = '\0';
	}
	~MyString()
	{
		delete[] m_data;
	}
	
	char operator[](int i)
	{
		return m_data[i];
	}

	void print()
	{
		for (unsigned i = 0; i < length; ++i)
		{
			cout << m_data[i];
		}
		cout << endl;
	}


};
int main()
{
	MyString str1 = "hello World";

	cout << &str1 << endl;

	str1.print();

	{
		MyString str2 = str1;
		cout << &str2 << endl;
		str2.print();
	}

	str1.print();

	return 0;
}

