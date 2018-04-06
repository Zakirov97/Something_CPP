#include "SimpleCircle.h"



SimpleCircle::SimpleCircle()
{
	radius = 1.0;
}

SimpleCircle::SimpleCircle(double _radius)
{
	radius = _radius;
}

double SimpleCircle::getRadius()
{
	return radius;
}

void SimpleCircle::setRadius(double _radius)
{
	radius = _radius;
}

double SimpleCircle::getArea()
{
	return radius * 3.14 * radius;
}

double SimpleCircle::getCircumference()
{
	return 2 * 3.14 * radius;
}

std::string SimpleCircle::toString()
{
	return std::to_string(radius);
}


SimpleCircle::~SimpleCircle()
{
}
