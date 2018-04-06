#pragma once
#include <iostream>
#include <string>
class Date
{
private:
	int day, month, year;
public:
	Date();
	Date(int _day, int _month, int _year);
	int getDay();
	int getMonth();
	int getYear();
	void setDay(int _day);
	void setMonth(int _month);
	void setYear(int _year);
	void setDate(int day, int month, int year);
	std::string toString();
	~Date();
};

