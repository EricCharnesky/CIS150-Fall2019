#include "GroceryItem.h"


GroceryItem::GroceryItem(std::string name, double price)
{
	this->name = name;
	this->price = price;
}

std::string GroceryItem::getName()
{
	return name;
}

double GroceryItem::getPrice()
{
	return price;
}

double GroceryItem::getTotalPriceWithTax()
{
	return price * ( 1 + TAX_RATE / 100.0 );
}

std::string GroceryItem::toString()
{
	return name + ": $" + std::to_string(price);
}
