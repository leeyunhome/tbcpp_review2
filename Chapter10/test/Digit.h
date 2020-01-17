#pragma once

class Digit
{
private:
	int m_digit;

public:
	Digit(const int& digit_in)
		: m_digit(digit_in)
	{
		
	}

	int getDigit()
	{
		return m_digit;
	}

	void setDigit(const int& digit_in)
	{
		m_digit = digit_in;
	}

	friend std::ostream& operator << (std::ostream& out, const Digit& digit)
	{
		using namespace std;

		out << digit.m_digit;
		return out;
	}
};