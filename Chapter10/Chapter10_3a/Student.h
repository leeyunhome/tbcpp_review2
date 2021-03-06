#pragma once

#include <iostream>
#include <string>

class Student
{
private:
	std::string m_name;
	int m_intel;	// intelligence;

	//TOD : add more members like address, phone, favorate food, habits, ...

public:
	Student(const std::string& name_in = "No Name", const int& intel_in = 0)
		: m_name(name_in), m_intel(intel_in)
	{}

	void setIntel(const int& intel_in)
	{
		m_intel = intel_in;
	}

	int getIntel()
	{
		return m_intel;
	}

	void setName(const std::string& name_in)
	{
		m_name = name_in;
	}

	std::string getName()
	{
		return m_name;
	}

	friend std::ostream& operator << (std::ostream& out, const Student& student)
	{
		out << "name : " << student.m_name << ", " << "intel : " << student.m_intel;
		return out;
	}
};