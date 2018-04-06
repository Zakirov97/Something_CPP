#include "Account.h"



Account::Account()
{
	id = "KEK123";
	name = "LOL";
	balance = 0;
}

Account::Account(std::string _id, std::string _name)
{
	id = _id;
	name = _name;
}

Account::Account(std::string _id, std::string _name, int _balance)
{
	id = _id;
	name = _name;
	balance = _balance;
}

std::string Account::getID()
{
	return id;
}

std::string Account::getName()
{
	return name;
}



int Account::getBalance()
{
	return balance;
}

int Account::credit(int amount)
{
	balance += amount;
	return balance;
}

int Account::debit(int amount)
{
	if (amount <= balance)
	{
		balance -= amount;
	}
	else
	{
		std::cout << "Amount exceeded balance" << std::endl;
	}
	return balance;
}

int Account::transferTo(std::string anotherAcc, int amount)
{
	if (amount <= balance)
	{
		balance -= amount;
	}
	else
	{
		std::cout << "Amount exceeded balance" << std::endl;
	}
	return balance;
}

std::string Account::toString()
{
	std::string s1 = std::to_string(balance);
	return id + ' ' + name + ' ' + s1;
}


Account::~Account()
{
}
