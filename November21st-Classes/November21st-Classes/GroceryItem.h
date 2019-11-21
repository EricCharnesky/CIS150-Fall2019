#pragma once
#include <string>

class GroceryItem
{
public:
	static const int TAX_RATE = 6;
	GroceryItem(std::string name, double price);
	std::string getName();
	double getPrice();
	double getTotalPriceWithTax();
	std::string toString();
private:
	std::string name;
	double price;
};