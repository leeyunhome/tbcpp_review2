#pragma once
#include "Teacher.h"
#include "Student.h"

class Lecture
{
private:
	std::string m_name;
	//std::string m_teacher;
	Teacher m_teacher;
	//std::string m_student;
	Student m_student[3];
	int index;

public:
	Lecture(const std::string& name_in = "No Name")
		: m_name(name_in), index(0)
	{}
	void assignTeacher(const Teacher& teacher)
	{
		/*m_teacher = teacher.getName();*/
		m_teacher = teacher;
	}
	void registerStudent(const Student& student)
	{
		//m_student = student.getName();
		m_student[index] = student;
		index++;
	}

	void study()
	{

	}
	friend std::ostream& operator << (std::ostream& out, const Lecture& lecture)
	{
		using namespace std;
		out << "Lecture name: " << lecture.m_name << endl;
		out << lecture.m_teacher << endl;
		
		for (int i = 0; i < lecture.index; ++i)
		{
			out << lecture.m_student[i] << endl;
		}
		

		return out;
	}
};