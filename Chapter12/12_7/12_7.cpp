// Chapter12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
	string m_name;

public:
	Animal(std::string name)
		: m_name(name)
	{}

public:
	string getName() { return m_name; }

	virtual void speak() const = 0;//pure virtual function
	/*virtual void speak() const
	{
		cout << m_name << " ??? " << endl;
	}*/
};

//void Animal::speak() const // the body of the pure virtual function
//{
//	cout << m_name << " ??? " << endl;
//}

class Woman : public Animal
{
public:
	Woman(string name)
		: Animal(name)
	{}

	void speak() const
	{
		cout << m_name << " Ah... " << endl;
	}
};

class Dog : public Animal
{
public:
	Dog(string name)
		: Animal(name)
	{}

	void speak() const
	{
		cout << m_name << " Woof " << endl;
	}
};

class Cow : public Animal
{
public:
	Cow(string name)
		: Animal(name)
	{}

	virtual void speak() const
	{
		cout << m_name << " Ah Huh.. " << endl;
	}
};

int main()
{
	Cow cow("leeminju");

	cow.speak();
	/*Animal animal("m animal");
	Woman lsh("leeseonghee");
	Dog dog("my dog");

	animal.speak();
	lsh.speak();
	dog.speak();

	Animal* ptr_animal1 = &lsh;
	Animal* ptr_animal2 = &dog;
	ptr_animal1->speak();
	(*ptr_animal2).speak();*/

	return 0;
}

