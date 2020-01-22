 // 8_9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Something
{
public:
    string m_value = "default";

    const string& getValue() const
    {
        cout << "const version" << endl;
        return m_value;
    }

    string& getValue()
    {
        cout << "non-const version" << endl;
        return m_value;
    }
    /*Something(const Something& st_in)
    {
        m_value = st_in.m_value;

        cout << "Copy constructor" << endl;
    }

    Something()
    {
        cout << "Constructor" << endl;
    }

    void setValue(int value)
    {
        m_value = value;
    }

    int getValue() const
    {
        return m_value;
    }*/

    
};

void print(const Something& st)
{
    cout << &st << endl;

    cout << st.m_value << endl;
}

int main()
{
    Something something;
    something.getValue() = 10;

    const Something something2;
    something2.getValue();// = 1004; xxxx
    /*cout << &something << endl;
    
    print(something);*/

    return 0;
}
