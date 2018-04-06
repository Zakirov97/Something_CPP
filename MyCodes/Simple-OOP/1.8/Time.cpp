#include "Time.h"



Time::Time()
{
	hour = 12;
	minute = 13;
	second = 14;
}

Time::Time(int _hour, int _minute, int _second)
{
	hour = _hour;
	minute = _minute;
	second = _second;
}

int Time::getHour()
{
	return hour;
}

int Time::getMinute()
{
	return minute;
}

int Time::getSecond()
{
	return second;
}

void Time::setHour(int _hour)
{
	hour = _hour;
}

void Time::setMinute(int _minute)
{
	minute = _minute;
}

void Time::setSecond(int _second)
{
	second = _second;
}

void Time::setTime(int _hour, int _minute, int _second)
{
	hour = _hour;
	minute = _minute;
	second = _second;
}

void Time::nextSecond(int _second)
{
	second += _second;
}

void Time::previousSecond(int _second)
{
	second -= _second;
}


std::string Time::toString()
{
	std::string s1 = std::to_string(hour);
	std::string s2 = std::to_string(minute);
	std::string s3 = std::to_string(second);
	return s1 + ' ' + s2 + ' ' + s3;
}


Time::~Time()
{
}
