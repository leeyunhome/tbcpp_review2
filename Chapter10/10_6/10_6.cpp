// 10_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <array>

using namespace std;

class IntArray
{
private:
	int m_length = 0;
	int* m_data = nullptr;

public:
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

	std::vector<int> int_vec;	//integer�� vector�� ����ִ� ����
								// �����Ҵ��̴ϱ� ��� ������� �� �� �� �� �ٲ� ��
								// �ֽ��ϴ�.
	std::array<int, 10> int_arr;


	return 0;
}

