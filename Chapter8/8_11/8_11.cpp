// 8_11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Something
{
private:
    static int s_value;
    int m_value;

public:
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

int main()
{
    cout << Something::getValue() << endl;

    Something s1, s2;
    cout << s1.getValue() << endl;
    //cout << s1.s_value() << endl;

    //int (*fctptr)() = s1.temp;
    int (Something:: * fctptr)() = &Something::temp;

    cout << (s2.*fctptr)() << endl;

    int (* fctptr2)() = &Something::getValue;

    cout << fctptr2() << endl;


    return 0;
}

