// 10_4a.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Doctor;   // forward declaration

class Patient
{
private:
    std::string m_name;
    std::vector<Doctor*> m_doctors;

public:
    Patient(const std::string& name_in)
        : m_name(name_in)
    {}

    void addDoctors(Doctor * new_doctor)
    {
        m_doctors.push_back(new_doctor);
    }

    void meetDoctors();

    friend class Doctor;
};

class Doctor
{
private:
    std::string m_name;
    std::vector<Patient*> m_patients;

public:
    Doctor(const std::string& name_in)
        : m_name(name_in)
    {}

    void addPatients(Patient* new_patient)
    {
        m_patients.push_back(new_patient);
    }

    void meetPatients()
    {
        for (auto& elem : m_patients)
            cout << "meet : " << elem->m_name << endl;
    }

    friend class Patient;
};

void Patient::meetDoctors()
{
    for (auto& elem : m_doctors)
        cout << "Meet " << elem->m_name << endl;
}

int main()
{
    Patient* p1 = new Patient("leeseonghee");
    Patient* p2 = new Patient("kimkyungmoon");
    Patient* p3 = new Patient("sonseokhee");

    Doctor* d1 = new Doctor("Doctor. K");
    Doctor* d2 = new Doctor("Doctor. K");

    p1->addDoctors(d1);
    d1->addPatients(p1);

    p2->addDoctors(d2);
    d2->addPatients(p2);

    p2->addDoctors(d1);
    d1->addPatients(p2);

    // patients meet doctors
    p1->meetDoctors();

    // doctors meet patients
    d1->meetPatients();
    

    
    delete p1;
    delete p2;
    delete p3;

    delete d1;
    delete d2;

    return 0;
}

