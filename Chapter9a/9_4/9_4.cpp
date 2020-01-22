// 9_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

    int getCents() const
    {
        return m_cents;
    }

    int& getCents()
    {
        return m_cents;
    }

    bool operator==(const Cents& cents)
    {
        return (m_cents == cents.m_cents) ? true : false;
    }

    friend std::ostream& operator << (std::ostream& out, const Cents& cents)
    {
        out << cents.m_cents;
        return out;
    }
};
int main()
{
    Cents cents1(6);
    Cents cents2(6);

    if (cents1 == cents2)
        cout << "Equal" << endl;
    else
        cout << "Not Equal" << endl;

    return 0;
}

