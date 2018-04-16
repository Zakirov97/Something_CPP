#include "Drob.h"



void Drob::setX(int _x)
{
	x = _x;
}

void Drob::setY(int _y)
{
	y = _y;
}

double Drob::fSize()
{
	return (double)x/y;
}

int Drob::noDot()
{
	return x/y;
}

Drob::Drob()
{
	int x;
	int y;
	std::cout << "Vvedite chislitel ";
	std::cin >> x;
	std::cout << '\n' << "Vvedite znamenatel ";
	std::cin >> y;
	std::cout << std::endl;
	setX(x);
	setY(y);
	std::cout << "Celaya chast ot deleniya = " << noDot() << std::endl;
	std::cout << "Perevod drobi v veshestvennoe chislo " << 
		fSize() << std::endl;
}

Drob::~Drob()
{
}
