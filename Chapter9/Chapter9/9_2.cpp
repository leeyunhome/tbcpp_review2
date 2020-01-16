// Chapter9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

class Point
{
private:
	double m_x, m_y, m_z;

public:
	Point(double x = 0.0, double y = 0.0, double z = 0.0)
		: m_x(x), m_y(y), m_z(z)
	{}

	double getX() { return m_x; }
	double getY() { return m_y; }
	double getZ() { return m_z; }

	friend std::ostream& operator<<(std::ostream& out, const Point& p)
	{
		out << "[" << p.m_x << ", " << p.m_y << ", " << p.m_z << "]";
		return out;
	}
	friend std::istream& operator>>(std::istream& in,Point& p)
	{
		in >> p.m_x >> p.m_y >> p.m_z;
		return in;
	}
};

int main()
{
	using namespace std;

	string str("out.txt");
	//ofstream of("out.txt");
	ifstream inf(str);

	Point p1(1.1, 2.2, 3.3);
	Point p2(4.3, 5.5, 6.7);
	Point p3;

	//cin >> p3;

	/*of << p1 << endl;
	of << p2 << endl;*/
	
	inf >> p1;
	inf >> p2;

	cout << p1 << endl;
	cout << p2 << endl;
	inf.close();
	//of.close();

	return 0;
}
