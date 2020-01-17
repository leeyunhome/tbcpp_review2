// 10_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Lecture.h"
int main()
{
    using namespace std;

    // Composition Relationship
    Lecture lec1("Intoroduction to Computer Programming");
    lec1.assignTeacher(Teacher("Prof. Hong"));
    lec1.registerStudent(Student("leehyerim", 0));
    lec1.registerStudent(Student("changhajin", 1));
    lec1.registerStudent(Student("chominji", 2));

    Lecture lec2("Computational Thinking");
    lec2.assignTeacher(Teacher("Prof. Good"));
    lec2.registerStudent(Student("leehyerim", 0));
    lec2.registerStudent(Student("kimminjung", 5));

    //Tod :imlement Aggregation Relationship

    // test
    {
        cout << lec1 << endl;
        cout << lec2 << endl;

        //// event
        //lec2.study();

        //cout << lec1 << endl;
        //cout << lec2 << endl;
    }
}

