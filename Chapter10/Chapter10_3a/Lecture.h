#pragma once

#include <vector>
#include "Student.h"
#include "Teacher.h"

class Lecture
{
private:
	std::string m_name;
	Teacher *teacher;
	std::vector<Student*> students;

public:
	Lecture(const std::string& name_in = "No Name")
		: m_name(name_in)
	{}

	~Lecture()
	{
		// do Not delete teacher
		// do Not delete students
	}
	void assignTeacher(Teacher* const teacher_in)
	{
		teacher = teacher_in;
	}

	void registerStudent(Student* const student_input)
	{
		students.push_back(student_input);

		std::cout << &student_input << " " << &students[0] << std::endl;


	}

	void study()
	{
		std::cout << m_name << "study" << std::endl;

		for (auto& elem : students)	// NOte: 'auto element' works
			elem->setIntel(elem->getIntel() + 1);
	}
	friend std::ostream& operator << (std::ostream& out, const Lecture& lecture)
	{
		using namespace std;
		out << "Lecture : " << lecture.m_name << endl;

		out << *lecture.teacher << endl;

		for (auto elem : lecture.students)
			out << *elem << endl;

		return out;
	}



};