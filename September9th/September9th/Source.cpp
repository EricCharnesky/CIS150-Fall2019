#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	string name;
	double currentCredits;
	double totalCreditsNeeded;
	double creditsPerSemester;
	double semestersLeft;

	cout << "What is your name?" << endl;
	cin >> name;

	cout << name << " how many credits do you have?" << endl;
	cin >> currentCredits;

	cout << name << " how many credits do you need to graduate?" << endl;
	cin >> totalCreditsNeeded;

	cout << name << " how many credits do you take per semester?" << endl;
	cin >> creditsPerSemester;

	semestersLeft = (totalCreditsNeeded - currentCredits) / creditsPerSemester;

	cout << name << " it will take you ";
	cout << semestersLeft;
	cout << " semesters to graduate" << endl;


	// ************
	// next example
	// ************

	double height;
	double base;
	double area;
	
	cout << endl;

	cout << "Enter the triangle height" << endl;
	cin >> height;

	cout << "Enter the triangle base" << endl;
	cin >> base;

	area = height * base * .5;

	cout << "The area of your triangle is: " << area << endl;


	cout << endl;

	const double PI = 3.14159;
	double radius;
	double circleArea;

	cout << "Enter the radius of your circle" << endl;
	cin >> radius;

	// without cmath library  
	// area = radius * radius * PI;

	// with cmath library - maybe required?
	circleArea = pow(radius, 2) * PI;
	

	cout << "The area of your circle is about: " << circleArea << endl;

	
	cout << endl;
	
	double numberToTakeSquareRootOf;

	cout << "Enter a number to find it's square root" << endl;
	cin >> numberToTakeSquareRootOf;

	cout << "The square root of " << numberToTakeSquareRootOf
		<< " is : " << sqrt(numberToTakeSquareRootOf) << endl;

	

	system("pause");
	return 0;
}