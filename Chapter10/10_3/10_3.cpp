// 10_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Lecture.h"
int main()
{
    using namespace std;

    Student std1("Leehyerim", 0);
    Student std2("Changhajin", 1);
    Student std3("beakyuri", 2);

    Teacher teacher1("Prof. Hong");
    Teacher teacher2("Prof. Good");

    // Composition Relationship
    Lecture lec1("Intoroduction to Computer Programming");
    lec1.assignTeacher(&teacher1);
    lec1.registerStudent(&std1);
    lec1.registerStudent(&std2);
    lec1.registerStudent(&std3);

    Lecture lec2("Computational Thinking");
    lec2.assignTeacher(&teacher2);
    lec2.registerStudent(&std1);

    //Tod :imlement Aggregation Relationship

    // test
    {
        cout << lec1 << endl;
        cout << lec2 << endl;

        // event
        lec2.study();
        lec2.study();
        lec2.study();

        cout << lec1 << endl;
        cout << lec2 << endl;
    }
}

