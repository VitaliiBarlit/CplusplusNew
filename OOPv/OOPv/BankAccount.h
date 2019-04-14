#pragma once
#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

class BankAccount
{
public:
	BankAccount();
	~BankAccount();

	void setID(int id);
	int getID();

	void setCard(int card);
	int getCard();

	void setBalance(float balance);
	float getBalance();

	virtual void show();

protected:
	int id;
	int card;
	float balance;
};

