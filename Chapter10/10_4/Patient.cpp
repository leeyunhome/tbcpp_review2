#include "Patient.h"
#include "Doctor.h"

Patient::Patient(const std::string& name_in)
	: m_name(name_in)
{}

void Patient::addDoctor(Doctor* new_doctor)
{
	m_doctors.push_back(new_doctor);
}

void Patient::meetDoctors()
{
	for (auto& elem : m_doctors)
		std::cout << "meet doctor : " << elem->m_name << std::endl;
}

