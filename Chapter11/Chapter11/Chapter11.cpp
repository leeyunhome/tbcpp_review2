// Chapter11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Student.h"
#include "Teacher.h"
using namespace std;

int main()
{
	Student byr("leeseonghee", 0);
	Student lhr("leehyerim", 1);
	Student cmj("leeminjung", 2);

	Teacher t1("joker");
	Teacher t2("batman");

	lhr.setName("leehyerim");
	t1.setName("joker");
	cout << lhr << endl;
	cout << t1 << endl;
	lhr.doNothing();
	t1.doNothing();
	t1.teach("sex");
	lhr.study();
	Person person;
	person.setName("Mr. Incredible"); 
	//cout << lhr.getName() << endl;

	return 0;
}
