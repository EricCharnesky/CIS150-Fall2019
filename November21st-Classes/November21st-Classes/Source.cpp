#include <iostream>
#include "GroceryItem.h"

using namespace std;

int main()
{
	GroceryItem chips("Better Made BBQ Chips", 2.99);
	cout << chips.toString() << endl;
	cout << "Chips cost: $" << chips.getTotalPriceWithTax() << " with tax!" << endl;

	return 0;
}