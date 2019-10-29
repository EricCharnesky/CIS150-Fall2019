#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

char menu();
void displayDadJoke();
void saveDadJoke();

int main()
{
	char choice = ' ';

	while (choice != 'Q')
	{
		if (choice == 'R')
		{
			displayDadJoke();
		}
		else if (choice == 'S')
		{
			saveDadJoke();
		}
		choice = menu();
	}
	
	return 0;
}

char menu()
{
	char choice = ' ';
	while (choice != 'R' && choice != 'S' && choice != 'Q')
	{
		cout << "R - read a dad joke to me" << endl;
		cout << "S - save a dad joke" << endl;
		cout << "Q - quit" << endl; 
		cin >> choice;
		choice = toupper(choice);
	}
	return choice;
}

void saveDadJoke()
{
	ofstream outputFileStream;
	outputFileStream.open("dadjokes.txt", ios::app);
	if (!outputFileStream.is_open())
	{
		cout << "Error opening file!" << endl;
	}
	else
	{
		cout << "Type in your dad joke to save:" << endl;
		string joke;
		getline(cin, joke);
		if (joke == "")
		{
			getline(cin, joke);
		}
		outputFileStream << endl << joke << endl;
		outputFileStream.close();
	}
}

void displayDadJoke()
{
	ifstream inputFileStream;
	inputFileStream.open("dadjokes.txt");
	if (!inputFileStream.is_open())
	{
		cout << "Error opening file!" << endl;
	}
	else
	{
		vector<string> jokes;
		while (!inputFileStream.eof())
		{
			string joke;
			getline(inputFileStream, joke);
			if (joke != "")
			{
				jokes.push_back(joke);
			}
		}
		inputFileStream.close();

		int randomIndex = rand() % jokes.size();
		cout << jokes.at(randomIndex) << endl;
	}
	

}