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
		
		Warrior(string name, int health, int kick);
		//string getName(string name);
		int attack();
		int attack(int hit);

		
		int getHP();
		int getHit();
		string getName();
		
		virtual void show();
		
		~Warrior();
		int kick;
	protected:
		int hit;
		int health;
		string name; 
		//int health;
};

#endif
