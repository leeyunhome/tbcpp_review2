#pragma once
#include <iostream>
#include <string>
#include "Position2D.h"

using namespace std;

class Monster
{
private:
	string m_name;
	Position2D m_location;
	
public:
	Monster(const string& name_in, const Position2D& pos2d)
		: m_name(name_in), m_location(pos2d)
	{}

	void moveTo(const Position2D& pos_target)
	{
		m_location = pos_target;
	}

	friend std::ostream& operator << (std::ostream& out, const Monster& monster)
	{
		out << monster.m_name << " " << monster.m_location;
		return out;
	}


};