#pragma once
#include <string>
#include <iostream>
class EmployeClass
{
private:
	int id, salary;
	std::string firstName, lastName;

public:
	EmployeClass();
	EmployeClass(int _id, int _salary, std::string _firstName, std::string _lastName);
	int getId();
	std::string getFirstName();
	std::string getLastName();
	std::string getName();
	int getSalary();
	void setSalary(int _salary);
	int getAnnualSalary();
	int raiseSalary(int _percent);
	std::string toString();
	~EmployeClass();
};