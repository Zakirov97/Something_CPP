#include "InvoiceItem.h"



InvoiceItem::InvoiceItem()
{
	id = "TextIDTest";
	desc = "DESC";
	qty = 12345;
	unitPrice = 123.0;
}

InvoiceItem::InvoiceItem(std::string _id, std::string _desc, int _qty, double _unitPrice)
{
	id = _id;
	desc = _desc;
	qty = _qty;
	unitPrice = _unitPrice;
}

std::string InvoiceItem::getId()
{
	return id;
}

std::string InvoiceItem::getDesc()
{
	return desc;
}

void InvoiceItem::setQty(int _qty)
{
	qty = _qty;
}

double InvoiceItem::getUnitPrice()
{
	return	unitPrice;
}

void InvoiceItem::setUnitPrice(double _unitPrice)
{
	unitPrice = _unitPrice;
}

double InvoiceItem::getTotal()
{
	return unitPrice * qty;
}

std::string InvoiceItem::toString()
{
	std::string s1 = std::to_string(qty);
	std::string s2 = std::to_string(unitPrice);
	return id + ' ' + desc + ' ' + s1 + ' ' + s2;
}


InvoiceItem::~InvoiceItem()
{
}
