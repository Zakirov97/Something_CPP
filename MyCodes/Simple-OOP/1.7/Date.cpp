#include "Date.h"



Date::Date()
{
	day = 20;
	month = 02;
	year = 1969;
}

Date::Date(int _day, int _month, int _year)
{
	day = _day;
	month = _month;
	year = _year;
}

int Date::getDay()
{
	return day;
}

int Date::getMonth()
{
	return month;
}

int Date::getYear()
{
	return year;
}

void Date::setDay(int _day)
{
	day = _day;
}

void Date::setMonth(int _month)
{
	month = _month;
}

void Date::setYear(int _year)
{
	year = _year;
}

void Date::setDate(int _day, int _month, int _year)
{
	std::cin >> _day >> _month >> _year;
	day = _day;
	month = _month;
	year = _year;
}

std::string Date::toString()
{
	std::string s1 = std::to_string(day);
	std::string s2 = std::to_string(month);
	std::string s3 = std::to_string(year);
	return s1 + ' ' + s2 + ' ' + s3;
}


Date::~Date()
{
}
