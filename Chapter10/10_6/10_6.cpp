// 10_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cassert>
#include <initializer_list>
#include <vector>
#include <array>

using namespace std;

class IntArray
{
private:
	int m_length = 0;
	//int* m_data = nullptr;
	int* m_data = new int[3] {1, 2, 3};

public:
	IntArray(int length_in = 0)
	{
		initialize(length_in);
	}
	void initialize(int length_in)
	{
		m_length = length_in;
		m_data = new int[m_length];
	}
	void reset()
	{
		delete[] m_data;
	}
	void resize(int size_in)
	{
		m_length = size_in;
	}
	void insertBefore(const int& value, const int& ix)
	{
		m_data[ix] = value;
		m_data = new int[m_length + 1];

	}
	void remove(const int& ix)
	{
		m_data[ix] = 0;

	}
	void push_back(const int& value)
	{
		m_data = new int[m_length + 1];
		m_data[m_length] = value;
	}

	int& operator[](int i)
	{
		return m_data[i];
	}
	// Constructors
	// Desturctors
	// initialize() �����ڿ��� �̴ϼȶ����� �Լ��� ������ ���� ����ϰ� ����
	// reset();	�޸𸮸� �� ����� �ʱ���·� ���ư��� �����Լ�
	// resize();
	// insertBefore(const int & value, const int& ix);
	// remove(const int& ix);
	// push_back(const int& value);

};

int main()
{
	//IntArray my_arr{1, 3, 5, 7, 9};
	//my_arr.insertBefore(10, 1);	// 1, 10, 3, 5, 7, 9
	//my_arr.remove(3)				// 1, 10, 3, 7, 9
	//my_arr.push_back(13);		// 1, 10, 3, 7, 9, 13

	//std::vector<int> int_vec;	//integer�� vector�� ����ִ� ����
								// �����Ҵ��̴ϱ� ��� ������� �� �� �� �� �ٲ� ��
								// �ֽ��ϴ�.
	//std::array<int, 10> int_arr;

	/*IntArray myArr{ 1, 3, 5, 7, 9 };

	cout << myArr << endl;*/

	IntArray myArr;

	cout << myArr[1] << endl;

	return 0;
}

