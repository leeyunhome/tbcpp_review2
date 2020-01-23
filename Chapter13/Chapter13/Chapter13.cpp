// Chapter13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Cents.h"


using namespace std;

template<typename T>
T add(T a, T b)
{
	return a + b;
}

template<typename T>
T getMax(T x, T y)
{
	return (x > y) ? x : y;
}

int main()
{
	auto a = add(1, 2);
	auto b = add(1.1, 2.2);
	auto c = add(1.1f, 2.3f);

	std::cout << getMax(1, 2) << std::endl;
	std::cout << getMax(3.14, 1.592) << std::endl;
	std::cout << getMax(1.0f, 3.4f) << std::endl;
	std::cout << getMax('a', 'c') << std::endl;

	std::cout << getMax(Cents(5), Cents(9)) << std::endl;

	return 0;
}

