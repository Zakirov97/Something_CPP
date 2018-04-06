#pragma once
#include <iostream>
#include <string>
class SimpleCircle
{
private:
	double radius;
public:
	SimpleCircle();
	SimpleCircle(double _radius);
	double getRadius();
	void setRadius(double _radius);
	double getArea();
	double getCircumference();
	std::string toString();
	~SimpleCircle();
};

