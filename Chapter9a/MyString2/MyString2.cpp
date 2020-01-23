// MyString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cassert>

using namespace std;

class MyString
{
//private:
public:
	char* m_data = nullptr;
	unsigned length = 0;

public:
	MyString(const MyString& mystring)
	{
		cout << "Copy constructor" << endl;
		length = mystring.length;
		if (mystring.m_data != nullptr)
		{
			m_data = new char[length];
			for (unsigned i = 0; i < length; ++i)
			{
				m_data[i] = mystring.m_data[i];
			}
		}
		else
		{
			m_data = nullptr;
		}
	}

	MyString& operator=(const MyString& mystring)
	{
		cout << "Assignment operator " << endl;

		if (this == &mystring)	// prevent self-assignment
			return *this;

		delete[] m_data;

		length = mystring.length;

		if (mystring.m_data != nullptr)
		{
			m_data = new char[length];
			for (unsigned i = 0; i < length; ++i)
			{
				m_data[i] = mystring.m_data[i];
			}
		}
		else
		{
			m_data = nullptr;
		}
		
		return *this;
	}
	MyString(const char* data_in = "")
		: length(std::strlen(data_in) + 1)
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
	
	char* getString()
	{
		return m_data;
	}
	int getLength()
	{
		return length;
	}

};
int main()
{
	MyString hello("Hello");

	MyString str1(hello); //MyString str1 = hello;

	MyString str2;
	str2 = hello;
	/*cout << (int*)hello.m_data << endl;

	cout << hello.getString() << endl;

	{
		MyString copy = hello;
		cout << (int*)copy.m_data << endl;
		cout << copy.getString() << endl;
	}

	cout << hello.getString() << endl;*/

	return 0;
}

