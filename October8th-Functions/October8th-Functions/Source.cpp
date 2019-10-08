#include <iostream>
#include <vector>
#include <string>
#include "VectorFunctions.h"

using namespace std;

int luckyNumber();
int doublyLuckyNumber(int number);

// don't use global variables if you can help it ( yes you can )
int someValue;

string capitalizeString(string name)
{
	name.at(0) = toupper(name.at(0));
	return name;
}


void printTheDate(int day, int month, int year, int printStyle = 0)
{
	if (printStyle == 0)
	{
		cout << month << "-" << day << "-" << year << endl;
	}
	else if ( printStyle == 1)
	{
		cout << day << "-" << month << "-" << year << endl;
	}
	else
	{
		cout << year << "-" << month << "-" << day << endl;
	}	
}

// does the same as the above with optional parameter
//void printTheDate(int day, int month, int year)
//{
//	printTheDate(day, month, year, 0);
//}


void printTheDate(string day, string month, string year, int printStyle = 0)
{
	printTheDate(stoi(day), stoi(month), stoi(year), printStyle);
}

void printTheDate(double day, double month, double year, int printStyle = 0)
{
	printTheDate(day, month, year, printStyle);
}

int main()
{
	/*int usersNumber;
	cout << "Pick a number, any number" << endl;
	cin >> usersNumber;

	int luckyNumber;

	luckyNumber = doublyLuckyNumber(usersNumber);

	cout << luckyNumber;

	cout << "Enter your name: ";
	string name;
	cin >> name;

	name = capitalizeString(name);

	cout << name;*/


	vector<int> scores;

	
	int score = 0;

	while (score != -1)
	{
		cout << "Enter a score or -1 to stop" << endl;
		cin >> score;
		if (score != -1)
		{
			scores.push_back(score);
		}
	}

	double averageScore = getAverageScore(scores);
	double minScore = getMinScore(scores);
	double maxScore = getMaxScore(scores);
	double standardDeviation = getPopulationStandardDeviation(scores);

	cout << "Average score: " << averageScore << endl;
	cout << "Min score: " << minScore << endl;
	cout << "Max score: " << maxScore << endl;
	cout << "Standard Deviation: " << standardDeviation << endl;

	printTheDate(8, 10, 2019);
	printTheDate(8, 10, 2019, 1);
	printTheDate(8, 10, 2019, 2);

	return 0;
}

int luckyNumber()
{
	return doublyLuckyNumber(21);
}

int doublyLuckyNumber(int number)
{
	return 2 * number;
}