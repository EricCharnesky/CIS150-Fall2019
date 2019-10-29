#include <iostream>

using namespace std;

int main()
{
	/*double a;
	double b;
	double c;

	double xIntercept1;
	double xIntercept2;

	double determinant;

	cout << "Enter A" << endl;
	cin >> a;

	cout << "Enter B" << endl;
	cin >> b;

	cout << "Enter C" << endl;
	cin >> c;

	cout << endl;

	determinant = b * b - 4 * a * c;

	if (determinant >= 0)
	{
		xIntercept1 = (-b + sqrt(determinant)) / (2 * a);
		xIntercept2 = (-b - sqrt(determinant)) / (2 * a);

		cout << "X intercepts are: " << xIntercept1 << " and " << xIntercept2 << endl;
	}
	else
	{
		cout << "There are no roots!" << endl;
	}*/

	//double percentage;

	//cout << "Enter your final grade percentage: " << endl;

	//cin >> percentage;

	//if (percentage >= 93)
	//{
	//	cout << "A" << endl;
	//}
	//else if (percentage >= 90)
	//{
	//	cout << "A-" << endl;
	//}
	//else if (percentage >= 87)
	//{
	//	cout << "B+" << endl;
	//}
	//else if (percentage >= 83)
	//{
	//	cout << "B" << endl;
	//}
	//else if (percentage >= 80)
	//{
	//	cout << "B-" << endl;
	//}
	//else if (percentage >= 77)
	//{
	//	cout << "C+" << endl;
	//}
	//else if (percentage >= 73)
	//{
	//	cout << "C" << endl;
	//}
	//else if (percentage >= 70)
	//{
	//	cout << "C-" << endl;
	//}
	//else if (percentage >= 67)
	//{
	//	cout << "D+" << endl;
	//}
	//else if (percentage >= 63)
	//{
	//	cout << "D" << endl;
	//}
	//else if (percentage >= 60)
	//{
	//	cout << "D-" << endl;
	//}
	//else
	//{
	//	cout << "F" << endl;
	//}

	//int age;

	//cout << "Enter your age:" << endl;

	//cin >> age;

	//// both ways should work, one might be less confusing than the other

	//if (age >= 18)
	//{
	//	cout << "You can vote!" << endl;
	//	if (age >= 21)
	//	{
	//		cout << "You can buy alcohol!" << endl;
	//		if (age >= 23)
	//		{
	//			cout << "You can rent a car!" << endl;
	//		}
	//		else
	//		{
	//			cout << "You can't rent a car!" << endl;
	//		}
	//	}
	//}
	//else
	//{
	//	cout << "You can't vote!" << endl;
	//	cout << "You can't buy alcohol!" << endl;
	//	cout << "You can't rent a car!" << endl;
	//}


	//if (age >= 23)
	//{
	//	cout << "You can rent a car!" << endl;
	//}
	//else
	//{
	//	cout << "You can't rent a car!" << endl;
	//}

	//if (age >= 21)
	//{
	//	cout << "You can buy alcohol!" << endl;
	//}
	//else
	//{
	//	cout << "You can't buy alcohol!" << endl;
	//}

	//if (age >= 18)
	//{
	//	cout << "You can vote!" << endl;
	//}
	//else
	//{
	//	cout << "You can't vote!" << endl;
	//}


	int temperature;
	char isRaining;

	cout << "What's the temperature?" << endl;
	cin >> temperature;

	cout << "Is it raining? y/n" << endl;
	cin >> isRaining;

	if (temperature >= 50)
	{
		cout << "You can wear short sleeves" << endl;
	}
	else if (temperature > 32)
	{
		cout << "You might want a jacket" << endl;
	}
	else
	{
		cout << "You should bring a coat" << endl;
	}

	if ((isRaining != 'N' && isRaining != 'n'))
	{

	}

	if (isRaining == 'Y' || isRaining == 'y')
	{
		cout << "Bring an umbrella!" << endl;
	}





	return 0;
}