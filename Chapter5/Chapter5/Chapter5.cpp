// Chapter5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
class Operator
{
private:
	char op[5];

public:
	Operator()
		: op{ '+', '-', '*', '/' , '%'}
	{}

	friend std::ostream& operator << (std::ostream& out, const Operator& oper)
	{
		for (auto& elem: oper.op)
			out << elem << " ";

		return out;
	}

	char& operator[](int index)
	{
		return op[index];
	}
	
	/*Operator& operator+(const Operator& oper)
	{
		return op + oper.op[1];
	}*/
};

int getInt();
char getOperator(Operator& oper);
void printResult(int x, char op, int y, Operator& oper);


int main()
{
	Operator oper;

	//cout << op << endl;

	int x = getInt();
	char op = getOperator(oper);
	int y = getInt();

	printResult(x, op, y, oper);


	return 0;
}

int getInt()
{
	int x;
	cout << "input an integer : " << endl;
	cin >> x;
	std::cin.ignore(32767, '\n');

	return x;
}

char getOperator(Operator& oper)
{
	//cout << oper[1] << endl;

	//for (unsigned i = 0; i < 5; ++i)
	for(;;)
	{
		char op;
		cout << "Enter an operator(+, -, *, /, %) : " << endl;
		cin >> op;
		std::cin.ignore(32767, '\n');

		//if (op == oper[i])
		if (op == oper[0] || op == oper[1] || op == oper[2] || op == oper[3] || op == oper[4])
		{
			return op;
		}
		else
		{
			cout << "invalid operator try again" << endl;
		}
	}
}

void printResult(int x, char op, int y, Operator& oper)
{
	cout << "result : " << endl;

	/*for (int i = 0; i < 5; ++i)
	{
		if (op == oper[i])
			cout << x << " " << op << " " << y << " = " << x oper[i] y << endl;

	}*/

	if (op == oper[0])
	{
		cout << x << " " << op << " " << y << " = " << x+y << endl;

	}
	else if (op == oper[1])
	{
		cout << x << " " << op << " " << y << " = " << x - y << endl;
	}
	else if (op == oper[2])
	{
		cout << x << " " << op << " " << y << " = " << x * y << endl;
	}
	else if (op == oper[3])
	{
		cout << x << " " << op << " " << y << " = " << x / y << endl;
	}
	else if (op == oper[4])
	{
		cout << x << " " << op << " " << y << " = " << x % y << endl;
	}
	else
	{
		cout << "Invalid operator" << endl;
	}
}
