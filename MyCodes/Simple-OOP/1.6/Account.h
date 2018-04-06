#pragma once
#include <iostream>
#include <string>
class Account
{
private:
	std::string id, name;
	int balance;
public:
	Account();
	Account(std::string _id, std::string _name);
	Account(std::string _id, std::string _name, int _balance);
	std::string getID();
	std::string getName();
	int getBalance();
	int credit(int amount);
	int debit(int amount);
	int transferTo(std::string anotherAcc, int amount);
	std::string toString();
	~Account();
};

