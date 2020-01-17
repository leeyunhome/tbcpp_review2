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
	// initialize() 생성자에서 이니셜라이즈 함수를 가져다 쓰면 깔끔하게 구현
	// reset();	메모리를 싹 지우고 초기상태로 돌아가는 리셋함수
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

	std::vector<int> int_vec;	//integer가 vector에 담겨있는 거죠
								// 동적할당이니까 몇개가 담길지는 그 때 그 때 바꿀 수
								// 있습니다.
	std::array<int, 10> int_arr;


	return 0;
}

