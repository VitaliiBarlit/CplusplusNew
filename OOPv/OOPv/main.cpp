
#include "BankAccount.h"
//#include "Quest.h"

using namespace std;


/*
 Дано: класс BankAccount.
 iD, card, balans;

 Client (временная акция, к прмиеру: с 10-12).
 Manager (уровень доступа).

 * возможность перевыпустиь карту, пополнить и снять с баланса.
 * id - генерруется автоматически (клиентам - 8 цифр, менеджерам - 4).

 Меню при старте: - Вы клиент или менеджер
 *
 */
int *n = new int;

void menu(int *parameter);

int main() {
	cout << "Welcome to Bank Account System." << "\r\n";
	cout << "\r\n" << "\r\n";
	cout << "Are you Manager or Client? " << "\r\n";
	cin >> *n;
	menu(n);

	/*
	Labirint *lab = new Labirint();
	lab->show();

	lab->setLocation("New City");
	lab->setPlayers(25);
	lab->levelUp();

	cout << "current level: " << lab->getLevel() << endl;

	lab->levelUp();

	lab->show();

	Quest *quest = new Quest("Time Travel", 4, 1, 5, 0);
	quest->show();
	*/

	BankAccount *BA = new BankAccount();
	BA->show();




	cout << "Press Enter to Exit." << "\r\n";
	cin.get();
	return 0;
}

void menu(int *parameter)
{
	if (*parameter = 1)
	{
		cout << "Error! Try again." << "\r\n";
		cout << "1 - Manager \r\n"
			"2 - Client \r\n";

		cin >> *n;
		switch (*n)
		{
		case 1: cout << "Function of Manager. " << "\r\n"; break;
		case 2: cout << "Function for  Client. " << "\r\n"; break;
		default: menu(0);
		}
		//menu(0);

	}
	else if (*parameter == 2)
	{

		cout << "1 - Manager \r\n"
			"2 - Client\r\n";

		cin >> *n;
		switch (*n)
		{
			case 1: cout << "Function of Manager. " << "\r\n";break;
			case 2: cout << "Function for  Client. " << "\r\n"; break;
			default: menu(0);
		}



	//	menu(1);
	}
}