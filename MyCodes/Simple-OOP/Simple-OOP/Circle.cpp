#include "Circle.h"



Circle::Circle()
{
	double radius = 1.0;
	std::string color = "red";
}

Circle::Circle(double _radius)
{
	radius = _radius;
	std::string colod = "red";
}

Circle::Circle(double _radius, std::string _color)
{
	radius = _radius;
	std::string color = _color;
}


Circle::~Circle()
{
	
}


double Circle::getRadius()
{
	return radius;
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}

void Circle::setRadius(double _radius)
{
	radius = _radius;
}

void Circle::setColor(std::string _color)
{
	color = _color;
}

std::string Circle::toString()
{
	std::string s1 = std::to_string(radius);
	return "Circle radius = " + s1 + " color = " + color;
}

