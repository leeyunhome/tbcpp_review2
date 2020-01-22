// 9_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
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

    friend bool operator <(const Cents& c1, const Cents& c2)
    {
        return c1.m_cents < c2.m_cents;
    }

    friend std::ostream& operator << (std::ostream& out, const Cents& cents)
    {
        out << cents.m_cents;
        return out;
    }
};
int main()
{
    //vector<Cents> arr{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    vector<Cents> arr(20);

    for (unsigned i = 0; i < 20; ++i)
        arr[i].getCents() = i;
    std::random_shuffle(arr.begin(), arr.end());

    for (auto& e : arr)
        cout << e << " ";
    cout << endl;

    std::sort(begin(arr), end(arr));

    for (auto& e : arr)
        cout << e << " ";
    cout << endl;


    return 0;
}

