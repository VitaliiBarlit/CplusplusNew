#include "Warrior.h"

Warrior::Warrior(string name,int health,int kick)
{
	this->name = name;
	this->health = health;
	this->kick = kick;
}

//string Warrior::getName(string name)
//{
//	return this->name;
//}

void Warrior::show()
{
	cout 
	<< "Name: " << this->name << endl
	<< "Health: " << this->health << endl
	<< "Hit: " << this->kick << endl	; 
	
}

int Warrior::getHP()
	{
//		if (health < 25)
//		{
//			int r = rand() % 15;
//			if(r > 11)
//			{
//				cout << "Argh" << endl;
//			}
//		}
		return this->health;
	}

string Warrior::getName()
	{
		return this->name;
	}
			
int Warrior::getHit()
{
	return this->kick;
}


int Warrior::attack()
{
	int hit = rand() % 10;
	health -= hit;
	cout 
	<< name << " health left: " 
	<< health  << endl;
	return this->health;
}

int Warrior::attack(int hit)
{
	health -= hit;
	cout 
	<< name << " health left: " 
	<< health  << endl;
	return this->health;
}
