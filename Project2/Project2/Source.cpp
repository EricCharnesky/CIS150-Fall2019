#include "RandomWord.h"
#include <iostream>
#include "Source.h"


void printGallows(int numberOfBodyParts)
{
	if (numberOfBodyParts == 0)
	{
		cout << "|------" << endl;
		cout << "|     |" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|_________" << endl;
	}
	else if (numberOfBodyParts == 1)
	{
		cout << "|------" << endl;
		cout << "|     |" << endl;
		cout << "|     O" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|_________" << endl;
	}
	else if (numberOfBodyParts == 2)
	{
		cout << "|------" << endl;
		cout << "|     |" << endl;
		cout << "|     O" << endl;
		cout << "|     |" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|_________" << endl;
	}
	else if (numberOfBodyParts == 3)
	{
		cout << "|------" << endl;
		cout << "|     |" << endl;
		cout << "|     O" << endl;
		cout << "|  -- |" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|_________" << endl;
	}
	else if (numberOfBodyParts == 4)
	{
		cout << "|------" << endl;
		cout << "|     |" << endl;
		cout << "|     O" << endl;
		cout << "|  -- | --" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|_________" << endl;
	}
	else if (numberOfBodyParts == 5)
	{
		cout << "|------" << endl;
		cout << "|     |" << endl;
		cout << "|     O" << endl;
		cout << "|  -- | --" << endl;
		cout << "|     /" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|_________" << endl;
	}
	else if (numberOfBodyParts == 6)
	{
		cout << "|------" << endl;
		cout << "|     |" << endl;
		cout << "|     O" << endl;
		cout << "|  -- | --" << endl;
		cout << "|     /\\" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|_________" << endl;
	}
	cout << endl;
}

bool isLetterInString(string word, char letter)
{
	for (char letterInWord : word)
	{
		if (letter == letterInWord)
		{
			return true;
		}
	}

	return false;
}

char guessALetter(string& lettersGuessed)
{
	cout << "Guess a letter" << endl;
	char letter;
	cin >> letter;

	while (isLetterInString(lettersGuessed, letter))
	{
		cout << "You already guessed this letter, please pick a different one: " << endl;
		cin >> letter;
	}

	lettersGuessed += letter;
	return tolower(letter);
}

void replaceBlanksWithLetter(string wordToGuess, string& blanks, char letterGuessed)
{
	for (int index = 0; index < wordToGuess.length(); index++)
	{
		if (wordToGuess.at(index) == letterGuessed)
		{
			blanks.at(index) = letterGuessed;
		}
	}
}

void printBlanks(string& blanks)
{
	for (int index = 0; index < blanks.length(); index++)
	{
		cout << blanks.at(index) << " ";
	}
	cout << endl;
}

bool playAgain()
{
	char playAgain;
	cout << "Do you want to play again? Y/N" << endl;
	cin >> playAgain;

	return toupper(playAgain) == 'Y';
}

int main()
{
	do
	{
		int numberOfIncorrectGuesses = 0;
		string wordToGuess = getRandomWord();
		string lettersGuessed = "";

		string blanks = "";
		for (int index = 0; index < wordToGuess.length(); index++)
		{
			blanks += "_";
		}

		while (numberOfIncorrectGuesses < 6 && isLetterInString(blanks, '_'))
		{
			printGallows(numberOfIncorrectGuesses);

			printBlanks(blanks);

			char letter = guessALetter(lettersGuessed);
			if (isLetterInString(wordToGuess, letter))
			{
				replaceBlanksWithLetter(wordToGuess, blanks, letter);
			}
			else
			{
				numberOfIncorrectGuesses++;
			}
		}

		if (wordToGuess != blanks)
		{
			printGallows(numberOfIncorrectGuesses);

			cout << "Game over! The word was: " << wordToGuess << endl;
		}
		else
		{
			cout << "You gussed it!" << endl;
		}
		

	} while ( playAgain() );

	return 0;
}