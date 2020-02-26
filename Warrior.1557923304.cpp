#include "Warrior.h"

Warrior::Warrior(string name,int health)
{
	this->name = name;
	this->health = health;
}

//string Warrior::getName(string name)
//{
//	return this->name;
//}

void Warrior::show()
{
	cout 
	<< "Name: " << this->name << endl
	<< "Health: " << this->health << endl; 
	
}

int Warrior::getHP()
	{
		return this->health;
	}

string Warrior::getName()
	{
		return this->name;
	}
			

int Warrior::attack()
{
	int hit = rand() % 10;
	health -= hit;
	cout 
	<< "health left:" << health  << endl;
	return this->health;
}
