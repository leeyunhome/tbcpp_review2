// 8_3a.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Second
{
public:
    Second()
    {
        cout << "class Second constructor()" << endl;
    }
};

class First
{
    Second sec;
public:
    First()
    {
        cout << "class First constructor()" << endl;
    }
};
int main()
{
    First fir;
    return 0;
}

