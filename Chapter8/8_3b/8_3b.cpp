// 8_3b.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction(const int& numerator_in = 0, const int& denominator_in = 1)
        : numerator(numerator_in), denominator(denominator_in)
    {};
    void print()
    {
        cout << numerator << " / " << denominator << endl;
    }
};
int main()
{
    Fraction frac;

    frac.print();

    return 0;
}

