#include <iostream>
#include "Warrior.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	srand(time(NULL));
	
	Warrior *orc = new Warrior("John", 135);
	orc->show();
	
	Warrior *elf = new Warrior("Legolas", 120);
	elf->show();
	//cout << elf->getHP();
	
	while(elf->getHP() > 1 and orc->getHP() > 1)
	{
		orc->attack();
		elf->attack();	
	}
	
	cout << orc->getHP() << endl;
	cout << elf->getHP() << endl;
	
	if (elf->getHP() > orc->getHP())
	{
		cout << elf->getName() << " is winner!" << endl;
	}
	else if (elf->getHP() < orc->getHP())
	{
		cout << orc->getName() << " is winner!" << endl;
	}
	else
	{
		cout << "Tie." << endl;
	}


	
	return 0;
}
