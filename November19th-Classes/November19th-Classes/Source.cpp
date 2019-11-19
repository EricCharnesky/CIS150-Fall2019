#include <iostream>
#include "Square.h"

using namespace std;

int main()
{
	Square smallSquare;
	smallSquare.setWidth(1);
	cout << "The area of a square with a width of " << smallSquare.getWidth()
		<< " is " << smallSquare.getArea() << endl;

	Square bigSquare;
	bigSquare.setWidth(100);
	cout << "The area of a square with a width of " << bigSquare.getWidth()
		<< " is " << bigSquare.getArea() << endl;

	Square anotherSquare = bigSquare + smallSquare;

	cout << "The area of a square with a width of " << anotherSquare.getWidth()
		<< " is " << anotherSquare.getArea() << endl;

	cout << "Big square == small square " << (bigSquare == smallSquare) << endl;
	cout << "Big square > small square " << (bigSquare > smallSquare) << endl;
	cout << "Big square > small square " << (bigSquare >= smallSquare) << endl;

	return 0;
}