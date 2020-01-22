// 8_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Date
{
private:	// access specifier
	int month;
	int day;
	int year;

public:
	void setDate(const int& month_input, const int& day_input,
		const int& year_input)
	{
		month = month_input;
		day = day_input;
		year = year_input;
	}
	// setMonth, setDay, setYear ...

	const int& getMonth()	// getters
	{
		return month;
	}


	int getDay()
	{
		return day;
	}

	int getYear()
	{
		return year;
	}

	void copyFrom(const Date& original)
	{
		month = original.month;
		day = original.day;
		year = original.year;
	}
};
int main()
{
	using namespace std;
	Date today; //{ 8, 4, 2020 };
	today.setDate(1, 21, 2020);
	cout << today.getMonth() << endl;
	cout << today.getDay() << endl;
	cout << today.getYear() << endl;

	Date copy;
	copy.copyFrom(today);
	/*today.day = 4;
	today.year = 2020;*/

	return 0;
}
