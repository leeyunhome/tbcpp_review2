#pragma once
#include "Teacher.h"
#include "Student.h"
#include <vector>

class Lecture
{
private:
	std::string m_name;
	//std::string m_teacher;
	Teacher *m_teacher;


	//std::string m_student;
	Student *m_student[3];
	int index;

	//Teacher teacher;
	//std::vector<Student> students;

	//Teacher *teacher;
	//std::vector<Student*> students;

public:

	//Lecture(const std::string& name_in)
	//	: m_name(name_in)
	//{}

	//~Lecture()
	//{
	//	// do NOT delete teacher
	//	// do NOt delete students
	//}

	Lecture(const std::string& name_in = "No Name")
		: m_name(name_in), index(0)
	{}

	//void assignTeacher(const Teacher& const teacher_input)
	//{
	//	teacher = teacher_input;
	//}

	/*void assignTeacher(Teacher* const teacher_input)
	{
		teacher = teacher_input;
	}*/

	//void registerStudent(const Student& const student_input)
	//{
	//	students.push_back(student_input);
	//}

	/*void registerStudnet(Student* const student_input)
	{
		students.push_back(student_input);
	}*/

	void assignTeacher(Teacher* const teacher)
	{
		/*m_teacher = teacher.getName();*/
		m_teacher = teacher;
	}
	void registerStudent(Student* student)
	{
		//m_student = student.getName();
		m_student[index] = student;
		index++;

		// &student_input != &students[0]
		std::cout << &student << ", " << &m_student[0] << std::endl;
		
	}

	void study()
	{
		std::cout << m_name << " Study " << std::endl << std::endl;

		for (int i = 0; i < index; ++i)
		{
			m_student[i]->setIntel(m_student[i]->getIntel() + 1);
		} //leeyunho


		/*for (auto& element : m_student)
			(*element).setIntel((*element).getIntel() + 1);*/

		//for (auto& element : students)	// Note: 'auto element' doesn't work
		//	element.setIntel(element.getIntel() + 1);

		/*for (auto element : students)
			(*element).setIntel((*element).getIntel() + 1);*/
	}
	friend std::ostream& operator << (std::ostream& out, const Lecture& lecture)
	{
		using namespace std;
		out << "Lecture name: " << lecture.m_name << endl;

		out << *lecture.m_teacher << endl;

		/*for (auto element : lecture.students)
			out << element << std::endl;*/

		/*out << *lecture.m_teacher << std::endl;
		for (auto element : lecture.students)
			out << *element << std::endl;*/
		
		for (int i = 0; i < lecture.index; ++i)
		{
			out << *(lecture.m_student[i]) << endl;
		} // leeyunho


		
		

		return out;
	}
};