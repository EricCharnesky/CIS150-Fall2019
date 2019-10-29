#include <iostream>
#include <string>

using namespace std;

int main()
{
	// single quote or apostrophe for characters
	char myFirstLetter = 'E';
	char mySecondLetter = 'R';
	char myThirdLetter = 'I';
	char myFourthLetter = 'C';

	// double quotes for strings

	// using the new line escape character is UGLY
	//string name = "Hassan \"Z\" Z\nEric \"Mr. C\"\nRachel";
	//cout << name << endl;
	
	
	
	
	string name = "Hassan \"Z\" Z";
	string ericsName = "Eric \"Mr. C\"";
	string rachelsName = "Rachel";

	cout << myFirstLetter << mySecondLetter << myThirdLetter << myFourthLetter << endl;
	
	cout << name << endl << ericsName << endl << rachelsName;

	cout << "Enter your name: " << endl;

	cin >> name;

	cout << "Hi there, " << name << endl;


	cout << "Let's make a madlib!" << endl;




	/*
	<Name> is having a <theme> party!
	It's oging to be a <place>
	on <day of the week>
	please show up at <time>
	or else you will be required to
	<verb> a <animal>
	*/

	string madlibName;
	string madlibTheme;
	string madlibPlace;
	string madlibTime;
	string madlibDayOfTheWeek;
	string madlibVerb;
	string madlibAnimal;


	cout << "Enter a name: " << endl;
	getline(cin, madlibName);

	cout << "Enter a theme: " << endl;
	getline(cin, madlibTheme);

	cout << "Enter a place: " << endl;
	getline(cin, madlibPlace);

	cout << "Enter a time: " << endl;
	getline(cin, madlibTime);

	cout << "Enter a day of the week: " << endl;
	getline(cin, madlibDayOfTheWeek);

	cout << "Enter a verb: " << endl;
	getline(cin, madlibVerb);

	cout << "Enter a animal: " << endl;
	getline(cin, madlibAnimal);


	cout << madlibName << " is having a " << madlibTheme << " party! "
		<< " It's oging to be at " << madlibPlace << " on " << madlibDayOfTheWeek
		<< " please show up at " << madlibTime << " or else you will be required to "
		<< madlibVerb << " a " << madlibAnimal << endl;

	int die1;
	int die2;
	int guess;

	die1 = rand() % 6 + 1;
	die2 = rand() % 6 + 1;

	cout << "Enter your guess of the sum of 2 six sided dice" << endl;
	cin >> guess;

	cout << "The sum is: " << (die1 + die2) << endl;

	return 0;
}