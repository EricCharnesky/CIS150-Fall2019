#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	//int highestNumberToGuess;

	//cout << "Enter the highest number you want guess: ";
	//cin >> highestNumberToGuess;

	//int maxNumberOfGuess;
	//cout << "How many guesses do you want before you lose? ";
	//cin >> maxNumberOfGuess;

	//srand(time(0));
	//int numberToGuess = ( rand() % highestNumberToGuess ) + 1;

	//int numberOfGuesses = 0;

	//int guess = 0;

	//while (guess != numberToGuess && numberOfGuesses != maxNumberOfGuess)
	//{
	//	cout << "Guess a number 1 - " << highestNumberToGuess << endl;
	//	cin >> guess;

	//	// same as numberOfGuess += 1;
	//	numberOfGuesses++;

	//	if (guess < numberToGuess)
	//	{
	//		cout << "Too low!" << endl;
	//	}
	//	else if (guess > numberToGuess)
	//	{
	//		cout << "Too high!" << endl;
	//	}
	//	else
	//	{
	//		cout << "You guessed it in " << numberOfGuesses << " guesses!" << endl;
	//	}
	//}
	//if (guess != numberToGuess)
	//{
	//	cout << "You lose!" << endl;
	//}
	//


	//double total = 0;
	//double receiptAmount = 0;

	//while (receiptAmount != -1)
	//{
	//	total += receiptAmount;
	//	cout << "Enter the receipt amount ( or -1 to stop ): ";
	//	cin >> receiptAmount;
	//}

	//cout << "The total receipts are: " << total << endl;


	//// setting up the number for the for and while loops
	//int numberOfReceipts;
	//cout << "How many receipts do you have? ";
	//cin >> numberOfReceipts;


	//// using a for loop
	//total = 0;

	//for (int numberOfReceiptsEntered = 0;
	//	numberOfReceiptsEntered != numberOfReceipts;
	//	numberOfReceiptsEntered++)
	//{
	//	cout << "Enter the receipt amount: ";
	//	cin >> receiptAmount;
	//	total += receiptAmount;
	//}
	//cout << "The total receipts are: " << total << endl;



	//// using a while loop without a sentinel value

	//total = 0;

	//int numberOfReceiptsEntered = 0;
	//while (numberOfReceiptsEntered != numberOfReceipts)
	//{
	//	cout << "Enter the receipt amount: ";
	//	cin >> receiptAmount;
	//	total += receiptAmount;
	//	numberOfReceiptsEntered++;
	//}
	//cout << "The total receipts are: " << total << endl;
	//


	string name;
	cout << "Enter your name: ";
	cin >> name;

	int numberOfVowels = 0;
	for (int index = 0; index < name.length(); index++)
	{
		char lowerCaseLetter = tolower(name[index]);
		if (lowerCaseLetter == 'a' ||
			lowerCaseLetter == 'e' ||
			lowerCaseLetter == 'i' ||
			lowerCaseLetter == 'o' ||
			lowerCaseLetter == 'u')
		{
			numberOfVowels++;
		}
		
		cout << name[index] << endl;
	}

	// same as for loop above
	int index = 0;
	while (index < name.length())
	{
		char lowerCaseLetter = tolower(name[index]);
		if (lowerCaseLetter == 'a' ||
			lowerCaseLetter == 'e' ||
			lowerCaseLetter == 'i' ||
			lowerCaseLetter == 'o' ||
			lowerCaseLetter == 'u')
		{
			// don't double count
			//numberOfVowels++;
		}
		cout << name[index] << endl;
		index++;
	}

	cout << "There are " << numberOfVowels 
		<< " number of vowels in your name!" << endl;
	
	string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (int firstLetterIndex = 0; firstLetterIndex < alphabet.length(); firstLetterIndex++)
	{
		for (int secondLetterIndex = 0; secondLetterIndex < alphabet.length(); secondLetterIndex++)
		{
			for (int thirdLetterIndex = 0; thirdLetterIndex < alphabet.length(); thirdLetterIndex++)
			{
				cout << alphabet[firstLetterIndex];
				cout << alphabet[secondLetterIndex];
				cout << alphabet[thirdLetterIndex];
				cout << ".com" << endl;
			}
		}
	}

	return 0;
}