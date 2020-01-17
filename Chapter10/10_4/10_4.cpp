// 10_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Patient.h"
#include "Doctor.h"

int main()
{
	Patient* p1 = new Patient("Leeseonghee");
	Patient* p2 = new Patient("kimkihyeon");
	Patient* p3 = new Patient("kimminsu");

	Doctor* d1 = new Doctor("Doctor K");
	Doctor* d2 = new Doctor("Doctor L");

	p1->addDoctor(d1);
	d1->addPatient(p1);

	p2->addDoctor(d2);
	d2->addPatient(p2);

	p2->addDoctor(d1);
	d1->addPatient(p2);

	// patients meet doctors
	p1->meetDoctors();

	// doctors meet patients
	d1->meetPatients();

	// deletes
	delete p1;
	delete p2;
	delete p3;

	delete d1;
	delete d2;

	return 0;
}
