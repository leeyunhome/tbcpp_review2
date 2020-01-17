#pragma once
#include <iostream>
#include <string>
#include <vector>


class Patient;	// forward declaration

class Doctor
{
private:
	std::string m_name;
	std::vector<Patient*> m_patients;

public:
	Doctor(const std::string& name_in);

	void addPatient(Patient* new_patient);

	void meetPatients();

	friend class Patient;
};

