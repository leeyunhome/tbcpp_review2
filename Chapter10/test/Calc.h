#pragma once
#include <iostream>
#include "Digit.h"

class Calc
{
private:
	Digit *m_digit[3];
	int index;

public:
	Calc()
		: index(0)
	{}
	void registDigit(Digit* const digit)
	{
		m_digit[index] = digit;
		index++;
	}

	void bloom()
	{
		std::cout << "bloom" << std::endl;

		/*for (auto& elem : m_digit)
			(*elem).setDigit((*elem).getDigit() + 1);*/
		for (int i = 0; i < index; ++i)
			m_digit[i]->setDigit(m_digit[i]->getDigit() + 1);
	}
	friend std::ostream& operator << (std::ostream& out, const Calc& calc)
	{
		using namespace std;
		/*for (int i = 0; i < 3; ++i)
		{
			out << *(calc.m_digit[i]) << endl;
		}*/

		for (auto& elem : calc.m_digit)
			out << *elem << endl;

		return out;
	}
};