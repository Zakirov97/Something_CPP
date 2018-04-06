#include <string>
#include <math.h>
#pragma once

class Circle
{
private:
	double radius;
	std::string color;
public:
	Circle();
	Circle(double _radius);
	Circle(double _radius, std::string _color);
	double getRadius();
	std::string getColor;
	double getArea();
	void setRadius(double _radius);
	void setColor(std::string _color);
	std::string toString();
	~Circle();
};

