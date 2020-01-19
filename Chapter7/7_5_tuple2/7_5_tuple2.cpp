// 7_5_tuple2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <tuple>

std::tuple<int, double> returnTuple()
{
	int a = 10;
	double b = 7.8;
	return std::make_tuple(a, b);
}

int main()
{
	using namespace std;
	auto [a, b] = returnTuple();
	cout << a << endl;
	cout << b << endl;

	//std::tuple<int, double> result = returnTuple();

	//std::cout << std::get<0>(result) <<std::endl; // a
	//std::cout << std::get<1>(result) <<std::endl; // b


	return 0;
}

