#include "Circle.h"
#include <iostream>


int main()
{
	Circle circle;
	circle.setRadius(5);
	circle.setColor("Blue");
	std::cout << circle.getArea() << std::endl;
	std::cout << circle.toString();
	system("pause");
	return 0;
}