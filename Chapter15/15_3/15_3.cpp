// 15_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <memory>
#include <utility>
#include <vector>
#include "AutoPtr.h"
#include "Resource.h"
//#include "Timer.h"
using namespace std;

void doSomething(std::unique_ptr<Resource> res)
{

}

auto doSomething()
{
	/*auto res1 = std::make_unique<Resource>(5);
	return res1;*/

	//return std::unique_ptr<Resource>(new Resource(5));

	 return std::make_unique<Resource>(5);
}

//auto doSomething2(std::unique_ptr<Resource> res)
void doSomething2(Resource * res)
{
	res->setAll(100);
	res->print();

	//return res;
}
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
	//15_6

	//doSomething(std::unique_ptr<Resource>(new Resource(10000000)));
	//doSomething(std::make_unique<Resource>(100000)); // make_unique사용하는 게 좋다.

	//Resource* res = new Resource(3);
	//res->setAll(1);

	{
		//std::shared_ptr<Resource> ptr1(res);

		auto ptr1 = std::make_shared<Resource>(3);
		ptr1->setAll(1);

		ptr1->print();

		{
			//std::shared_ptr<Resource> ptr2(ptr1);
			//std::shared_ptr<Resource> ptr2(res);
			auto ptr2 = ptr1;

			ptr2->setAll(3);
			ptr2->print();

			std::cout << "Going out of the block" << std::endl;
		}

		ptr1->print();

		std::cout << "Going out of the outer block" << std::endl;

	}

	//std::getchar();

	//15_5
	//{
	//	//Resource* res = new Resource(10000000);

	//	std::unique_ptr<Resource> res(new Resource());
	//	// early return or throw

	//	// delete res;
	//}


	//{
	//	std::unique_ptr<int> upi(new int);

	//	//auto* ptr = new Resource(5);
	//	//std::unique_ptr<Resource> res1(new Resource(5));
	//	auto res1 = std::make_unique<Resource>(5);
	//	//auto res1 = doSomething();

	//	res1->setAll(5);
	//	res1->print();

	//	std::unique_ptr<Resource> res2;

	//	std::cout << std::boolalpha;
	//	std::cout << static_cast<bool>(res1) << std::endl;
	//	std::cout << static_cast<bool>(res2) << std::endl;

	//	//res2 = res1;
	//	res2 = std::move(res1);

	//	std::cout << std::boolalpha;
	//	std::cout << static_cast<bool>(res1) << std::endl;
	//	std::cout << static_cast<bool>(res2) << std::endl;

	//	if (res1 != nullptr) res1->print();
	//	if (res2 != nullptr) res2->print();	// (*res2).print();
	//}

	//{
	//	auto res1 = std::make_unique<Resource>(6);
	//	res1->setAll(1);
	//	res1->print();

	//	std::cout << std::boolalpha;
	//	std::cout << static_cast<bool>(res1) << std::endl;

	//	//res1 = doSomething2(std::move(res1));
	//	doSomething2(res1.get());

	//	std::cout << std::boolalpha;
	//	std::cout << static_cast<bool>(res1) << std::endl;
	//	res1->print();
	//}


	// 하지 않으셔야 되는거
	//{
	//	Resource* res = new Resource;
	//	std::unique_ptr<Resource> res1(res);
	//	std::unique_ptr<Resource> res2(res);	// X

	//	delete res; // X 옛날 버릇이 남아서 딜리트를 추가로 하실 경우 지운걸 또지우는 불상사
	//}

	//

	/*{
		AutoPtr<Resource> res1(new Resource(10000000));

		cout << res1.m_ptr << endl;

		AutoPtr<Resource> res2 = std::move(res1);

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;
	}*/

	/*{
		AutoPtr<Resource> res1(new Resource(3));
		res1->setAll(3);

		AutoPtr<Resource> res2(new Resource(5));
		res2->setAll(5);

		res1->print();
		res2->print();

		MySwap(res1, res2);

		res1->print();
		res2->print();
	}*/

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

	/*{
		std::string x{ "abc" };
		std::string y{ "de" };

		std::cout << "x: " << x << std::endl;
		std::cout << "y: " << y << std::endl;

		MySwap(x, y);

		std::cout << "x: " << x << std::endl;
		std::cout << "y: " << y << std::endl;
	}*/

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
