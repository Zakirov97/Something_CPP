#include "Student.h"



void Student::setFirstName(std::string fn)
{
	firstName = fn;
}

void Student::setLastName(std::string ln)
{
	lastName = ln;
}

void Student::setID(int _id)
{
	ID = _id;
}

void Student::setRating(int _rating)
{
	rating = _rating;
}

void Student::print()
{
	std::cout << "FirstName " << firstName << std::endl;
	std::cout << "LastName " << lastName << std::endl;
	std::cout << "ID " << ID << std::endl;
	std::cout << "Rating " << rating << std::endl;
}

Student::Student()
{
	std::string s, s1;
	int a, b;
	std::cout << "FirstName is ";
	std::cin >> s;
	std::cout << std::endl;
	std::cout << "LastName is ";
	std::cin >> s1;
	std::cout << std::endl;
	std::cout << "ID is ";
	std::cin >> a;
	std::cout << std::endl;
	std::cout << "Rating ";
	std::cin >> b;
	std::cout << std::endl;
	setFirstName(s);
	setLastName(s1);
	setID(a);
	setRating(b);
	std::cout << std::endl;
	print();
}


Student::~Student()
{
}
