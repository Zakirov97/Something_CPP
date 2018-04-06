#include "EmployeClass.h"



EmployeClass::EmployeClass()
{
	id = 1234567890;
	firstName = "Lol";
	lastName = "Kek";
	salary = 100;
}


EmployeClass::~EmployeClass()
{
}

EmployeClass::EmployeClass(int _id, int _salary, std::string _firstName, std::string _lastName)
{
	id = _id;
	salary = _salary;
	firstName = _firstName;
	lastName = _lastName;
}

int EmployeClass::getId()
{
	return id;
}

std::string EmployeClass::getFirstName()
{
	return firstName;
}

std::string EmployeClass::getLastName()
{
	return lastName;
}

std::string EmployeClass::getName()
{
	return firstName + ' ' + lastName;
}

int EmployeClass::getSalary()
{
	return salary;
}

void EmployeClass::setSalary(int _salary)
{
	salary = _salary;
}

int EmployeClass::getAnnualSalary()
{
	return salary * 12;
}

int EmployeClass::raiseSalary(int _percent)
{
	return salary + ((salary / 100) * _percent);
}

std::string EmployeClass::toString()
{
	std::string s1, s2;
	s1 = std::to_string(id);
	s2 = std::to_string(salary);
	return s1 + ' ' + firstName + ' ' + lastName + ' ' + s2;
}