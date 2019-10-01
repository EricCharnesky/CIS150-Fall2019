#include <iostream>
#include <ctime>

using namespace std;

void printDieRollAsciiArt(int roll)
{
	if (roll == 1)
	{
		cout << "*********" << endl;
		cout << "*       *" << endl;
		cout << "*   *   *" << endl;
		cout << "*       *" << endl;
		cout << "*********" << endl;
	}
	else if (roll == 2)
	{
		cout << "*********" << endl;
		cout << "*   *   *" << endl;
		cout << "*       *" << endl;
		cout << "*   *   *" << endl;
		cout << "*********" << endl;
	}
	else if (roll == 3)
	{
		cout << "*********" << endl;
		cout << "*   *   *" << endl;
		cout << "*   *   *" << endl;
		cout << "*   *   *" << endl;
		cout << "*********" << endl;
	}
	else if (roll == 4)
	{
		cout << "*********" << endl;
		cout << "* *   * *" << endl;
		cout << "*       *" << endl;
		cout << "* *   * *" << endl;
		cout << "*********" << endl;
	}
	else if (roll == 5)
	{
		cout << "*********" << endl;
		cout << "* *   * *" << endl;
		cout << "*   *   *" << endl;
		cout << "* *   * *" << endl;
		cout << "*********" << endl;
	}
	else if (roll == 6)
	{
		cout << "*********" << endl;
		cout << "* *   * *" << endl;
		cout << "* *   * *" << endl;
		cout << "* *   * *" << endl;
		cout << "*********" << endl;
	}
	else
	{
		cout << "*********" << endl;
		cout << "*       *" << endl;
		cout << "*       *" << endl;
		cout << "*       *" << endl;
		cout << "*********" << endl;
	}
}

void printRollingSixSidedDie()
{
	int roll = rand() % 6 + 1;
	cout << roll << endl;
}

int roll6SidedDie()
{
	int roll = rand() % 6 + 1;
	return roll;
}

void printCharacterXTimes(char characterToPrint, int numberOfTimesToPrint)
{
	for (int character = 0; character < numberOfTimesToPrint; character++)
	{
		cout << characterToPrint;
	}
}

int main()
{
	srand(time(0));

	char again = 'Y';

	while (again == 'Y')
	{
		int sum = 0;
		for (int repetition = 0; repetition < 10; repetition++)
		{
			//printRollingSixSidedDie();
			int roll = roll6SidedDie();
			//cout << "You rolled a: " << roll << endl;
			printDieRollAsciiArt('1');
			cout << endl;
			sum += roll;
		}

		cout << "The sum of your rolls is: " << sum << endl;

		cout << "Do you want to do this again? Y/N" << endl;
		cin >> again;
		again = toupper(again);
	}

	int width;
	cout << "How wide? " << endl;
	cin >> width;

	if (width % 2 == 0)
	{
		width++;
	}

	int stars = 1;
	int spaces = width / 2;
	int rows = spaces + 1;

	for (int row = 0; row < rows; row++)
	{
		printCharacterXTimes(' ', spaces);
		printCharacterXTimes('*', stars);
		cout << endl;
		stars += 2;
		spaces--;
	}


	return 0;
}

