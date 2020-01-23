// 11_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Base
{
protected:
    int m_i;

public:
    Base(int value)
        : m_i(value)
    {}

    void print()
    {
        cout << "I'm base " << endl;
    }

    friend std::ostream& operator << (std::ostream& out, const Base& base)
    {
        out << "This is base output" << endl;
        return out;
    }
};

class Derived : public Base
{
private:
    double m_d;

public:
    Derived(int value)
        : Base(value)
    {}

    void print()
    {
        Base::print();
        cout << "I'm derived " << endl;
    }

    friend std::ostream& operator << (std::ostream& out, const Derived& derived)
    {
        cout << static_cast<Base>(derived);
        out << "This is derived output" << endl;
        return out;
    }
};
int main()
{
    Base base(5);

    cout << base;

    Derived derived(7);
    cout << derived;
   /* base.print();

    Derived derived(7);
    derived.print();*/

    return 0;
}
