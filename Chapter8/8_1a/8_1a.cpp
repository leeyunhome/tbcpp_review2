// 8_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Object
// Friend : name, address, age, breast, waist, ...
//			print()

class Friend
{
public:	// access specifier (public, private, protected)
	string m_name;
	string m_address;
	int		m_age;
	double breast;
	double waist;

	void print()
	{
		cout << m_name << " " << m_address << " " << m_age << " " << breast << " "
			<< waist << endl;
	}
};


void print(const string& name, const string& address, const int& age,
	const double& breast, const double& waist)
{
	cout << name << " " << address << " " << age << " " << breast << " "
		<< waist << endl;
}

int main()
{
	Friend hr{ "leehyerim", "Uptown", 32, 65, 15 };	// instanciation
	Friend yr{ "beakyuri", "Uptown", 32, 55, 15 };	// instanciation
	hr.print();

	vector<Friend> fr;
	fr.resize(2);
	fr.push_back(hr);
	fr.push_back(yr);

	for (auto& ele : fr)
		ele.print();



	//print(hr.name, hr.address, hr.age, hr.breast, hr.waist);

	return 0;
}

