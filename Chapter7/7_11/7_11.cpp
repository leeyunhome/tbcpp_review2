// 7_11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// int *v_ptr = new int[3]{1,2,3};
	std::vector<int> v{ 1,2,3 };

	v.reserve(1024);

	//for (auto& e : v)
	for (unsigned i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;

	cout << v.size() << " " << v.capacity() << endl;

	int* ptr = v.data();

	cout << ptr[2] << endl;


	return 0;
}
