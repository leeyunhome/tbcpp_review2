#pragma once

#include <iostream>
#include <string>
#include <vector>

class Doctor;

class Patient
{
private:
	std::string m_name;
	std::vector<Doctor*> m_doctors;

public:
	Patient(const std::string& name_in);

	void addDoctor(Doctor* new_doctor);

	void meetDoctors();

	friend class Doctor;
};

