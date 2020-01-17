#include "Doctor.h"
#include "Patient.h"

Doctor::Doctor(const std::string& name_in)
	: m_name(name_in)
{}

void Doctor::addPatient(Patient* new_patient)
{
	m_patients.push_back(new_patient);
}

void Doctor::meetPatients()
{
	for (auto& elem : m_patients)
		std::cout << "meet patient : " << elem->m_name << std::endl;
}