#include "EmployeClass.h"

int main()
{
	EmployeClass ec;
	EmployeClass();
	std::cout << ec.getName() << std::endl;
	std::cout << ec.getAnnualSalary() << std::endl;
	std::cout << ec.raiseSalary(12) << std::endl;
	std::cout << ec.toString() << std::endl;
	system("pause");
	return 0;
}