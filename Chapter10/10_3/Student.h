#pragma once
#include <string>
#include <iostream>

class Student
{
private:
	std::string m_name;
	int m_intel;	// intelligence;

	// TOD : add more members like address, phone, favorate food, habits, ...

public:
	Student(const std::string& name_in = "No Name", const int& intel_in = 0)
		: m_name(name_in), m_intel(intel_in)
	{}

	Student(const Student& student)
	{
		m_name = student.m_name;
		m_intel = student.m_intel;
	}

	// setName
	void setName(const std::string& name_in)
	{
		m_name = name_in;
	}

	// setIntel
	void setIntel(const int& intel_in)
	{
		m_intel = intel_in;
	}

	std::string getName() const
	{
		return m_name;
	}

	int getIntel()
	{
		return m_intel;
	}

	/*void study()
	{
		using namespace std;
		cout << "study" << endl;
		m_intel += 1;
	}*/

	friend std::ostream& operator << (std::ostream& out, const Student& student)
	{
		out << "name: " << student.m_name << ", intel: " << student.m_intel;
		return out;
	}
};