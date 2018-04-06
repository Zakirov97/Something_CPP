#include "InvoiceItem.h"

int main()
{
	InvoiceItem it;
	std::cout << it.getTotal() << std::endl;
	std::cout << it.toString() << std::endl;
	system("pause");
	return 0;
}