// 9_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

class Cents
{
private:
    int m_cents;

public:
    Cents(int cents = 0) { m_cents = cents; }
    int getCents() const { return m_cents; }
    int& getCetns() { return m_cents; }

    friend std::ostream& operator<<(std::ostream& out, const Cents& cents)
    {
        out << cents.m_cents;
        return out;
    }

    friend bool operator==(const Cents& c1, const Cents& c2)
    {
        return c1.m_cents == c2.m_cents;
    }

    bool operator<(const Cents& cents)
    {
        return m_cents < cents.m_cents;
    }

    //bool operator==(const Cents& cents)
    //{
    //    return (this->m_cents == cents.m_cents) ? true : false;
    //}
};

int main()
{
    using namespace std;

    //std::array<Cents, 5> my_arr;

    std::vector<Cents> myVec(20);

 /*   myVec.push_back(Cents(2));
    myVec.push_back(Cents(5));
    myVec.push_back(Cents(7));
    myVec.push_back(Cents(3));
    myVec.push_back(Cents(1));
    myVec.push_back(Cents(12));*/

    for (unsigned i = 0; i < 20; ++i)
        myVec[i].getCetns() = i;

    std::random_shuffle(begin(myVec), end(myVec));
    for (auto& e : myVec)
        cout << e << " ";
    cout << endl;

    //std::sort(myVec.begin(), myVec.end());
    std::sort(begin(myVec), end(myVec));
    for (auto& e : myVec)
        cout << e << " ";
    cout << endl;
    
    /*Cents cents1(7);
    Cents cents2(7);*/

    //if (cents1 == cents2)
    //{
    //    cout << "same" << endl;
    //}
    //else
    //{
    //    cout << "different" << endl;
    //}

    return 0;
}

