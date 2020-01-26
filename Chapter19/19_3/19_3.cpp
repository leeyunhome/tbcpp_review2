// 19_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <vector>
#include <mutex>

using namespace std;

mutex mtx;	// mutual exclusion

int main()
{
	auto work_func = [](const string& name)
	{
		for (int i = 0; i < 5; ++i)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(100));
			
			mtx.lock();
			cout << name << " " << std::this_thread::get_id() << " is working " << i << endl;
			mtx.unlock();
		}
	};

	std::thread t1 = std::thread(work_func, "JackJack");
	std::thread t2 = std::thread(work_func, "Dash");

	t1.join();
	t2.join();

	/*const int num_pro = std::thread::hardware_concurrency();

	cout << std::this_thread::get_id() << endl;
	
	vector<std::thread> my_threads;
	my_threads.resize(num_pro);

	for (auto& e : my_threads)
		e = std::thread([]() {
			cout << std::this_thread::get_id() << endl;
			while (true) {}});

	for (auto& e : my_threads)
		e.join();*/

	return 0;
}

