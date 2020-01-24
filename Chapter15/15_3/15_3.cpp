// 15_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <utility>
#include <vector>
#include "AutoPtr.h"
#include "Resource.h"
//#include "Timer.h"
using namespace std;

AutoPtr<Resource> generateResource()
{
	AutoPtr<Resource> res(new Resource(10'000'000));

	return res;
}

template<class T>
void MySwap(T& a, T& b)
{
	//T tmp = a;
	//a = b;
	//b = tmp;

	T tmp{std::move(a)};
	a = std::move(b);
	b = std::move(tmp);
}

int main()
{
	/*{
		AutoPtr<Resource> res1(new Resource(10000000));

		cout << res1.m_ptr << endl;

		AutoPtr<Resource> res2 = std::move(res1);

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;
	}*/

	{
		AutoPtr<Resource> res1(new Resource(3));
		res1->setAll(3);

		AutoPtr<Resource> res2(new Resource(5));
		res2->setAll(5);

		res1->print();
		res2->print();

		MySwap(res1, res2);

		res1->print();
		res2->print();
	}

	/*{
		vector<string> v;
		string str = "Hello";

		v.push_back(str);

		cout << str << endl;
		cout << v[0] << endl;

		v.push_back(std::move(str));

		cout << str << endl;
		cout << v[0] << " " << v[1] << endl;
	}*/

	{
		std::string x{ "abc" };
		std::string y{ "de" };

		std::cout << "x: " << x << std::endl;
		std::cout << "y: " << y << std::endl;

		MySwap(x, y);

		std::cout << "x: " << x << std::endl;
		std::cout << "y: " << y << std::endl;
	}

	//
	//15_3
	//using namespace std;
	//streambuf* orig_buf = cout.rdbuf();
	////cout.rdbuf(NULL);	// disconnect cout from buffer

	//Timer timer;

	//{
	//	AutoPtr<Resource> main_res;
	//	main_res = generateResource();
	//}

	//cout.rdbuf(orig_buf);
	//timer.elapsed();

	return 0;
}
