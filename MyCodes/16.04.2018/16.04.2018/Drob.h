#pragma once
#include <iostream>

class Drob
{
	int x;
	int y;
public:
	void setX(int _x);
	void setY(int _y);
	int getX() { return x; };
	int getY() { return y; };
	double fSize();
	int noDot();
	Drob();
	~Drob();
};

