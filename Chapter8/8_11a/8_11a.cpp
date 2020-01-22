// 8_11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Something
{
public:
    class _init
    {
    public:
        _init()
        {
            s_value = 9876;
        }
    };

private:
    static int s_value;
    int m_value;

    static _init s_initializer;

public:
    Something()
        : m_value(123)
    {}

    static int getValue()
    {
        return s_value;
        //return m_value;
    }

    int temp()
    {
        return this->s_value;
    }
};

int Something::s_value = 1024;
Something::_init Something::s_initializer;

int main()
{
    cout << Something::getValue() << endl;

    Something s1, s2;
    cout << s1.getValue() << endl;
    //cout << s1.s_value() << endl;

    

    return 0;
}

