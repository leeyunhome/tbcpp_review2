// Chapter10_3a.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include "Lecture.h"

int main()
{
	using namespace std;

	Student std1("leeseonghee", 0);
	Student std2("chominji", 1);
	Student std3("kimnayeon", 2);

	Teacher teacher1("Prof. Lee");
	Teacher teacher2("Prof. Good");

	// Composition Relationship
	Lecture lec1("Introduction to Computer Programming");
	lec1.assignTeacher(&teacher1);
	lec1.registerStudent(&std1);
	lec1.registerStudent(&std2);
	lec1.registerStudent(&std3);

	Lecture lec2("Computational Thinking");
	lec2.assignTeacher(&teacher2);
	lec2.registerStudent(&std1);

	// TOD : implement Aggregation Relationship

	// test
	{
		cout << lec1 << endl;
		cout << lec2 << endl;
		//event
		lec2.study();
		lec2.study();

		cout << lec1 << endl;
		cout << lec2 << endl;

		
	}

	//TOD : class HobbyClub

	//TOD : delete memory (if necessary)

	return 0;
}
