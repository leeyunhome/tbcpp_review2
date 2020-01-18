// 5_10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int getInt()
{
    while (true)
    {
        cout << "Enter an integer: " << endl;
        int x;
        cin >> x;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            cout << "invalid number, please try agian" << endl;
        }
        else
        {
            std::cin.ignore(32767, '\n');
            return x;
        }
    }
}

char getOperator()
{
    while (1)
    {
        cout << "Enter an operator (+, -) : ";
        char op;
        cin >> op;
        cin.ignore(32767, '\n');

        if (op == '+' || op == '-')
        {
            return op;
        }
        else
        {
            cout << "invalid operator, try again" << endl;
        }
    }
}

void printResult(int x, char op, int y)
{
    if (op == '+')
    {
        cout << x + y << endl;
    }
    else if (op == '-')
    {
        cout << x - y << endl;
    }
}

int main()
{
    int x = getInt();
    char op = getOperator();
    int y = getInt();

    printResult(x, op, y);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
