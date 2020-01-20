// 7_11a.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

void printStack(std::vector<int>& stack);
int main()
{
	std::vector<int> stack;

	stack.push_back(3);
	printStack(stack);
	stack.push_back(5);
	printStack(stack);

	stack.push_back(7);
	printStack(stack);

	stack.pop_back();
	printStack(stack);

	stack.pop_back();
	printStack(stack);

	stack.pop_back();
	printStack(stack);

	return 0;
}
void printStack(std::vector<int>& stack)
{
	for (auto& e : stack)
		cout << e << " ";
	cout << endl;
}
