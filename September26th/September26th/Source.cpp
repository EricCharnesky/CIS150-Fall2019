#include <iostream>

using namespace std;

int main()
{
	/*int rows = -1;
	int width = -1;

	while (rows != 0 && width != 0)
	{
		for (int row = 0; row < rows; row++)
		{
			for (int star = 0; star < width; star++)
			{
				cout << "*";
			}
			cout << endl;
		}

		cout << "How tall of a rectangle do you want ( 0 to quit )?" << endl;
		cin >> rows;

		cout << "How wide of a rectangle do you want ( 0 to quit )?" << endl;
		cin >> width;
	}*/

	/*int triangleSize = 0;

	while (triangleSize % 2 == 0)
	{
		cout << "How large of a triangle do you want ( odd numbers only please )?" << endl;
		cin >> triangleSize;
	}*/
	

	//int numberOfStartToPrint = 1;

	//while (numberOfStartToPrint <= triangleSize)
	//{
	//	for (int star = 0; star < numberOfStartToPrint; star++)
	//	{
	//		cout << "*";
	//	}
	//	cout << endl;
	//	numberOfStartToPrint++;
	//}
	//cout << endl;
	//// same thing in a for loop
	//for (int numberOfStartToPrint = 1; numberOfStartToPrint <= triangleSize; numberOfStartToPrint++)
	//{
	//	for (int star = 0; star < numberOfStartToPrint; star++)
	//	{
	//		cout << "*";
	//	}
	//	cout << endl;
	//}
	
	/*int spacesToPrint = triangleSize / 2;
	int starsToPrint = 1;
	int rows = ( triangleSize / 2 ) + 1;

	for (int row = 0; row < rows; row++)
	{
		for (int space = 0; space < spacesToPrint; space++)
		{
			cout << " ";
		}
		for (int star = 0; star < starsToPrint; star++)
		{
			cout << "*";
		}
		cout << endl;
		spacesToPrint--;
		starsToPrint += 2;
	}
*/

	char playAgain = 'Y';

	while (playAgain == 'Y')
	{
		char userChoice = ' ';
		while (userChoice != 'R' && userChoice != 'P' && userChoice != 'S')
		{
			cout << "Pick (R)ock (P)aper or (S)cissors" << endl;
			cin >> userChoice;
			userChoice = toupper(userChoice);
		}


		int computerRandomChoice = rand() % 3;
		char computerChoice;
		if (computerRandomChoice == 0)
		{
			computerChoice = 'R';
		}
		else if (computerRandomChoice == 1)
		{
			computerChoice = 'P';
		}
		else
		{
			computerChoice = 'S';
		}

		if (computerChoice == userChoice) {
			cout << "Tie!" << endl;
		}
		else if ((computerChoice == 'P' && userChoice == 'R')
			|| (computerChoice == 'R' && userChoice == 'S')
			|| (computerChoice == 'S' && userChoice == 'P'))
		{
			cout << "You lose!" << endl;
		}
		else
		{
			cout << "You win!" << endl;
		}

		cout << "Do you want to play again? Y/N" << endl;
		cin >> playAgain;
		playAgain = toupper(playAgain);
	}

	


	return 0;
}