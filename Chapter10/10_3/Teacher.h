#pragma once
#include <string>
#include <iostream>

class Teacher
{
private:
	std::string m_name;
	//TOD: more members like home address, salary, age, evaluation, etc.

public:
	Teacher(const std::string& name_in = "No Name")
		: m_name(name_in)
	{

	}
	// setName
	void setName(const std::string& name_in)
	{
		m_name = name_in;
	}

	std::string getName() const
	{
		return m_name;
	}
	void teach()
	{
		using namespace std;
		cout << "teach" << endl;
	}
	friend std::ostream& operator << (std::ostream& out, const Teacher& teacher)
	{
		out << "name: " << teacher.m_name;
		return out;
	}
};