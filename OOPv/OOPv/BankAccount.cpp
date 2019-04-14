#include "BankAccount.h"

BankAccount::BankAccount()
{
	this->id = 0;
	this->card = 0;
	this->balance = 0.0;
}

void BankAccount::setID(int id)
{
	this->id = id;
}
void BankAccount::setCard(int card)
{
	this->card = card;
}
void BankAccount::setBalance(float balance)
{
	this->balance = balance;
}

int BankAccount::getID()
{
	return this->id;
}
int BankAccount::getCard()
{
	return this->card;
}
float BankAccount::getBalance()
{
	return this->balance;
}



void BankAccount::show() {
	cout << "id: " << this->id << "\n" <<
		"card: " << this->card << "\n" <<
		"balance: " << this->balance << "\n";
}


BankAccount::~BankAccount()
{
}
