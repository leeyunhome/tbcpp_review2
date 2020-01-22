// 9_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;

class Point
{
private:
	double m_x, m_y, m_z;

public:
	Point(double x = 0.0, double y = 0.0, double z = 0.0)
		: m_x(x), m_y(y), m_z(z)
	{}

	double getX()
	{
		return m_x;
	}

	double getY()
	{
		return m_y;
	}

	double getZ()
	{
		return m_z;
	}

	friend std::ostream& operator << (std::ostream& out, const Point& point)
	{
		out << "[" << point.m_x << ", " << point.m_y << ", " << point.m_z << "]";
		return out;
	}
	friend std::istream& operator >> (std::istream& in, Point& point)
	{
		in >> point.m_x >> point.m_y >> point.m_z;
		in.ignore(32767, '\n');

		return in;
	}

	Point operator+(const Point& point)
	{
		return Point(this->m_x + point.m_x, this->m_y + point.m_y, this->m_z + point.m_z);
	}
	
};

int main()
{
	const char* name = "output.txt";
	const char* name2 = "output1.txt";
	ofstream of(name);
	ifstream inputf(name2);

	Point p1(1.1, 2.2, 3.3);
	Point p2(1.1, 2.3, 3.3);

	/*cout << p1 << endl;

	cout << p1 + p2 << endl;

	cout << p1 << " " << p2 << endl;

	of << p1 << " " << p2 << endl;*/

	/*cout << "enter p1";
	cin >> p1;
	cout << "enter p2";
	cin >> p2;*/

	inputf >> p1;
	inputf >> p2;

	cout << p1 << " " << p2 << endl;

	of.close();
	inputf.close();

	return 0;
}
