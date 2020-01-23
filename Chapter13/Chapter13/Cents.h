#pragma once

#include <iostream>

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents)
		: m_cents(cents)
	{

	}

	bool operator > (const Cents& cents)
	{
		return m_cents > cents.m_cents;
	}
	friend std::ostream& operator << (std::ostream& out, const Cents& cents)
	{
		out << cents.m_cents << " cents ";
		return out;
	}
};