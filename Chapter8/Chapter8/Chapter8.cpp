// Chapter8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Friend : name, address, age, breast, waist, ...

void print(const string& name, const string& address, const int& age,
	const double& breast, const double& waist)
{
	cout << name << " " << address << " " << age << " " << breast << " "
		<< waist << endl;
}
int main()
{
	string name;
	string address;
	int		age;
	double breast;
	double waist;

	print(name, address, age, breast, waist);

	vector<string> name_vec;
	vector<string> addr_vec;
	vector<int>		age_vec;
	vector<double> breast_vec;
	vector<double> waist_vec;

	//print(name_vec[0], addr_vec[0], )

	return 0;
}

