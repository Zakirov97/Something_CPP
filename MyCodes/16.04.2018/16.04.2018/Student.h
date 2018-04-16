#pragma once
#include <iostream>
#include <string>
class Student
{
	std::string firstName;
	std::string lastName;
	int ID;
	int rating;

public:
	void setFirstName(std::string fn);
	void setLastName(std::string ln);
	void setID(int _id);
	void setRating(int _rating);
	std::string getFirstName() { return firstName; };
	std::string getLastName() { return lastName; };
	int getID() { return ID; };
	int getRating() { return rating; };
	void print();
	Student();
	~Student();
};

