// 9_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


class Cents
{
private:
    int m_cents;

public:
    Cents(int cents = 0)
    {
        m_cents = cents;
    }

    int getCents()
    {
        return m_cents;
    }

    void setCents(int cents)
    {
        m_cents = cents;
    }

    operator int()
    {
        cout << "cast here" << endl;
        return m_cents;
    }
};

class Dollar
{
private:
    int m_dollar;

public:
    Dollar(const int& dollar_in)
        : m_dollar(dollar_in)
    {}
    operator Cents()
    {
        return Cents(m_dollar * 100);
    }
};

void printInt(const int& value)
{
    cout << value << endl;
}
int main()
{
    Dollar dollar1(5);
    Cents cents = dollar1;

    printInt(cents);

    return 0;
}

