#include "SimpleCircle.h"

int main()
{
	SimpleCircle circ;
	circ.setRadius(5);
	std::cout << circ.getCircumference() << std::endl << circ.toString();
	system("pause");
	return 0;
}