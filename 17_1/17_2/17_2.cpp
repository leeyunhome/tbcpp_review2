// 17_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <typeinfo>

template <typename T>
std::string ToString(T x)
{
	std::ostringstream osstream;

	osstream << x;

	return osstream.str();
}

template <typename T>
bool FromString(const std::string& str, T& x)
{
	std::istringstream isstream(str);
	return (isstream >> x) ? true : false;
}
int main()
{
	std::string my_str("123.45");

	double d;
	if (FromString(my_str, d))
		std::cout << d << std::endl;
	else
		std::cout << "Cannot convert string to double" << std::endl;
	//my_str += std::to_string(69);

	std::cout << my_str << std::endl;
	std::cout << typeid(my_str).name() << std::endl;

	//std::vector<char> vec;

	//for (auto e : "I love leehyerim")
	//	vec.push_back(e);
	////std::string my_string("leehyerim");
	////const char* my_string = "leehyerim";

	//std::string second_string(vec.begin(), std::find(vec.begin(), vec.end(), 'r'));

	//std::cout << second_string << std::endl;



	return 0;
}
