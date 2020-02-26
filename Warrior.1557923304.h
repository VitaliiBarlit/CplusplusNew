#ifndef WARRIOR_H
#define WARRIOR_H
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

class Warrior
{
	public:
		
		Warrior(string name, int health);
		//string getName(string name);
		int attack();
		
		int getHP();
		string getName();
		
		virtual void show();
		
		~Warrior();
		int health;

	protected:
		string name;
		//int health;
};

#endif
