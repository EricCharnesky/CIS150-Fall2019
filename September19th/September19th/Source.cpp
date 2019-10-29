#include <iostream>
#include <string>

using namespace std;

int main()
{
	string className;

	cout << "What is your class name?" << endl;

	getline(cin, className);

	// this is annoying to have all these cases
	if (className == "CIS 150" || className == "cis 150" || className == "Cis 150"
		|| className == "cIs 150")
	{
		cout << "Learning to code you are" << endl;
	}
	else
	{
		cout << "Have you thought about learning to code?" << endl;
	}

	if (toupper(className.at(0)) == 'C'
		&& toupper(className.at(1)) == 'I'
		&& toupper(className.at(2)) == 'S'
		&& className.at(3) == ' '
		&& className.at(4) == '1'
		&& className.at(5) == '5'
		&& className.at(6) == '0')
	{
		cout << "Learning to code the slow way you are" << endl;
	}

	if ((className.at(0) == 'C' || className.at(0) == 'c'))
		// && className.at() ...... same as above

	{
		// see above - this is tedious
	}

	// relational operators are weird for strings ( and characters )
	if (className <= "CIS 150")
	{

	}

	if (className.find("CIS") != string::npos)
	{
		cout << "you are taking a fun class!" << endl;
	}
	else
	{
		cout << "Must be an elective?" << endl;
	}


	string courseNumber;
	string department;

	int indexOfSpace = className.find(' ');

	if (indexOfSpace != string::npos)
	{
		department = className.substr(0, indexOfSpace);

		// grab the last 3 or 4 characters ( CIS 150 vs CIS 1501 )
		courseNumber = className.substr(indexOfSpace + 1,
			className.size() - indexOfSpace - 1);
	}
	else
	{
		if (isdigit(className.at(3)))
		{
			department = className.substr(0, 3);
			courseNumber = className.substr(3,
				className.size() - 3);
		}
		else
		{
			department = className.substr(0, 4);
			courseNumber = className.substr(4,
				className.size() - 4);
		}
	}

	cout << department << endl;
	cout << courseNumber << endl;

	string message;

	if (courseNumber.at(0) > '1')
	{
		message = "This is not a freshman class";
	}
	else
	{
		message = "This is a freshman class";
	}

	// ternary expression - same function as above
	string otherMessage = (courseNumber.at(0) > '1') 
		? "This is not a freshman class" : "This is a freshman class";

	cout << message;
	cout << otherMessage;


	double age = 32.5;

	double first = 21.2;
	double second = 11.3;

	double sum = first + second;

	// math is bad sometimes
	if (fabs(age-sum) < .001)
	{
		cout << "Math works!" << endl;
	}
	else
	{
		cout << "Fail!" << endl;
	}


	return 0;
}