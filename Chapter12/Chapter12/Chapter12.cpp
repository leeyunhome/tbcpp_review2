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

	virtual void speak() const
	{
		cout << m_name << " ??? " << endl;
	}
};

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

int main()
{
	Woman women[] = { Woman("leeseonghee"), Woman("leehyerim"),
					Woman("rely ray"), Woman("yuu kazuki") };
	Dog dogs[] = { Dog("dog1"), Dog("dog2") };

	for (int i = 0; i < 4; ++i)
		women[i].speak();

	Animal* my_animals[] = {&women[0], &women[1], &women[2],
				&women[3], &dogs[0], &dogs[1]};

	for (int i = 0; i < 6; ++i)
		(*(my_animals[i])).speak();

	 
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

