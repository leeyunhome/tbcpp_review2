#pragma once
#include <iostream>
#include <string>

class Teacher
{
private:
	std::string m_name;
	//TOD : more members like home address, salary, age, evaluation, etc.

public:
	Teacher(const std::string& name_in = "No Name")
		: m_name(name_in)
	{}

	void setName(const std::string& name_in)
	{
		m_name = name_in;
	}

	std::string getName()
	{
		return m_name;
	}

	friend std::ostream& operator << (std::ostream& out, const Teacher& teacher)
	{
		out << "name : " << teacher.m_name;
		return out;
	}
};